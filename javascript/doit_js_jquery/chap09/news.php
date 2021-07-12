<?php
    $ch = curl_init();
    curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, false);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
    curl_setopt($ch, CURLOPT_HEADER, 0);
    curl_setopt($ch, CURLOPT_URL,
    "https://www.chosun.com/arc/outboundfeeds/rss/?outputType=xml");
    $url_source = curl_exec($ch);
    curl_close($ch);

    echo $url_source;
?>
