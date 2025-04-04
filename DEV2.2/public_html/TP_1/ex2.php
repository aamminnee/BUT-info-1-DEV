<?php
	// 0 7 2 8
	$clients = [
		"Luc", 
		7 => "Paul", 
		2 =>"Martin", 
		"Arnaud"
		];
	
	// 20 3 10 21 22 
	$produits = [
		20 => "Chemise",
		3 => "Pantalon",
		10 => "Jupe",
		"Veste",
		"Blouson"
		];
	
	// 0 1 2
	$array = ["a","b","c"];
	$array[] = "d";
	$array[10] = "j";
	unset($array[2]);

	$tab1;
	for ($i = 0; $i < 10; $i++) {
		$key = 0;
		for ($j = 0; $j <= $i; $j++) {
			$key += $j;
		}
		$tab1[$key] = $i;
	}

	

	$tab2;
	for ($i = 0; $i < 10; $i++) {
		$tab2[$i**2] = $i;
	}

	echo "<pre>";
	print_r($clients);
	print_r($produits);
	print_r($array);
	print_r($tab1);
	print_r($tab2);
	echo "</pre>";

	for ($i = 1; $i <= 50; $i++) {
		if ($i % 2 == 0) {
			echo "<i>$i</i></br>";
		} else {
			echo "$i</br>";
		}

		if ($i % 10 == 0) {
			echo "</br>";
			echo "</br>";
		}
	}

?>