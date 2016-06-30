
extern zend_class_entry *khttp_request_ce;

ZEPHIR_INIT_CLASS(Khttp_Request);

PHP_METHOD(Khttp_Request, Rand_IP);
PHP_METHOD(Khttp_Request, get_ip);
PHP_METHOD(Khttp_Request, set_ip);
PHP_METHOD(Khttp_Request, set_timeout);
PHP_METHOD(Khttp_Request, set_useragent);
PHP_METHOD(Khttp_Request, set_followlocation);
PHP_METHOD(Khttp_Request, set_maxredirs);
PHP_METHOD(Khttp_Request, set_is_rand_ip);
PHP_METHOD(Khttp_Request, set_referer);
PHP_METHOD(Khttp_Request, http);

ZEND_BEGIN_ARG_INFO_EX(arginfo_khttp_request_set_ip, 0, 0, 1)
	ZEND_ARG_INFO(0, ip)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_khttp_request_set_timeout, 0, 0, 1)
	ZEND_ARG_INFO(0, timeout)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_khttp_request_set_useragent, 0, 0, 1)
	ZEND_ARG_INFO(0, useragent)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_khttp_request_set_followlocation, 0, 0, 1)
	ZEND_ARG_INFO(0, followlocation)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_khttp_request_set_maxredirs, 0, 0, 1)
	ZEND_ARG_INFO(0, maxredirs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_khttp_request_set_is_rand_ip, 0, 0, 1)
	ZEND_ARG_INFO(0, is)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_khttp_request_set_referer, 0, 0, 1)
	ZEND_ARG_INFO(0, referer)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_khttp_request_http, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, urlarr, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(khttp_request_method_entry) {
	PHP_ME(Khttp_Request, Rand_IP, NULL, ZEND_ACC_PRIVATE)
	PHP_ME(Khttp_Request, get_ip, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Khttp_Request, set_ip, arginfo_khttp_request_set_ip, ZEND_ACC_PUBLIC)
	PHP_ME(Khttp_Request, set_timeout, arginfo_khttp_request_set_timeout, ZEND_ACC_PUBLIC)
	PHP_ME(Khttp_Request, set_useragent, arginfo_khttp_request_set_useragent, ZEND_ACC_PUBLIC)
	PHP_ME(Khttp_Request, set_followlocation, arginfo_khttp_request_set_followlocation, ZEND_ACC_PUBLIC)
	PHP_ME(Khttp_Request, set_maxredirs, arginfo_khttp_request_set_maxredirs, ZEND_ACC_PUBLIC)
	PHP_ME(Khttp_Request, set_is_rand_ip, arginfo_khttp_request_set_is_rand_ip, ZEND_ACC_PUBLIC)
	PHP_ME(Khttp_Request, set_referer, arginfo_khttp_request_set_referer, ZEND_ACC_PUBLIC)
	PHP_ME(Khttp_Request, http, arginfo_khttp_request_http, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
