
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
	zephir_array_fetch_long(&_8, arr_1, rand_key, PH_NOISY, "khttp/request.zep", 23 TSRMLS_CC);
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

PHP_METHOD(Khttp_Request, http) {

	zend_bool _33, _46$$10;
	HashTable *_1, *_39;
	HashPosition _0, _38;
	long nch;
	zephir_fcall_cache_entry *_4 = NULL, *_6 = NULL, *_9 = NULL, *_31 = NULL, *_32 = NULL, *_35 = NULL, *_37 = NULL, *_43 = NULL, *_45 = NULL, *_49 = NULL, *_52 = NULL, *_54 = NULL;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *urlarr_param = NULL, *code = NULL, *err = NULL, *moudle = NULL, *node = NULL, *ch = NULL, *v = NULL, *mh = NULL, **_2, *running = NULL, *mrc = NULL, **_40, *_3$$3, *_5$$3 = NULL, *_7$$3, _8$$3 = zval_used_for_init, *_10$$3, *_11$$3, *_12$$3, *_13$$3 = NULL, *_14$$3, *_21$$3, *_22$$3, *_23$$3, *_24$$3, *_25$$3, *_26$$3, *_27$$3, *_28$$3, *_29$$3, *_30$$3, *_15$$5, *_16$$5 = NULL, *_17$$5, *_18$$5 = NULL, *_19$$5, *_20$$5 = NULL, *_34$$7 = NULL, _36$$8 = zval_used_for_init, *_41$$10, _42$$10 = zval_used_for_init, *_44$$10, *_51$$10, *_53$$10, *_47$$11, *_48$$11 = NULL, *_50$$11;
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
	zephir_is_iterable(urlarr, &_1, &_0, 0, 0, "khttp/request.zep", 117);
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
		zephir_array_fetch_long(&_7$$3, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 98 TSRMLS_CC);
		ZEPHIR_SINIT_NVAR(_8$$3);
		ZVAL_LONG(&_8$$3, 19913);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_9, 5, _7$$3, &_8$$3, ZEPHIR_GLOBAL(global_true));
		zephir_check_call_status();
		zephir_array_fetch_long(&_10$$3, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 99 TSRMLS_CC);
		zephir_array_fetch_string(&_11$$3, v, SL("url"), PH_NOISY | PH_READONLY, "khttp/request.zep", 99 TSRMLS_CC);
		ZEPHIR_SINIT_NVAR(_8$$3);
		ZVAL_LONG(&_8$$3, 10002);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_9, 5, _10$$3, &_8$$3, _11$$3);
		zephir_check_call_status();
		_12$$3 = zephir_fetch_nproperty_this(this_ptr, SL("referer"), PH_NOISY_CC);
		ZEPHIR_INIT_LNVAR(_13$$3);
		ZEPHIR_CONCAT_SV(_13$$3, "Referer:", _12$$3);
		zephir_array_append(&headerArr, _13$$3, PH_SEPARATE, "khttp/request.zep", 102);
		_14$$3 = zephir_fetch_nproperty_this(this_ptr, SL("rand_ip"), PH_NOISY_CC);
		if (zephir_is_true(_14$$3)) {
			_15$$5 = zephir_fetch_nproperty_this(this_ptr, SL("rand_ip"), PH_NOISY_CC);
			ZEPHIR_INIT_LNVAR(_16$$5);
			ZEPHIR_CONCAT_SV(_16$$5, "CLIENT-IP:", _15$$5);
			zephir_array_append(&headerArr, _16$$5, PH_SEPARATE, "khttp/request.zep", 104);
			_17$$5 = zephir_fetch_nproperty_this(this_ptr, SL("rand_ip"), PH_NOISY_CC);
			ZEPHIR_INIT_LNVAR(_18$$5);
			ZEPHIR_CONCAT_SV(_18$$5, "X-FORWARDED-FOR:", _17$$5);
			zephir_array_append(&headerArr, _18$$5, PH_SEPARATE, "khttp/request.zep", 105);
			_19$$5 = zephir_fetch_nproperty_this(this_ptr, SL("rand_ip"), PH_NOISY_CC);
			ZEPHIR_INIT_LNVAR(_20$$5);
			ZEPHIR_CONCAT_SV(_20$$5, "REMOTE_ADDR:", _19$$5);
			zephir_array_append(&headerArr, _20$$5, PH_SEPARATE, "khttp/request.zep", 106);
		}
		zephir_array_fetch_long(&_21$$3, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 108 TSRMLS_CC);
		ZEPHIR_SINIT_NVAR(_8$$3);
		ZVAL_LONG(&_8$$3, 10023);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_9, 5, _21$$3, &_8$$3, headerArr);
		zephir_check_call_status();
		zephir_array_fetch_long(&_22$$3, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 109 TSRMLS_CC);
		_23$$3 = zephir_fetch_nproperty_this(this_ptr, SL("useragent"), PH_NOISY_CC);
		ZEPHIR_SINIT_NVAR(_8$$3);
		ZVAL_LONG(&_8$$3, 10018);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_9, 5, _22$$3, &_8$$3, _23$$3);
		zephir_check_call_status();
		zephir_array_fetch_long(&_24$$3, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 110 TSRMLS_CC);
		_25$$3 = zephir_fetch_nproperty_this(this_ptr, SL("timeout"), PH_NOISY_CC);
		ZEPHIR_SINIT_NVAR(_8$$3);
		ZVAL_LONG(&_8$$3, 13);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_9, 5, _24$$3, &_8$$3, _25$$3);
		zephir_check_call_status();
		zephir_array_fetch_long(&_26$$3, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 111 TSRMLS_CC);
		_27$$3 = zephir_fetch_nproperty_this(this_ptr, SL("followlocation"), PH_NOISY_CC);
		ZEPHIR_SINIT_NVAR(_8$$3);
		ZVAL_LONG(&_8$$3, 52);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_9, 5, _26$$3, &_8$$3, _27$$3);
		zephir_check_call_status();
		zephir_array_fetch_long(&_28$$3, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 112 TSRMLS_CC);
		_29$$3 = zephir_fetch_nproperty_this(this_ptr, SL("maxredirs"), PH_NOISY_CC);
		ZEPHIR_SINIT_NVAR(_8$$3);
		ZVAL_LONG(&_8$$3, 68);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_setopt", &_9, 5, _28$$3, &_8$$3, _29$$3);
		zephir_check_call_status();
		zephir_array_fetch_long(&_30$$3, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 113 TSRMLS_CC);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_multi_add_handle", &_31, 6, mh, _30$$3);
		zephir_check_call_status();
		nch = (nch + 1);
	}
	ZEPHIR_INIT_VAR(running);
	ZVAL_NULL(running);
	do {
		ZEPHIR_MAKE_REF(running);
		ZEPHIR_CALL_FUNCTION(&mrc, "curl_multi_exec", &_32, 7, mh, running);
		ZEPHIR_UNREF(running);
		zephir_check_call_status();
	} while (ZEPHIR_IS_LONG(mrc, -1));
	while (1) {
		_33 = zephir_is_true(running);
		if (_33) {
			_33 = ZEPHIR_IS_LONG(mrc, 0);
		}
		if (!(_33)) {
			break;
		}
		ZEPHIR_CALL_FUNCTION(&_34$$7, "curl_multi_select", &_35, 8, mh);
		zephir_check_call_status();
		if (ZEPHIR_IS_LONG(_34$$7, -1)) {
			ZEPHIR_SINIT_NVAR(_36$$8);
			ZVAL_LONG(&_36$$8, 100);
			ZEPHIR_CALL_FUNCTION(NULL, "usleep", &_37, 9, &_36$$8);
			zephir_check_call_status();
		}
		do {
			ZEPHIR_MAKE_REF(running);
			ZEPHIR_CALL_FUNCTION(&mrc, "curl_multi_exec", &_32, 7, mh, running);
			ZEPHIR_UNREF(running);
			zephir_check_call_status();
		} while (ZEPHIR_IS_LONG(mrc, -1));
	}
	nch = 0;
	zephir_is_iterable(urlarr, &_39, &_38, 0, 0, "khttp/request.zep", 146);
	for (
	  ; zephir_hash_get_current_data_ex(_39, (void**) &_40, &_38) == SUCCESS
	  ; zephir_hash_move_forward_ex(_39, &_38)
	) {
		ZEPHIR_GET_HMKEY(moudle, _39, _38);
		ZEPHIR_GET_HVALUE(node, _40);
		zephir_array_fetch_long(&_41$$10, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 134 TSRMLS_CC);
		ZEPHIR_SINIT_NVAR(_42$$10);
		ZVAL_LONG(&_42$$10, 2097154);
		ZEPHIR_CALL_FUNCTION(&code, "curl_getinfo", &_43, 10, _41$$10, &_42$$10);
		zephir_check_call_status();
		zephir_array_fetch_long(&_44$$10, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 135 TSRMLS_CC);
		ZEPHIR_CALL_FUNCTION(&err, "curl_error", &_45, 11, _44$$10);
		zephir_check_call_status();
		_46$$10 = ZEPHIR_IS_STRING(err, "");
		if (_46$$10) {
			_46$$10 = ZEPHIR_IS_LONG(code, 200);
		}
		if (_46$$10) {
			zephir_array_fetch_long(&_47$$11, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 137 TSRMLS_CC);
			ZEPHIR_CALL_FUNCTION(&_48$$11, "curl_multi_getcontent", &_49, 12, _47$$11);
			zephir_check_call_status();
			zephir_array_update_long(&res, nch, &_48$$11, PH_COPY | PH_SEPARATE ZEPHIR_DEBUG_PARAMS_DUMMY);
			zephir_array_fetch_long(&_50$$11, res, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 138 TSRMLS_CC);
			zephir_array_update_zval(&result, moudle, &_50$$11, PH_COPY | PH_SEPARATE);
		} else {
			zephir_array_update_zval(&result, moudle, &ZEPHIR_GLOBAL(global_false), PH_COPY | PH_SEPARATE);
		}
		zephir_array_fetch_long(&_51$$10, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 142 TSRMLS_CC);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_multi_remove_handle", &_52, 13, mh, _51$$10);
		zephir_check_call_status();
		zephir_array_fetch_long(&_53$$10, ch, nch, PH_NOISY | PH_READONLY, "khttp/request.zep", 143 TSRMLS_CC);
		ZEPHIR_CALL_FUNCTION(NULL, "curl_close", &_54, 14, _53$$10);
		zephir_check_call_status();
		nch = (nch + 1);
	}
	RETURN_CTOR(result);

}

