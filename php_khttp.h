
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_KHTTP_H
#define PHP_KHTTP_H 1

#ifdef PHP_WIN32
#define ZEPHIR_RELEASE 1
#endif

#include "kernel/globals.h"

#define PHP_KHTTP_NAME        "khttp"
#define PHP_KHTTP_VERSION     "0.1.1"
#define PHP_KHTTP_EXTNAME     "khttp"
#define PHP_KHTTP_AUTHOR      "Sgenmi"
#define PHP_KHTTP_ZEPVERSION  "0.9.3a-dev-5c0fb106a6"
#define PHP_KHTTP_DESCRIPTION "QQ:150560159"



ZEND_BEGIN_MODULE_GLOBALS(khttp)

	int initialized;

	/* Memory */
	zephir_memory_entry *start_memory; /**< The first preallocated frame */
	zephir_memory_entry *end_memory; /**< The last preallocate frame */
	zephir_memory_entry *active_memory; /**< The current memory frame */

	/* Virtual Symbol Tables */
	zephir_symbol_table *active_symbol_table;

	/** Function cache */
	HashTable *fcache;

	zephir_fcall_cache_entry *scache[ZEPHIR_MAX_CACHE_SLOTS];

	/* Cache enabled */
	unsigned int cache_enabled;

	/* Max recursion control */
	unsigned int recursive_lock;

	/* Global constants */
	zval *global_true;
	zval *global_false;
	zval *global_null;
	
ZEND_END_MODULE_GLOBALS(khttp)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(khttp)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) TSRMG(khttp_globals_id, zend_khttp_globals *, v)
#else
	#define ZEPHIR_GLOBAL(v) (khttp_globals.v)
#endif

#ifdef ZTS
	#define ZEPHIR_VGLOBAL ((zend_khttp_globals *) (*((void ***) tsrm_ls))[TSRM_UNSHUFFLE_RSRC_ID(khttp_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(khttp_globals)
#endif

#define ZEPHIR_API ZEND_API

#define zephir_globals_def khttp_globals
#define zend_zephir_globals_def zend_khttp_globals

extern zend_module_entry khttp_module_entry;
#define phpext_khttp_ptr &khttp_module_entry

#endif
