
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/array.h"
#include "kernel/math.h"
#include "kernel/operators.h"
#include "kernel/fcall.h"
#include "kernel/concat.h"
#include "kernel/object.h"
#include "kernel/hash.h"


ZEPHIR_INIT_CLASS(Khttp_Request) {

	ZEPHIR_REGISTER_CLASS(Khttp, Request, khttp, request, khttp_request_method_entry, 0);

	zend_declare_property_long(khttp_request_ce, SL("timeout"), 5, ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_string(khttp_request_ce, SL("useragent"), "Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.1 (KHTML, like Gecko) Chrome/21.0.1180.89 Safari/537.1", ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_long(khttp_request_ce, SL("followlocation"), 1, ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_long(khttp_request_ce, SL("maxredirs"), 1, ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_bool(khttp_request_ce, SL("is_rand_ip"), 1, ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_string(khttp_request_ce, SL("rand_ip"), "", ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_string(khttp_request_ce, SL("referer"), "http://www.baidu.com", ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(khttp_request_ce, SL("proxy"), ZEND_ACC_PRIVATE TSRMLS_CC);

	khttp_request_ce->create_object = zephir_init_properties_Khttp_Request;
	return SUCCESS;

}

PHP_METHOD(Khttp_Request, Rand_IP) {

	zval *ip2 = NULL, *ip3 = NULL, *ip4 = NULL, *arr_1 = NULL, *_0 = NULL, _1, _2, _3, _4, _5, _6, *_7 = NULL, *_8, _9, *_10;
	long rand_key = 0;
	int ZEPHIR_LAST_CALL_STATUS, ip1 = 0;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(arr_1);
	zephir_create_array(arr_1, 32, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_0);
	ZVAL_LONG(_0, 218);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 218);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 66);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 66);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 218);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 218);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 60);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 60);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 202);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 204);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 66);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 66);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 66);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 59);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 61);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 60);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 222);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 221);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 66);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 59);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 60);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 60);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 66);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 218);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 218);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 62);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 63);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 64);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 66);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 66);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 122);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_LONG(_0, 211);
	zephir_array_fast_append(arr_1, _0);
	ZEPHIR_SINIT_VAR(_1);
	ZVAL_LONG(&_1, 2);
	ZEPHIR_SINIT_VAR(_2);
	ZVAL_LONG(&_2, 250);
	ZEPHIR_INIT_VAR(ip2);
	ZVAL_LONG(ip2, zephir_mt_rand(zephir_get_intval(&_1), zephir_get_intval(&_2) TSRMLS_CC));
	ZEPHIR_SINIT_VAR(_3);
	ZVAL_LONG(&_3, 2);
	ZEPHIR_SINIT_VAR(_4);
	ZVAL_LONG(&_4, 250);
	ZEPHIR_INIT_VAR(ip3);
	ZVAL_LONG(ip3, zephir_mt_rand(zephir_get_intval(&_3), zephir_get_intval(&_4) TSRMLS_CC));
	ZEPHIR_SINIT_VAR(_5);
	ZVAL_LONG(&_5, 2);
	ZEPHIR_SINIT_VAR(_6);
	ZVAL_LONG(&_6, 250);
	ZEPHIR_INIT_VAR(ip4);
	ZVAL_LONG(ip4, zephir_mt_rand(zephir_get_intval(&_5), zephir_get_intval(&_6) TSRMLS_CC));
	ZEPHIR_CALL_FUNCTION(&_7, "array_rand", NULL, 1, arr_1);
	zephir_check_call_status();
	rand_key = zephir_get_intval(_7);
	ZEPHIR_OBS_VAR(_8);
	zephir_array_fetch_long(&_8, arr_1, rand_key, PH_NOISY, "khttp/request.zep", 25 TSRMLS_CC);
	ip1 = zephir_get_intval(_8);
	ZEPHIR_SINIT_VAR(_9);
	ZVAL_LONG(&_9, ip1);
	ZEPHIR_INIT_VAR(_10);
	ZEPHIR_CONCAT_VSVSVSV(_10, &_9, ".", ip2, ".", ip3, ".", ip4);
	zephir_update_property_this(this_ptr, SL("rand_ip"), _10 TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Khttp_Request, get_ip) {

	int ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(NULL, this_ptr, "rand_ip", NULL, 2);
	zephir_check_call_status();
	RETURN_MM_MEMBER(this_ptr, "rand_ip");

}

PHP_METHOD(Khttp_Request, set_ip) {

	zval *ip_param = NULL;
	zval *ip = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &ip_param);

	zephir_get_strval(ip, ip_param);


	if (!(!ip) && Z_STRLEN_P(ip)) {
		zephir_update_property_this(this_ptr, SL("rand_ip"), ip TSRMLS_CC);
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Khttp_Request, set_timeout) {

	zval *timeout_param = NULL, *_0$$3;
	int timeout;

	zephir_fetch_params(0, 1, 0, &timeout_param);

	timeout = zephir_get_intval(timeout_param);


	if (timeout > 0) {
		ZEPHIR_INIT_ZVAL_NREF(_0$$3);
		ZVAL_LONG(_0$$3, timeout);
		zephir_update_property_this(this_ptr, SL("timeout"), _0$$3 TSRMLS_CC);
	}

}

PHP_METHOD(Khttp_Request, set_useragent) {

	zval *useragent_param = NULL;
	zval *useragent = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &useragent_param);

	zephir_get_strval(useragent, useragent_param);


	if (!(!useragent) && Z_STRLEN_P(useragent)) {
		zephir_update_property_this(this_ptr, SL("useragent"), useragent TSRMLS_CC);
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Khttp_Request, set_followlocation) {

	zval *followlocation_param = NULL, *_0$$3;
	int followlocation;

	zephir_fetch_params(0, 1, 0, &followlocation_param);

	followlocation = zephir_get_intval(followlocation_param);


	if (followlocation > 0) {
		ZEPHIR_INIT_ZVAL_NREF(_0$$3);
		ZVAL_LONG(_0$$3, followlocation);
		zephir_update_property_this(this_ptr, SL("followlocation"), _0$$3 TSRMLS_CC);
	}

}

PHP_METHOD(Khttp_Request, set_maxredirs) {

	zval *maxredirs_param = NULL, *_0$$3;
	int maxredirs;

	zephir_fetch_params(0, 1, 0, &maxredirs_param);

	maxredirs = zephir_get_intval(maxredirs_param);


	if (maxredirs > 0) {
		ZEPHIR_INIT_ZVAL_NREF(_0$$3);
		ZVAL_LONG(_0$$3, maxredirs);
		zephir_update_property_this(this_ptr, SL("maxredirs"), _0$$3 TSRMLS_CC);
	}

}

PHP_METHOD(Khttp_Request, set_is_rand_ip) {

	zval *is_param = NULL;
	zend_bool is;

	zephir_fetch_params(0, 1, 0, &is_param);

	is = zephir_get_boolval(is_param);


	if (is) {
		zephir_update_property_this(this_ptr, SL("is_rand_ip"), ZEPHIR_GLOBAL(global_true) TSRMLS_CC);
	} else {
		zephir_update_property_this(this_ptr, SL("is_rand_ip"), ZEPHIR_GLOBAL(global_false) TSRMLS_CC);
	}

}

PHP_METHOD(Khttp_Request, set_referer) {

	zval *referer_param = NULL;
	zval *referer = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &referer_param);

	zephir_get_strval(referer, referer_param);


	if (!(!referer) && Z_STRLEN_P(referer)) {
		zephir_update_property_this(this_ptr, SL("referer"), referer TSRMLS_CC);
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Khttp_Request, set_proxy) {

	zend_bool _0;
	zval *proxy_param = NULL;
	zval *proxy = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &proxy_param);

	zephir_get_arrval(proxy, proxy_param);


	_0 = 1 == 1;
	if (_0) {
		_0 = zephir_fast_count_int(proxy TSRMLS_CC) > 0;
	}
	if (_0) {
		zephir_update_property_this(this_ptr, SL("proxy"), proxy TSRMLS_CC);
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Khttp_Request, http) {

	zend_bool _47, _25$$3, _60$$11;
	HashTable *_1, *_53;
	HashPosition _0, _52;
	long nch;
	zephir_fcall_cache_entry *_4 = NULL, *_6 = NULL, *_9 = NULL, *_28 = NULL, *_45 = NULL, *_46 = NULL, *_49 = NULL, *_51 = NULL, *_57 = NULL, *_59 = NULL, *_63 = NULL, *_66 = NULL, *_68 = NULL;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *urlarr_param = NULL, *code = NULL, *err = NULL, *moudle = NULL, *node = NULL, *ch = NULL, *v = NULL, *proxy_key = NULL, *mh = NULL, **_2, *running = NULL, *mrc = NULL, **_54, *_3$$3, *_5$$3 = NULL, *_7$$3, _8$$3 = zval_used_for_init, *_10$$3, *_11$$3, *_12$$3, *_13$$3 = NULL, *_14$$3, *_21$$3, *_22$$3, *_23$$3, *_24$$3 = NULL, *_26$$3, *_38$$3, *_39$$3, *_40$$3, *_41$$3, *_42$$3, *_43$$3, *_44$$3, *_15$$5, *_16$$5 = NULL, *_17$$5, *_18$$5 = NULL, *_19$$5, *_20$$5 = NULL, *_27$$6, *_29$$6, *_30$$6, *_31$$6, *_32$$6, _33$$6 = zval_used_for_init, *_34$$6, *_35$$6, *_36$$6, *_37$$6, *_48$$8 = NULL, _50$$9 = zval_used_for_init, *_55$$11, _56$$11 = zval_used_for_init, *_58$$11, *_65$$11, *_67$$11, *_61$$12, *_62$$12 = NULL, *_64$$12;
	zval *urlarr = NULL, *result, *res, *headerArr = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &urlarr_param);

	zephir_get_arrval(urlarr, urlarr_param);


	ZEPHIR_INIT_VAR(result);
	array_init(result);
	ZEPHIR_INIT_VAR(res);
	array_init(res);
	ZEPHIR_INIT_VAR(headerArr);
	array_init(headerArr);
	nch = 0;
	ZEPHIR_INIT_VAR(ch);
	array_init(ch);
	ZEPHIR_CALL_FUNCTION(&mh, "curl_multi_init", NULL, 3);
	zephir_check_call_status();
	zephir_is_iterable(urlarr, &_1, &_0, 0, 0, "khttp/request.zep", 134);
	for (
	  ; zephir_hash_get_current_data_ex(_1, (void**) &_2, &_0) == SUCCESS
	  ; zephir_hash_move_forward_ex(_1, &_0)
	) {
		ZEPHIR_GET_HVALUE(v, _2);
		_3$$3 = zephir_fetch_nproperty_this(this_ptr, SL("is_rand_ip"), PH_NOISY_CC);
		if (zephir_is_true(_3$$3)) {
			ZEPHIR_CALL_METHOD(NULL, this_ptr, "rand_ip", &_4, 2);
			zephir_check_call_status();
		}
		ZEPHIR_CALL_FUNCTION(&_5$$3, "curl_init", &_6, 4);
		zephir_check_call_status();
		zephir_array_update_long(&ch, nch, &_5$$3, PH_COPY | PH_SEPARATE ZEPHIR_DEBUG_PARAMS_DUMMY);
		ZEPHIR_INIT_NVAR(headerArr);
		array_init(headerArr);
		zephir_array_fetch_long(&_7$$3, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 107 TSRMLS_CC);
		ZEPHIR_SINIT_NVAR(_8$$3);
		ZVAL_LONG(&_8$$3, 19913);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_9, 5, _7$$3, &_8$$3, ZEPHIR_GLOBAL(global_true));
		zephir_check_call_status();
		zephir_array_fetch_long(&_10$$3, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 108 TSRMLS_CC);
		zephir_array_fetch_string(&_11$$3, v, SL("url"), PH_NOISY | PH_READONLY, "khttp/request.zep", 108 TSRMLS_CC);
		ZEPHIR_SINIT_NVAR(_8$$3);
		ZVAL_LONG(&_8$$3, 10002);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_9, 5, _10$$3, &_8$$3, _11$$3);
		zephir_check_call_status();
		_12$$3 = zephir_fetch_nproperty_this(this_ptr, SL("referer"), PH_NOISY_CC);
		ZEPHIR_INIT_LNVAR(_13$$3);
		ZEPHIR_CONCAT_SV(_13$$3, "Referer:", _12$$3);
		zephir_array_append(&headerArr, _13$$3, PH_SEPARATE, "khttp/request.zep", 110);
		_14$$3 = zephir_fetch_nproperty_this(this_ptr, SL("rand_ip"), PH_NOISY_CC);
		if (zephir_is_true(_14$$3)) {
			_15$$5 = zephir_fetch_nproperty_this(this_ptr, SL("rand_ip"), PH_NOISY_CC);
			ZEPHIR_INIT_LNVAR(_16$$5);
			ZEPHIR_CONCAT_SV(_16$$5, "CLIENT-IP:", _15$$5);
			zephir_array_append(&headerArr, _16$$5, PH_SEPARATE, "khttp/request.zep", 112);
			_17$$5 = zephir_fetch_nproperty_this(this_ptr, SL("rand_ip"), PH_NOISY_CC);
			ZEPHIR_INIT_LNVAR(_18$$5);
			ZEPHIR_CONCAT_SV(_18$$5, "X-FORWARDED-FOR:", _17$$5);
			zephir_array_append(&headerArr, _18$$5, PH_SEPARATE, "khttp/request.zep", 113);
			_19$$5 = zephir_fetch_nproperty_this(this_ptr, SL("rand_ip"), PH_NOISY_CC);
			ZEPHIR_INIT_LNVAR(_20$$5);
			ZEPHIR_CONCAT_SV(_20$$5, "REMOTE_ADDR:", _19$$5);
			zephir_array_append(&headerArr, _20$$5, PH_SEPARATE, "khttp/request.zep", 114);
		}
		zephir_array_fetch_long(&_21$$3, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 116 TSRMLS_CC);
		ZEPHIR_SINIT_NVAR(_8$$3);
		ZVAL_LONG(&_8$$3, 10023);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_9, 5, _21$$3, &_8$$3, headerArr);
		zephir_check_call_status();
		zephir_array_fetch_long(&_22$$3, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 117 TSRMLS_CC);
		_23$$3 = zephir_fetch_nproperty_this(this_ptr, SL("useragent"), PH_NOISY_CC);
		ZEPHIR_SINIT_NVAR(_8$$3);
		ZVAL_LONG(&_8$$3, 10018);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_9, 5, _22$$3, &_8$$3, _23$$3);
		zephir_check_call_status();
		ZEPHIR_OBS_NVAR(_24$$3);
		zephir_read_property_this(&_24$$3, this_ptr, SL("proxy"), PH_NOISY_CC);
		_25$$3 = Z_TYPE_P(_24$$3) == IS_ARRAY;
		if (_25$$3) {
			_26$$3 = zephir_fetch_nproperty_this(this_ptr, SL("proxy"), PH_NOISY_CC);
			_25$$3 = zephir_fast_count_int(_26$$3 TSRMLS_CC) > 0;
		}
		if (_25$$3) {
			_27$$6 = zephir_fetch_nproperty_this(this_ptr, SL("proxy"), PH_NOISY_CC);
			ZEPHIR_CALL_FUNCTION(&proxy_key, "array_rand", &_28, 1, _27$$6);
			zephir_check_call_status();
			zephir_array_fetch_long(&_29$$6, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 123 TSRMLS_CC);
			_30$$6 = zephir_fetch_nproperty_this(this_ptr, SL("proxy"), PH_NOISY_CC);
			zephir_array_fetch(&_31$$6, _30$$6, proxy_key, PH_NOISY | PH_READONLY, "khttp/request.zep", 123 TSRMLS_CC);
			zephir_array_fetch_string(&_32$$6, _31$$6, SL("ip"), PH_NOISY | PH_READONLY, "khttp/request.zep", 123 TSRMLS_CC);
			ZEPHIR_SINIT_NVAR(_33$$6);
			ZVAL_LONG(&_33$$6, 10004);
			ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_9, 5, _29$$6, &_33$$6, _32$$6);
			zephir_check_call_status();
			zephir_array_fetch_long(&_34$$6, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 124 TSRMLS_CC);
			_35$$6 = zephir_fetch_nproperty_this(this_ptr, SL("proxy"), PH_NOISY_CC);
			zephir_array_fetch(&_36$$6, _35$$6, proxy_key, PH_NOISY | PH_READONLY, "khttp/request.zep", 124 TSRMLS_CC);
			zephir_array_fetch_string(&_37$$6, _36$$6, SL("port"), PH_NOISY | PH_READONLY, "khttp/request.zep", 124 TSRMLS_CC);
			ZEPHIR_SINIT_NVAR(_33$$6);
			ZVAL_LONG(&_33$$6, 59);
			ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_9, 5, _34$$6, &_33$$6, _37$$6);
			zephir_check_call_status();
		}
		zephir_array_fetch_long(&_38$$3, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 127 TSRMLS_CC);
		_39$$3 = zephir_fetch_nproperty_this(this_ptr, SL("timeout"), PH_NOISY_CC);
		ZEPHIR_SINIT_NVAR(_8$$3);
		ZVAL_LONG(&_8$$3, 13);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_9, 5, _38$$3, &_8$$3, _39$$3);
		zephir_check_call_status();
		zephir_array_fetch_long(&_40$$3, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 128 TSRMLS_CC);
		_41$$3 = zephir_fetch_nproperty_this(this_ptr, SL("followlocation"), PH_NOISY_CC);
		ZEPHIR_SINIT_NVAR(_8$$3);
		ZVAL_LONG(&_8$$3, 52);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_9, 5, _40$$3, &_8$$3, _41$$3);
		zephir_check_call_status();
		zephir_array_fetch_long(&_42$$3, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 129 TSRMLS_CC);
		_43$$3 = zephir_fetch_nproperty_this(this_ptr, SL("maxredirs"), PH_NOISY_CC);
		ZEPHIR_SINIT_NVAR(_8$$3);
		ZVAL_LONG(&_8$$3, 68);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_9, 5, _42$$3, &_8$$3, _43$$3);
		zephir_check_call_status();
		zephir_array_fetch_long(&_44$$3, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 130 TSRMLS_CC);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_multi_add_handle", &_45, 6, mh, _44$$3);
		zephir_check_call_status();
		nch = (nch + 1);
	}
	ZEPHIR_INIT_VAR(running);
	ZVAL_NULL(running);
	do {
		ZEPHIR_MAKE_REF(running);
		ZEPHIR_CALL_FUNCTION(&mrc, "curl_multi_exec", &_46, 7, mh, running);
		ZEPHIR_UNREF(running);
		zephir_check_call_status();
	} while (ZEPHIR_IS_LONG(mrc, -1));
	while (1) {
		_47 = zephir_is_true(running);
		if (_47) {
			_47 = ZEPHIR_IS_LONG(mrc, 0);
		}
		if (!(_47)) {
			break;
		}
		ZEPHIR_CALL_FUNCTION(&_48$$8, "curl_multi_select", &_49, 8, mh);
		zephir_check_call_status();
		if (ZEPHIR_IS_LONG(_48$$8, -1)) {
			ZEPHIR_SINIT_NVAR(_50$$9);
			ZVAL_LONG(&_50$$9, 100);
			ZEPHIR_CALL_FUNCTION(NULL, "usleep", &_51, 9, &_50$$9);
			zephir_check_call_status();
		}
		do {
			ZEPHIR_MAKE_REF(running);
			ZEPHIR_CALL_FUNCTION(&mrc, "curl_multi_exec", &_46, 7, mh, running);
			ZEPHIR_UNREF(running);
			zephir_check_call_status();
		} while (ZEPHIR_IS_LONG(mrc, -1));
	}
	nch = 0;
	zephir_is_iterable(urlarr, &_53, &_52, 0, 0, "khttp/request.zep", 163);
	for (
	  ; zephir_hash_get_current_data_ex(_53, (void**) &_54, &_52) == SUCCESS
	  ; zephir_hash_move_forward_ex(_53, &_52)
	) {
		ZEPHIR_GET_HMKEY(moudle, _53, _52);
		ZEPHIR_GET_HVALUE(node, _54);
		zephir_array_fetch_long(&_55$$11, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 151 TSRMLS_CC);
		ZEPHIR_SINIT_NVAR(_56$$11);
		ZVAL_LONG(&_56$$11, 2097154);
		ZEPHIR_CALL_FUNCTION(&code, "curl_getinfo", &_57, 10, _55$$11, &_56$$11);
		zephir_check_call_status();
		zephir_array_fetch_long(&_58$$11, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 152 TSRMLS_CC);
		ZEPHIR_CALL_FUNCTION(&err, "curl_error", &_59, 11, _58$$11);
		zephir_check_call_status();
		_60$$11 = ZEPHIR_IS_STRING(err, "");
		if (_60$$11) {
			_60$$11 = ZEPHIR_IS_LONG(code, 200);
		}
		if (_60$$11) {
			zephir_array_fetch_long(&_61$$12, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 154 TSRMLS_CC);
			ZEPHIR_CALL_FUNCTION(&_62$$12, "curl_multi_getcontent", &_63, 12, _61$$12);
			zephir_check_call_status();
			zephir_array_update_long(&res, nch, &_62$$12, PH_COPY | PH_SEPARATE ZEPHIR_DEBUG_PARAMS_DUMMY);
			zephir_array_fetch_long(&_64$$12, res, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 155 TSRMLS_CC);
			zephir_array_update_zval(&result, moudle, &_64$$12, PH_COPY | PH_SEPARATE);
		} else {
			zephir_array_update_zval(&result, moudle, &ZEPHIR_GLOBAL(global_false), PH_COPY | PH_SEPARATE);
		}
		zephir_array_fetch_long(&_65$$11, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 159 TSRMLS_CC);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_multi_remove_handle", &_66, 13, mh, _65$$11);
		zephir_check_call_status();
		zephir_array_fetch_long(&_67$$11, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 160 TSRMLS_CC);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_close", &_68, 14, _67$$11);
		zephir_check_call_status();
		nch = (nch + 1);
	}
	RETURN_CTOR(result);

}

zend_object_value zephir_init_properties_Khttp_Request(zend_class_entry *class_type TSRMLS_DC) {

		zval *_0, *_1$$3;

		ZEPHIR_MM_GROW();
	
	{
		zval *this_ptr = NULL;
		ZEPHIR_CREATE_OBJECT(this_ptr, class_type);
		_0 = zephir_fetch_nproperty_this(this_ptr, SL("proxy"), PH_NOISY_CC);
		if (Z_TYPE_P(_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(_1$$3);
			array_init(_1$$3);
			zephir_update_property_this(this_ptr, SL("proxy"), _1$$3 TSRMLS_CC);
		}
		ZEPHIR_MM_RESTORE();
		return Z_OBJVAL_P(this_ptr);
	}

}

