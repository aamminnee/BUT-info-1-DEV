<?php

$table = filter_input(INPUT_GET, 'table', FILTER_VALIDATE_INT);

if ($table != NULL && $table != FALSE) {
    include 'vue.php';
}


?>