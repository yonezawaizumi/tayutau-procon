<?php
for ($i = 1; $i <= 100; ++$i) {
    echo $i % 10 == 7 || (int)($i % 100 / 10) == 7 ? "Lucky!\n" : "$i\n";
}
