<?php
$number = trim(fgets(STDIN));
$hours = trim(fgets(STDIN));
$salary = trim(fgets(STDIN));

echo  "NUMBER = " .$number. "\n";
echo  "SALARY = U$ " .number_format($hours*$salary,2, ".","", ). "\n";

?>