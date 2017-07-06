
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#include "php_ext.h"
#include "khttp.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *khttp_request_ce;

ZEND_DECLARE_MODULE_GLOBALS(khttp)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(khttp)
{
	REGISTER_INI_ENTRIES();
	zephir_module_init();
	ZEPHIR_INIT(Khttp_Request);
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(khttp)
{
	zephir_deinitialize_memory(TSRMLS_C);
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_khttp_globals *khttp_globals TSRMLS_DC)
{
	khttp_globals->initialized = 0;

	/* Memory options */
	khttp_globals->active_memory = NULL;

	/* Virtual Symbol Tables */
	khttp_globals->active_symbol_table = NULL;

	/* Cache Enabled */
	khttp_globals->cache_enabled = 1;

	/* Recursive Lock */
	khttp_globals->recursive_lock = 0;

	/* Static cache */
	memset(khttp_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);


}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_khttp_globals *khttp_globals TSRMLS_DC)
{

}

static PHP_RINIT_FUNCTION(khttp)
{

	zend_khttp_globals *khttp_globals_ptr;
#ifdef ZTS
	tsrm_ls = ts_resource(0);
#endif
	khttp_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(khttp_globals_ptr TSRMLS_CC);
	zephir_initialize_memory(khttp_globals_ptr TSRMLS_CC);


	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(khttp)
{
	
	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}

static PHP_MINFO_FUNCTION(khttp)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_KHTTP_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_KHTTP_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_KHTTP_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_KHTTP_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_KHTTP_ZEPVERSION);
	php_info_print_table_end();

	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(khttp)
{
	php_zephir_init_globals(khttp_globals TSRMLS_CC);
	php_zephir_init_module_globals(khttp_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(khttp)
{

}


zend_function_entry php_khttp_functions[] = {
ZEND_FE_END

};

zend_module_entry khttp_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	NULL,
	PHP_KHTTP_EXTNAME,
	php_khttp_functions,
	PHP_MINIT(khttp),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(khttp),
#else
	NULL,
#endif
	PHP_RINIT(khttp),
	PHP_RSHUTDOWN(khttp),
	PHP_MINFO(khttp),
	PHP_KHTTP_VERSION,
	ZEND_MODULE_GLOBALS(khttp),
	PHP_GINIT(khttp),
	PHP_GSHUTDOWN(khttp),
	NULL,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_KHTTP
ZEND_GET_MODULE(khttp)
#endif
