<?php

$prenom = filter_input(INPUT_POST, 'prenom');
$nom = filter_input(INPUT_POST, 'nom');
$os = filter_input(INPUT_POST, 'os', FILTER_VALIDATE_INT);
$choix = [1 => "fa-linux", 2 => "fa-windows", 3 => "fa-apple", 4 => "fa-android"];
$icon = $choix[$os];

?>