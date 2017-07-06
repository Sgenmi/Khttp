
# 异步并行请求 PHP扩展 Khttp

# 远端性能越好，优先返回

## 条件[Requirement]
* PHP 5.3~5.6 暂不支技PHP7

## 安装 [Install]
$phpize

$./configure --with-php-config=php-config

$make && make install



## 文档[Document]

```javascript

<?php

$khttp = new Khttp\request();
$i = 0;
$start_time = microtime(TRUE);

//设置ua
$ua = "Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.1 (KHTML, like Gecko) Chrome/21.0.1180.89 Safari/537.3";
$khttp->set_useragent( $ua);
//设置超时时间 毫秒超时
$khttp->set_timeout (50);
//设置关闭随机IP,默认开启
//boolean 类型
$khttp->set_is_rand_ip(TRUE);
// 自定义请求IP 一定要关闭随机IP  $khttp->set_is_rand_ip(false);
$ip = "127.0.0.1";
$khttp-> set_ip($ip);

//设置跳转层级,默认1级,整数
$followlocation = 1;
$khttp-> set_followlocation( $followlocation );

//设置最大跳转层级,默认1级,整数
//如果$followlocation大于$maxredirs 则以$maxredirs为准
$maxredirs = 1;
$khttp-> set_followlocation( $maxredirs );

$a = array(
   'localhost'=> array(
        'url' => "http://127.0.0.1/"
    ),
    'baidu_one'=>array(
        'url' => "http://www.baidu.com"
    ),
    'baidu_two'=>array(
        'url' => "http://www.baidu.com"
    )
);

$b = $khttp->http($a);

print_r($b);

$end_time = microtime(TRUE);
echo '耗时' . round($end_time - $start_time, 3) . '秒';


```
## 开发工具
* [Zephir](https://www.zephir-lang.com/) 

## 关于作者

