<?php
include './favoris.inc.php';
?>
<!DOCTYPE html>
<html lang="fr">
	<head>
		<meta charset="UTF-8">
		<meta name="viewport" content="width=device-width, initial-scale=1.0">

		<title>tp1 - ex4</title>
		<link
			rel="stylesheet"
			href="https://cdn.jsdelivr.net/npm/@picocss/pico@2/css/pico.classless.min.css"
		>
		<link rel="stylesheet" href="./css/style.css">
	</head>
	<body>
		<main>
			<h1>Mes favoris</h1>

			<?php
			// Parcours des répertoires
			foreach ($favoris as $nomRepertoire => $listeFavoris) {
				echo "<h2>$nomRepertoire</h2>";
				echo "<ul>";

				// Parcours des favoris dans chaque répertoire
				foreach ($listeFavoris as $favori) {
					$nom = htmlspecialchars($favori["nom"]);
					$url = htmlspecialchars($favori["url"]);
					$img = htmlspecialchars($favori["img"]);

					echo "
					<li>
						<a href=\"$url\" target=\"_blank\">
							<img src=\"$img\" width=\"20\" alt=\"$nom\">
							$nom
						</a>
					</li>";
				}

				echo "</ul>";
			}
			?>
		</main>
	</body>
</html>
