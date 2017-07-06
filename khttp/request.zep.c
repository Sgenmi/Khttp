
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


ZEPHIR_INIT_CLASS(Khttp_Request) {

	ZEPHIR_REGISTER_CLASS(Khttp, Request, khttp, request, khttp_request_method_entry, 0);

	zend_declare_property_long(khttp_request_ce, SL("timeout"), 500, ZEND_ACC_PRIVATE TSRMLS_CC);

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

	zval ip2, ip3, ip4, arr_1, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10;
	long rand_key = 0;
	zend_long ZEPHIR_LAST_CALL_STATUS, ip1 = 0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&ip2);
	ZVAL_UNDEF(&ip3);
	ZVAL_UNDEF(&ip4);
	ZVAL_UNDEF(&arr_1);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&arr_1);
	zephir_create_array(&arr_1, 32, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_LONG(&_0, 218);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 218);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 66);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 66);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 218);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 218);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 60);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 60);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 202);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 204);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 66);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 66);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 66);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 59);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 61);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 60);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 222);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 221);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 66);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 59);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 60);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 60);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 66);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 218);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 218);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 62);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 63);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 64);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 66);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 66);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 122);
	zephir_array_fast_append(&arr_1, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 211);
	zephir_array_fast_append(&arr_1, &_0);
	ZVAL_LONG(&_1, 2);
	ZVAL_LONG(&_2, 250);
	ZEPHIR_INIT_VAR(&ip2);
	ZVAL_LONG(&ip2, zephir_mt_rand(zephir_get_intval(&_1), zephir_get_intval(&_2) TSRMLS_CC));
	ZVAL_LONG(&_3, 2);
	ZVAL_LONG(&_4, 250);
	ZEPHIR_INIT_VAR(&ip3);
	ZVAL_LONG(&ip3, zephir_mt_rand(zephir_get_intval(&_3), zephir_get_intval(&_4) TSRMLS_CC));
	ZVAL_LONG(&_5, 2);
	ZVAL_LONG(&_6, 250);
	ZEPHIR_INIT_VAR(&ip4);
	ZVAL_LONG(&ip4, zephir_mt_rand(zephir_get_intval(&_5), zephir_get_intval(&_6) TSRMLS_CC));
	ZEPHIR_CALL_FUNCTION(&_7, "array_rand", NULL, 1, &arr_1);
	zephir_check_call_status();
	rand_key = zephir_get_intval(&_7);
	ZEPHIR_OBS_VAR(&_8);
	zephir_array_fetch_long(&_8, &arr_1, rand_key, PH_NOISY, "khttp/request.zep", 25 TSRMLS_CC);
	ip1 = zephir_get_intval(&_8);
	ZEPHIR_SINIT_VAR(_9);
	ZVAL_LONG(&_9, ip1);
	ZEPHIR_INIT_VAR(&_10);
	ZEPHIR_CONCAT_VSVSVSV(&_10, &_9, ".", &ip2, ".", &ip3, ".", &ip4);
	zephir_update_property_zval(this_ptr, SL("rand_ip"), &_10);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Khttp_Request, get_ip) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();


	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(NULL, this_ptr, "rand_ip", NULL, 2);
	zephir_check_call_status();
	RETURN_MM_MEMBER(getThis(), "rand_ip");

}

PHP_METHOD(Khttp_Request, set_ip) {

	zval *ip_param = NULL;
	zval ip;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&ip);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &ip_param);

	zephir_get_strval(&ip, ip_param);


	if (!(Z_TYPE_P(&ip) == IS_UNDEF) && Z_STRLEN_P(&ip)) {
		zephir_update_property_zval(this_ptr, SL("rand_ip"), &ip);
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Khttp_Request, set_timeout) {

	zval *timeout_param = NULL, _0$$3;
	zend_long timeout;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0$$3);

	zephir_fetch_params(0, 1, 0, &timeout_param);

	timeout = zephir_get_intval(timeout_param);


	if (timeout > 0) {
		ZEPHIR_INIT_ZVAL_NREF(_0$$3);
		ZVAL_LONG(&_0$$3, timeout);
		zephir_update_property_zval(this_ptr, SL("timeout"), &_0$$3);
	}

}

PHP_METHOD(Khttp_Request, set_useragent) {

	zval *useragent_param = NULL;
	zval useragent;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&useragent);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &useragent_param);

	zephir_get_strval(&useragent, useragent_param);


	if (!(Z_TYPE_P(&useragent) == IS_UNDEF) && Z_STRLEN_P(&useragent)) {
		zephir_update_property_zval(this_ptr, SL("useragent"), &useragent);
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Khttp_Request, set_followlocation) {

	zval *followlocation_param = NULL, _0$$3;
	zend_long followlocation;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0$$3);

	zephir_fetch_params(0, 1, 0, &followlocation_param);

	followlocation = zephir_get_intval(followlocation_param);


	if (followlocation > 0) {
		ZEPHIR_INIT_ZVAL_NREF(_0$$3);
		ZVAL_LONG(&_0$$3, followlocation);
		zephir_update_property_zval(this_ptr, SL("followlocation"), &_0$$3);
	}

}

PHP_METHOD(Khttp_Request, set_maxredirs) {

	zval *maxredirs_param = NULL, _0$$3;
	zend_long maxredirs;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0$$3);

	zephir_fetch_params(0, 1, 0, &maxredirs_param);

	maxredirs = zephir_get_intval(maxredirs_param);


	if (maxredirs > 0) {
		ZEPHIR_INIT_ZVAL_NREF(_0$$3);
		ZVAL_LONG(&_0$$3, maxredirs);
		zephir_update_property_zval(this_ptr, SL("maxredirs"), &_0$$3);
	}

}

PHP_METHOD(Khttp_Request, set_is_rand_ip) {

	zval *is_param = NULL, __$true, __$false;
	zend_bool is;
	zval *this_ptr = getThis();

	ZVAL_BOOL(&__$true, 1);
	ZVAL_BOOL(&__$false, 0);

	zephir_fetch_params(0, 1, 0, &is_param);

	is = zephir_get_boolval(is_param);


	if (is) {
		zephir_update_property_zval(this_ptr, SL("is_rand_ip"), &__$true);
	} else {
		zephir_update_property_zval(this_ptr, SL("is_rand_ip"), &__$false);
	}

}

PHP_METHOD(Khttp_Request, set_referer) {

	zval *referer_param = NULL;
	zval referer;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&referer);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &referer_param);

	zephir_get_strval(&referer, referer_param);


	if (!(Z_TYPE_P(&referer) == IS_UNDEF) && Z_STRLEN_P(&referer)) {
		zephir_update_property_zval(this_ptr, SL("referer"), &referer);
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Khttp_Request, set_proxy) {

	zend_bool _0;
	zval *proxy_param = NULL;
	zval proxy;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&proxy);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &proxy_param);

	zephir_get_arrval(&proxy, proxy_param);


	_0 = 1 == 1;
	if (_0) {
		_0 = zephir_fast_count_int(&proxy TSRMLS_CC) > 0;
	}
	if (_0) {
		zephir_update_property_zval(this_ptr, SL("proxy"), &proxy);
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Khttp_Request, http) {

	zval _35$$3, _47$$9;
	zend_bool _20$$3;
	zend_string *_2;
	zend_ulong _1;
	zephir_fcall_cache_entry *_4 = NULL, *_5 = NULL, *_7 = NULL, *_22 = NULL, *_34 = NULL, *_36 = NULL, *_37 = NULL, *_39 = NULL, *_41 = NULL, *_43 = NULL, *_49 = NULL, *_51 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *urlarr_param = NULL, __$true, ch, v, proxy_key, url_k, mh, *_0, running, mrc, _3$$3, _6$$3, _8$$3, _9$$3, _10$$3, _17$$3, _18$$3, _19$$3, _30$$3, _31$$3, _32$$3, _33$$3, _11$$5, _12$$5, _13$$5, _14$$5, _15$$5, _16$$5, _21$$6, _23$$6, _24$$6, _25$$6, _26$$6, _27$$6, _28$$6, _29$$6, done$$7, info$$9, _38$$9, error$$9, _40$$9, results$$9, _42$$9, _45$$9, _46$$9, _48$$9, _50$$9;
	zval urlarr, headerArr, map, responses, _44$$9;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&urlarr);
	ZVAL_UNDEF(&headerArr);
	ZVAL_UNDEF(&map);
	ZVAL_UNDEF(&responses);
	ZVAL_UNDEF(&_44$$9);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&ch);
	ZVAL_UNDEF(&v);
	ZVAL_UNDEF(&proxy_key);
	ZVAL_UNDEF(&url_k);
	ZVAL_UNDEF(&mh);
	ZVAL_UNDEF(&running);
	ZVAL_UNDEF(&mrc);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_9$$3);
	ZVAL_UNDEF(&_10$$3);
	ZVAL_UNDEF(&_17$$3);
	ZVAL_UNDEF(&_18$$3);
	ZVAL_UNDEF(&_19$$3);
	ZVAL_UNDEF(&_30$$3);
	ZVAL_UNDEF(&_31$$3);
	ZVAL_UNDEF(&_32$$3);
	ZVAL_UNDEF(&_33$$3);
	ZVAL_UNDEF(&_11$$5);
	ZVAL_UNDEF(&_12$$5);
	ZVAL_UNDEF(&_13$$5);
	ZVAL_UNDEF(&_14$$5);
	ZVAL_UNDEF(&_15$$5);
	ZVAL_UNDEF(&_16$$5);
	ZVAL_UNDEF(&_21$$6);
	ZVAL_UNDEF(&_23$$6);
	ZVAL_UNDEF(&_24$$6);
	ZVAL_UNDEF(&_25$$6);
	ZVAL_UNDEF(&_26$$6);
	ZVAL_UNDEF(&_27$$6);
	ZVAL_UNDEF(&_28$$6);
	ZVAL_UNDEF(&_29$$6);
	ZVAL_UNDEF(&done$$7);
	ZVAL_UNDEF(&info$$9);
	ZVAL_UNDEF(&_38$$9);
	ZVAL_UNDEF(&error$$9);
	ZVAL_UNDEF(&_40$$9);
	ZVAL_UNDEF(&results$$9);
	ZVAL_UNDEF(&_42$$9);
	ZVAL_UNDEF(&_45$$9);
	ZVAL_UNDEF(&_46$$9);
	ZVAL_UNDEF(&_48$$9);
	ZVAL_UNDEF(&_50$$9);
	ZVAL_UNDEF(&_35$$3);
	ZVAL_UNDEF(&_47$$9);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &urlarr_param);

	zephir_get_arrval(&urlarr, urlarr_param);


	ZEPHIR_INIT_VAR(&headerArr);
	array_init(&headerArr);
	ZEPHIR_INIT_VAR(&map);
	array_init(&map);
	ZEPHIR_CALL_FUNCTION(&mh, "curl_multi_init", NULL, 3);
	zephir_check_call_status();
	zephir_is_iterable(&urlarr, 0, "khttp/request.zep", 129);
	ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(&urlarr), _1, _2, _0)
	{
		ZEPHIR_INIT_NVAR(&url_k);
		if (_2 != NULL) { 
			ZVAL_STR_COPY(&url_k, _2);
		} else {
			ZVAL_LONG(&url_k, _1);
		}
		ZEPHIR_INIT_NVAR(&v);
		ZVAL_COPY(&v, _0);
		zephir_read_property(&_3$$3, this_ptr, SL("is_rand_ip"), PH_NOISY_CC | PH_READONLY);
		if (zephir_is_true(&_3$$3)) {
			ZEPHIR_CALL_METHOD(NULL, this_ptr, "rand_ip", &_4, 2);
			zephir_check_call_status();
		}
		ZEPHIR_CALL_FUNCTION(&ch, "curl_init", &_5, 4);
		zephir_check_call_status();
		ZEPHIR_INIT_NVAR(&headerArr);
		array_init(&headerArr);
		ZVAL_LONG(&_6$$3, 19913);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_7, 5, &ch, &_6$$3, &__$true);
		zephir_check_call_status();
		zephir_array_fetch_string(&_8$$3, &v, SL("url"), PH_NOISY | PH_READONLY, "khttp/request.zep", 104 TSRMLS_CC);
		ZVAL_LONG(&_6$$3, 10002);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_7, 5, &ch, &_6$$3, &_8$$3);
		zephir_check_call_status();
		zephir_read_property(&_6$$3, this_ptr, SL("referer"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_LNVAR(_9$$3);
		ZEPHIR_CONCAT_SV(&_9$$3, "Referer:", &_6$$3);
		zephir_array_append(&headerArr, &_9$$3, PH_SEPARATE, "khttp/request.zep", 106);
		zephir_read_property(&_10$$3, this_ptr, SL("rand_ip"), PH_NOISY_CC | PH_READONLY);
		if (zephir_is_true(&_10$$3)) {
			zephir_read_property(&_11$$5, this_ptr, SL("rand_ip"), PH_NOISY_CC | PH_READONLY);
			ZEPHIR_INIT_LNVAR(_12$$5);
			ZEPHIR_CONCAT_SV(&_12$$5, "CLIENT-IP:", &_11$$5);
			zephir_array_append(&headerArr, &_12$$5, PH_SEPARATE, "khttp/request.zep", 108);
			zephir_read_property(&_13$$5, this_ptr, SL("rand_ip"), PH_NOISY_CC | PH_READONLY);
			ZEPHIR_INIT_LNVAR(_14$$5);
			ZEPHIR_CONCAT_SV(&_14$$5, "X-FORWARDED-FOR:", &_13$$5);
			zephir_array_append(&headerArr, &_14$$5, PH_SEPARATE, "khttp/request.zep", 109);
			zephir_read_property(&_15$$5, this_ptr, SL("rand_ip"), PH_NOISY_CC | PH_READONLY);
			ZEPHIR_INIT_LNVAR(_16$$5);
			ZEPHIR_CONCAT_SV(&_16$$5, "REMOTE_ADDR:", &_15$$5);
			zephir_array_append(&headerArr, &_16$$5, PH_SEPARATE, "khttp/request.zep", 110);
		}
		ZVAL_LONG(&_17$$3, 10023);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_7, 5, &ch, &_17$$3, &headerArr);
		zephir_check_call_status();
		zephir_read_property(&_17$$3, this_ptr, SL("useragent"), PH_NOISY_CC | PH_READONLY);
		ZVAL_LONG(&_18$$3, 10018);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_7, 5, &ch, &_18$$3, &_17$$3);
		zephir_check_call_status();
		ZEPHIR_OBS_NVAR(&_19$$3);
		zephir_read_property(&_19$$3, this_ptr, SL("proxy"), PH_NOISY_CC);
		_20$$3 = Z_TYPE_P(&_19$$3) == IS_ARRAY;
		if (_20$$3) {
			zephir_read_property(&_18$$3, this_ptr, SL("proxy"), PH_NOISY_CC | PH_READONLY);
			_20$$3 = zephir_fast_count_int(&_18$$3 TSRMLS_CC) > 0;
		}
		if (_20$$3) {
			zephir_read_property(&_21$$6, this_ptr, SL("proxy"), PH_NOISY_CC | PH_READONLY);
			ZEPHIR_CALL_FUNCTION(&proxy_key, "array_rand", &_22, 1, &_21$$6);
			zephir_check_call_status();
			zephir_read_property(&_23$$6, this_ptr, SL("proxy"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch(&_24$$6, &_23$$6, &proxy_key, PH_NOISY | PH_READONLY, "khttp/request.zep", 119 TSRMLS_CC);
			zephir_array_fetch_string(&_25$$6, &_24$$6, SL("ip"), PH_NOISY | PH_READONLY, "khttp/request.zep", 119 TSRMLS_CC);
			ZVAL_LONG(&_26$$6, 10004);
			ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_7, 5, &ch, &_26$$6, &_25$$6);
			zephir_check_call_status();
			zephir_read_property(&_26$$6, this_ptr, SL("proxy"), PH_NOISY_CC | PH_READONLY);
			zephir_array_fetch(&_27$$6, &_26$$6, &proxy_key, PH_NOISY | PH_READONLY, "khttp/request.zep", 120 TSRMLS_CC);
			zephir_array_fetch_string(&_28$$6, &_27$$6, SL("port"), PH_NOISY | PH_READONLY, "khttp/request.zep", 120 TSRMLS_CC);
			ZVAL_LONG(&_29$$6, 59);
			ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_7, 5, &ch, &_29$$6, &_28$$6);
			zephir_check_call_status();
		}
		ZVAL_LONG(&_30$$3, 99);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_7, 5, &ch, &_30$$3, &__$true);
		zephir_check_call_status();
		zephir_read_property(&_30$$3, this_ptr, SL("timeout"), PH_NOISY_CC | PH_READONLY);
		ZVAL_LONG(&_31$$3, 155);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_7, 5, &ch, &_31$$3, &_30$$3);
		zephir_check_call_status();
		zephir_read_property(&_31$$3, this_ptr, SL("followlocation"), PH_NOISY_CC | PH_READONLY);
		ZVAL_LONG(&_32$$3, 52);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_7, 5, &ch, &_32$$3, &_31$$3);
		zephir_check_call_status();
		zephir_read_property(&_32$$3, this_ptr, SL("maxredirs"), PH_NOISY_CC | PH_READONLY);
		ZVAL_LONG(&_33$$3, 68);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_7, 5, &ch, &_33$$3, &_32$$3);
		zephir_check_call_status();
		ZEPHIR_CALL_FUNCTION(NULL, "curl_multi_add_handle", &_34, 6, &mh, &ch);
		zephir_check_call_status();
		zephir_get_strval(&_35$$3, &ch);
		zephir_array_update_zval(&map, &_35$$3, &url_k, PH_COPY | PH_SEPARATE);
	} ZEND_HASH_FOREACH_END();
	ZEPHIR_INIT_NVAR(&v);
	ZEPHIR_INIT_NVAR(&url_k);
	ZEPHIR_INIT_VAR(&responses);
	array_init(&responses);
	ZEPHIR_INIT_VAR(&running);
	ZVAL_NULL(&running);
	do {
		do {
			ZEPHIR_MAKE_REF(&running);
			ZEPHIR_CALL_FUNCTION(&mrc, "curl_multi_exec", &_36, 7, &mh, &running);
			ZEPHIR_UNREF(&running);
			zephir_check_call_status();
		} while (ZEPHIR_IS_LONG(&mrc, -1));
		ZEPHIR_CALL_FUNCTION(&done$$7, "curl_multi_info_read", &_37, 8, &mh);
		zephir_check_call_status();
		while (1) {
			if (!(zephir_is_true(&done$$7))) {
				break;
			}
			zephir_array_fetch_string(&_38$$9, &done$$7, SL("handle"), PH_NOISY | PH_READONLY, "khttp/request.zep", 140 TSRMLS_CC);
			ZEPHIR_CALL_FUNCTION(&info$$9, "curl_getinfo", &_39, 9, &_38$$9);
			zephir_check_call_status();
			zephir_array_fetch_string(&_40$$9, &done$$7, SL("handle"), PH_NOISY | PH_READONLY, "khttp/request.zep", 141 TSRMLS_CC);
			ZEPHIR_CALL_FUNCTION(&error$$9, "curl_error", &_41, 10, &_40$$9);
			zephir_check_call_status();
			zephir_array_fetch_string(&_42$$9, &done$$7, SL("handle"), PH_NOISY | PH_READONLY, "khttp/request.zep", 142 TSRMLS_CC);
			ZEPHIR_CALL_FUNCTION(&results$$9, "curl_multi_getcontent", &_43, 11, &_42$$9);
			zephir_check_call_status();
			ZEPHIR_INIT_NVAR(&_44$$9);
			zephir_create_array(&_44$$9, 3, 0 TSRMLS_CC);
			zephir_array_update_string(&_44$$9, SL("info"), &info$$9, PH_COPY | PH_SEPARATE);
			zephir_array_update_string(&_44$$9, SL("error"), &error$$9, PH_COPY | PH_SEPARATE);
			zephir_array_update_string(&_44$$9, SL("results"), &results$$9, PH_COPY | PH_SEPARATE);
			ZEPHIR_OBS_NVAR(&_45$$9);
			ZEPHIR_OBS_NVAR(&_46$$9);
			zephir_array_fetch_string(&_46$$9, &done$$7, SL("handle"), PH_NOISY, "khttp/request.zep", 144 TSRMLS_CC);
			zephir_get_strval(&_47$$9, &_46$$9);
			zephir_array_fetch(&_45$$9, &map, &_47$$9, PH_NOISY, "khttp/request.zep", 144 TSRMLS_CC);
			zephir_array_update_zval(&responses, &_45$$9, &_44$$9, PH_COPY | PH_SEPARATE);
			zephir_array_fetch_string(&_48$$9, &done$$7, SL("handle"), PH_NOISY | PH_READONLY, "khttp/request.zep", 145 TSRMLS_CC);
			ZEPHIR_CALL_FUNCTION(NULL, "curl_multi_remove_handle", &_49, 12, &mh, &_48$$9);
			zephir_check_call_status();
			zephir_array_fetch_string(&_50$$9, &done$$7, SL("handle"), PH_NOISY | PH_READONLY, "khttp/request.zep", 146 TSRMLS_CC);
			ZEPHIR_CALL_FUNCTION(NULL, "curl_close", &_51, 13, &_50$$9);
			zephir_check_call_status();
			ZEPHIR_CALL_FUNCTION(&done$$7, "curl_multi_info_read", &_37, 8, &mh);
			zephir_check_call_status();
		}
	} while (zephir_is_true(&running));
	ZEPHIR_CALL_FUNCTION(NULL, "curl_multi_close", NULL, 14, &mh);
	zephir_check_call_status();
	RETURN_CTOR(&responses);

}

zend_object *zephir_init_properties_Khttp_Request(zend_class_entry *class_type TSRMLS_DC) {

		zval _0, _1$$3;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1$$3);

		ZEPHIR_MM_GROW();
	
	{
		zval local_this_ptr, *this_ptr = &local_this_ptr;
		ZEPHIR_CREATE_OBJECT(this_ptr, class_type);
		zephir_read_property(&_0, this_ptr, SL("proxy"), PH_NOISY_CC | PH_READONLY);
		if (Z_TYPE_P(&_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(&_1$$3);
			array_init(&_1$$3);
			zephir_update_property_zval(this_ptr, SL("proxy"), &_1$$3);
		}
		ZEPHIR_MM_RESTORE();
		return Z_OBJ_P(this_ptr);
	}

}

