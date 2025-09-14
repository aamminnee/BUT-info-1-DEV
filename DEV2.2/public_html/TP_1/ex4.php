<!DOCTYPE html>
<html lang="fr">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <link rel="stylesheet" href="./style_ex4.css">
        <link
			rel="stylesheet"
			href="https://cdn.jsdelivr.net/npm/@picocss/pico@2/css/pico.classless.min.css"
		>
        <title>les dés</title>
    </head>
    <body>
        <h1> <a href="">Tirage aléatoire</a></h1>
        <?php
        $liste_face = [1 => "./dice-six-faces-one.svg", 2 => "./dice-six-faces-two.svg",
                        3 => "./dice-six-faces-three.svg", 4 => "./dice-six-faces-four.svg", 
                        5 => "./dice-six-faces-five.svg", 6 => "./dice-six-faces-six.svg"];
        $aleatoire1 = mt_rand(1, 6);
        $aleatoire2 = mt_rand(1, 6);
        $res = $aleatoire1 + $aleatoire2;
        echo "<div class=is-center>";
        echo "<img class=dice-one src='{$liste_face[$aleatoire1]}'/>";
        echo "<img class=dice-two src='{$liste_face[$aleatoire2]}'/>";
        echo "</div>";
        echo "<p><strong>Somme = $res</strong></p>";
        ?>
    </body>
</html>
