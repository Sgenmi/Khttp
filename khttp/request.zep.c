
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

	zval *_35$$3 = NULL, *_47$$9 = NULL;
	zend_bool _20$$3;
	HashTable *_1;
	HashPosition _0;
	zephir_fcall_cache_entry *_4 = NULL, *_5 = NULL, *_7 = NULL, *_23 = NULL, *_34 = NULL, *_36 = NULL, *_37 = NULL, *_39 = NULL, *_41 = NULL, *_43 = NULL, *_49 = NULL, *_51 = NULL;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *urlarr_param = NULL, *ch = NULL, *v = NULL, *proxy_key = NULL, *url_k = NULL, *mh = NULL, **_2, *running = NULL, *mrc = NULL, *_3$$3, _6$$3 = zval_used_for_init, *_8$$3, *_9$$3, *_10$$3 = NULL, *_11$$3, *_18$$3, *_19$$3 = NULL, *_21$$3, *_31$$3, *_32$$3, *_33$$3, *_12$$5, *_13$$5 = NULL, *_14$$5, *_15$$5 = NULL, *_16$$5, *_17$$5 = NULL, *_22$$6, *_24$$6, *_25$$6, *_26$$6, _27$$6 = zval_used_for_init, *_28$$6, *_29$$6, *_30$$6, *done$$7 = NULL, *info$$9 = NULL, *_38$$9, *error$$9 = NULL, *_40$$9, *results$$9 = NULL, *_42$$9, *_45$$9 = NULL, *_46$$9 = NULL, *_48$$9, *_50$$9;
	zval *urlarr = NULL, *headerArr = NULL, *map, *responses, *_44$$9 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &urlarr_param);

	zephir_get_arrval(urlarr, urlarr_param);


	ZEPHIR_INIT_VAR(headerArr);
	array_init(headerArr);
	ZEPHIR_INIT_VAR(map);
	array_init(map);
	ZEPHIR_CALL_FUNCTION(&mh, "curl_multi_init", NULL, 3);
	zephir_check_call_status();
	zephir_is_iterable(urlarr, &_1, &_0, 0, 0, "khttp/request.zep", 129);
	for (
	  ; zephir_hash_get_current_data_ex(_1, (void**) &_2, &_0) == SUCCESS
	  ; zephir_hash_move_forward_ex(_1, &_0)
	) {
		ZEPHIR_GET_HMKEY(url_k, _1, _0);
		ZEPHIR_GET_HVALUE(v, _2);
		_3$$3 = zephir_fetch_nproperty_this(this_ptr, SL("is_rand_ip"), PH_NOISY_CC);
		if (zephir_is_true(_3$$3)) {
			ZEPHIR_CALL_METHOD(NULL, this_ptr, "rand_ip", &_4, 2);
			zephir_check_call_status();
		}
		ZEPHIR_CALL_FUNCTION(&ch, "curl_init", &_5, 4);
		zephir_check_call_status();
		ZEPHIR_INIT_NVAR(headerArr);
		array_init(headerArr);
		ZEPHIR_SINIT_NVAR(_6$$3);
		ZVAL_LONG(&_6$$3, 19913);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_7, 5, ch, &_6$$3, ZEPHIR_GLOBAL(global_true));
		zephir_check_call_status();
		zephir_array_fetch_string(&_8$$3, v, SL("url"), PH_NOISY | PH_READONLY, "khttp/request.zep", 104 TSRMLS_CC);
		ZEPHIR_SINIT_NVAR(_6$$3);
		ZVAL_LONG(&_6$$3, 10002);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_7, 5, ch, &_6$$3, _8$$3);
		zephir_check_call_status();
		_9$$3 = zephir_fetch_nproperty_this(this_ptr, SL("referer"), PH_NOISY_CC);
		ZEPHIR_INIT_LNVAR(_10$$3);
		ZEPHIR_CONCAT_SV(_10$$3, "Referer:", _9$$3);
		zephir_array_append(&headerArr, _10$$3, PH_SEPARATE, "khttp/request.zep", 106);
		_11$$3 = zephir_fetch_nproperty_this(this_ptr, SL("rand_ip"), PH_NOISY_CC);
		if (zephir_is_true(_11$$3)) {
			_12$$5 = zephir_fetch_nproperty_this(this_ptr, SL("rand_ip"), PH_NOISY_CC);
			ZEPHIR_INIT_LNVAR(_13$$5);
			ZEPHIR_CONCAT_SV(_13$$5, "CLIENT-IP:", _12$$5);
			zephir_array_append(&headerArr, _13$$5, PH_SEPARATE, "khttp/request.zep", 108);
			_14$$5 = zephir_fetch_nproperty_this(this_ptr, SL("rand_ip"), PH_NOISY_CC);
			ZEPHIR_INIT_LNVAR(_15$$5);
			ZEPHIR_CONCAT_SV(_15$$5, "X-FORWARDED-FOR:", _14$$5);
			zephir_array_append(&headerArr, _15$$5, PH_SEPARATE, "khttp/request.zep", 109);
			_16$$5 = zephir_fetch_nproperty_this(this_ptr, SL("rand_ip"), PH_NOISY_CC);
			ZEPHIR_INIT_LNVAR(_17$$5);
			ZEPHIR_CONCAT_SV(_17$$5, "REMOTE_ADDR:", _16$$5);
			zephir_array_append(&headerArr, _17$$5, PH_SEPARATE, "khttp/request.zep", 110);
		}
		ZEPHIR_SINIT_NVAR(_6$$3);
		ZVAL_LONG(&_6$$3, 10023);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_7, 5, ch, &_6$$3, headerArr);
		zephir_check_call_status();
		_18$$3 = zephir_fetch_nproperty_this(this_ptr, SL("useragent"), PH_NOISY_CC);
		ZEPHIR_SINIT_NVAR(_6$$3);
		ZVAL_LONG(&_6$$3, 10018);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_7, 5, ch, &_6$$3, _18$$3);
		zephir_check_call_status();
		ZEPHIR_OBS_NVAR(_19$$3);
		zephir_read_property_this(&_19$$3, this_ptr, SL("proxy"), PH_NOISY_CC);
		_20$$3 = Z_TYPE_P(_19$$3) == IS_ARRAY;
		if (_20$$3) {
			_21$$3 = zephir_fetch_nproperty_this(this_ptr, SL("proxy"), PH_NOISY_CC);
			_20$$3 = zephir_fast_count_int(_21$$3 TSRMLS_CC) > 0;
		}
		if (_20$$3) {
			_22$$6 = zephir_fetch_nproperty_this(this_ptr, SL("proxy"), PH_NOISY_CC);
			ZEPHIR_CALL_FUNCTION(&proxy_key, "array_rand", &_23, 1, _22$$6);
			zephir_check_call_status();
			_24$$6 = zephir_fetch_nproperty_this(this_ptr, SL("proxy"), PH_NOISY_CC);
			zephir_array_fetch(&_25$$6, _24$$6, proxy_key, PH_NOISY | PH_READONLY, "khttp/request.zep", 119 TSRMLS_CC);
			zephir_array_fetch_string(&_26$$6, _25$$6, SL("ip"), PH_NOISY | PH_READONLY, "khttp/request.zep", 119 TSRMLS_CC);
			ZEPHIR_SINIT_NVAR(_27$$6);
			ZVAL_LONG(&_27$$6, 10004);
			ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_7, 5, ch, &_27$$6, _26$$6);
			zephir_check_call_status();
			_28$$6 = zephir_fetch_nproperty_this(this_ptr, SL("proxy"), PH_NOISY_CC);
			zephir_array_fetch(&_29$$6, _28$$6, proxy_key, PH_NOISY | PH_READONLY, "khttp/request.zep", 120 TSRMLS_CC);
			zephir_array_fetch_string(&_30$$6, _29$$6, SL("port"), PH_NOISY | PH_READONLY, "khttp/request.zep", 120 TSRMLS_CC);
			ZEPHIR_SINIT_NVAR(_27$$6);
			ZVAL_LONG(&_27$$6, 59);
			ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_7, 5, ch, &_27$$6, _30$$6);
			zephir_check_call_status();
		}
		ZEPHIR_SINIT_NVAR(_6$$3);
		ZVAL_LONG(&_6$$3, 99);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_7, 5, ch, &_6$$3, ZEPHIR_GLOBAL(global_true));
		zephir_check_call_status();
		_31$$3 = zephir_fetch_nproperty_this(this_ptr, SL("timeout"), PH_NOISY_CC);
		ZEPHIR_SINIT_NVAR(_6$$3);
		ZVAL_LONG(&_6$$3, 155);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_7, 5, ch, &_6$$3, _31$$3);
		zephir_check_call_status();
		_32$$3 = zephir_fetch_nproperty_this(this_ptr, SL("followlocation"), PH_NOISY_CC);
		ZEPHIR_SINIT_NVAR(_6$$3);
		ZVAL_LONG(&_6$$3, 52);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_7, 5, ch, &_6$$3, _32$$3);
		zephir_check_call_status();
		_33$$3 = zephir_fetch_nproperty_this(this_ptr, SL("maxredirs"), PH_NOISY_CC);
		ZEPHIR_SINIT_NVAR(_6$$3);
		ZVAL_LONG(&_6$$3, 68);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_7, 5, ch, &_6$$3, _33$$3);
		zephir_check_call_status();
		ZEPHIR_CALL_FUNCTION(NULL, "curl_multi_add_handle", &_34, 6, mh, ch);
		zephir_check_call_status();
		zephir_get_strval(_35$$3, ch);
		zephir_array_update_zval(&map, _35$$3, &url_k, PH_COPY | PH_SEPARATE);
	}
	ZEPHIR_INIT_VAR(responses);
	array_init(responses);
	ZEPHIR_INIT_VAR(running);
	ZVAL_NULL(running);
	do {
		do {
			ZEPHIR_MAKE_REF(running);
			ZEPHIR_CALL_FUNCTION(&mrc, "curl_multi_exec", &_36, 7, mh, running);
			ZEPHIR_UNREF(running);
			zephir_check_call_status();
		} while (ZEPHIR_IS_LONG(mrc, -1));
		ZEPHIR_CALL_FUNCTION(&done$$7, "curl_multi_info_read", &_37, 8, mh);
		zephir_check_call_status();
		while (1) {
			if (!(zephir_is_true(done$$7))) {
				break;
			}
			zephir_array_fetch_string(&_38$$9, done$$7, SL("handle"), PH_NOISY | PH_READONLY, "khttp/request.zep", 140 TSRMLS_CC);
			ZEPHIR_CALL_FUNCTION(&info$$9, "curl_getinfo", &_39, 9, _38$$9);
			zephir_check_call_status();
			zephir_array_fetch_string(&_40$$9, done$$7, SL("handle"), PH_NOISY | PH_READONLY, "khttp/request.zep", 141 TSRMLS_CC);
			ZEPHIR_CALL_FUNCTION(&error$$9, "curl_error", &_41, 10, _40$$9);
			zephir_check_call_status();
			zephir_array_fetch_string(&_42$$9, done$$7, SL("handle"), PH_NOISY | PH_READONLY, "khttp/request.zep", 142 TSRMLS_CC);
			ZEPHIR_CALL_FUNCTION(&results$$9, "curl_multi_getcontent", &_43, 11, _42$$9);
			zephir_check_call_status();
			ZEPHIR_INIT_NVAR(_44$$9);
			zephir_create_array(_44$$9, 3, 0 TSRMLS_CC);
			zephir_array_update_string(&_44$$9, SL("info"), &info$$9, PH_COPY | PH_SEPARATE);
			zephir_array_update_string(&_44$$9, SL("error"), &error$$9, PH_COPY | PH_SEPARATE);
			zephir_array_update_string(&_44$$9, SL("results"), &results$$9, PH_COPY | PH_SEPARATE);
			ZEPHIR_OBS_NVAR(_45$$9);
			ZEPHIR_OBS_NVAR(_46$$9);
			zephir_array_fetch_string(&_46$$9, done$$7, SL("handle"), PH_NOISY, "khttp/request.zep", 144 TSRMLS_CC);
			zephir_get_strval(_47$$9, _46$$9);
			zephir_array_fetch(&_45$$9, map, _47$$9, PH_NOISY, "khttp/request.zep", 144 TSRMLS_CC);
			zephir_array_update_zval(&responses, _45$$9, &_44$$9, PH_COPY | PH_SEPARATE);
			zephir_array_fetch_string(&_48$$9, done$$7, SL("handle"), PH_NOISY | PH_READONLY, "khttp/request.zep", 145 TSRMLS_CC);
			ZEPHIR_CALL_FUNCTION(NULL, "curl_multi_remove_handle", &_49, 12, mh, _48$$9);
			zephir_check_call_status();
			zephir_array_fetch_string(&_50$$9, done$$7, SL("handle"), PH_NOISY | PH_READONLY, "khttp/request.zep", 146 TSRMLS_CC);
			ZEPHIR_CALL_FUNCTION(NULL, "curl_close", &_51, 13, _50$$9);
			zephir_check_call_status();
			ZEPHIR_CALL_FUNCTION(&done$$7, "curl_multi_info_read", &_37, 8, mh);
			zephir_check_call_status();
		}
	} while (zephir_is_true(running));
	ZEPHIR_CALL_FUNCTION(NULL, "curl_multi_close", NULL, 14, mh);
	zephir_check_call_status();
	RETURN_CTOR(responses);

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

