
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_KHTTP_H
#define PHP_KHTTP_H 1

#ifdef PHP_WIN32
#define ZEPHIR_RELEASE 1
#endif

#include "kernel/globals.h"

#define PHP_KHTTP_NAME        "khttp"
#define PHP_KHTTP_VERSION     "0.1.2"
#define PHP_KHTTP_EXTNAME     "khttp"
#define PHP_KHTTP_AUTHOR      "Sgenmi(150560159@qq.com)"
#define PHP_KHTTP_ZEPVERSION  "0.9.9"
#define PHP_KHTTP_DESCRIPTION ""



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

	
ZEND_END_MODULE_GLOBALS(khttp)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(khttp)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) ZEND_MODULE_GLOBALS_ACCESSOR(khttp, v)
#else
	#define ZEPHIR_GLOBAL(v) (khttp_globals.v)
#endif

#ifdef ZTS
	void ***tsrm_ls;
	#define ZEPHIR_VGLOBAL ((zend_khttp_globals *) (*((void ***) tsrm_get_ls_cache()))[TSRM_UNSHUFFLE_RSRC_ID(khttp_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(khttp_globals)
#endif

#define ZEPHIR_API ZEND_API

#define zephir_globals_def khttp_globals
#define zend_zephir_globals_def zend_khttp_globals

extern zend_module_entry khttp_module_entry;
#define phpext_khttp_ptr &khttp_module_entry

#endif
