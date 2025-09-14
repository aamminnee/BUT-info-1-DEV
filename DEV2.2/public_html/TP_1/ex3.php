<!DOCTYPE html>
<html lang="fr">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <link rel="stylesheet" href="./style_ex3.css">
        <title>tableau</title>
        <?php include ("./data.php") ?>
        <link
			rel="stylesheet"
			href="https://cdn.jsdelivr.net/npm/@picocss/pico@2/css/pico.classless.min.css">
		<link rel="stylesheet" href="./css/style.css">
    </head>
    <body>
        <table>
            <caption>Tableau</caption>
            <thead>
                <tr>
                    <th>Nom</th>
                    <th>Prenom</th>
                    <th>Email</th>
                    <th>Taille</th>
                    <th>Poids</th>
                    <th>IMC</th>
                </tr>
            </thead>
            <tbody>
                <?php
                    foreach($data as $users) { 
                        $imc = round((($users['Poids']) / ($users['Taille']**2)) * 10000, 2);
                        if ($imc > 25.0) { 
                            echo "<tr class=warning>";
                            foreach($users as $info) { 
                                echo "<td class=warning>$info</td>";
                            }
                            echo "<td class=warning>$imc</td>";
                            echo "</tr>";
                        } else {
                            echo "<tr>";
                            foreach($users as $info) { 
                                echo "<td>$info</td>";
                            }
                            echo "<td>$imc</td>";
                            echo "</tr>";
                        }
                    }
                ?>
            </tbody>
        </table>
    </body>
</html>