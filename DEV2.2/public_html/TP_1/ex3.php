<!DOCTYPE html>
<html lang="fr">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <link rel="stylesheet" href="./style_ex3.css">
        <title>tableau</title>
        <?php include ("./data.php") ?>
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
                        echo "<tr>";
                        foreach($users as $info) { 
                            echo "<td>$info</td>";
                        }
                        $imc = round((($users['Poids']) / ($users['Taille']**2)) * 10000, 2);
                        echo "<td>$imc</td>";
                        echo "</tr>";
                    }
                ?>
            </tbody>
        </table>
    </body>
</html>