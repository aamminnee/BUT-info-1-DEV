<?php
include 'include/controller.php';
?>
<!DOCTYPE html>
<html lang="en">
	<head>
<link
  rel="stylesheet"
  href="https://cdn.jsdelivr.net/npm/@picocss/pico@2/css/pico.classless.min.css"
/>
<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.5.2/css/all.min.css" integrity="sha512-SnH5WK+bZxgPHs44uWIX+LLJAJ9/2PkPKZ5QiAj6Ta86w+fsb2TkcmfRyVX3pBnMFcV7oQPJkl9QevSCWr3W6A==" crossorigin="anonymous" referrerpolicy="no-referrer" />
		<link rel="stylesheet" href="./css/style.css">
		<meta charset="UTF-8" />
		<title></title>
	</head>
	<body>
		<main>
				<ul>
					<?php
						echo "<li>$prenom $nom</li>";
						echo "<li><i class='fa-brands $icon fa-2x'></i></li>";
					?>
				</ul>
		</main>
	</body>
</html>
