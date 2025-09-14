<div>
<?php

echo "<h2>Table de $table</h2>";
echo "<ul>";
for ($i = 1; $i <= 10; $i++) {
    echo "<li> $i X $table = ".($table * $i)."</li>";
}
echo "</ul>";
?>
</div>