<html>
<body>
<?php
/*Die Auswahl der Pizzen.*/
if ($_POST["Auswahl"] == "Pizza Paprika")     $preis = 3.01;
elseif ($_POST["Auswahl"] == "Pizza Salami")  $preis = 4;
elseif ($_POST["Auswahl"] == "Pizza Tomate")  $preis = 3.50;







echo "Sehr geehrte/r " . $_POST["w1"];
echo "<p>";
echo "Vielen Dank für Ihre Bestellung.";
echo"<br>";
echo "Wir liefern Ihre " . $_POST["Auswahl"];

if(isset($_POST["Typ"])) {
	echo" ";
	echo"mit " . $_POST["Typ"];
	echo" in 20 Minute an die folgende Adresse: " . $_POST["w2"];
	
}
else {
	echo" in 20 Minute an die folgende Adresse: " . $_POST["w2"];
}
echo"<p>";

/*if-anweisungen der Extra-Zutaten.*/
if (isset($_POST["Typ"])) {
$preis = $preis + 0.05;
}
if (isset($_POST["Typ1"])) {
$preis = $preis + 0.10;
}	
/*ausgabe*/
echo"Die Preis beträgt: $preis&euro;";


echo"<br>";
echo"<br>";
echo"<br>";
echo "Ihr Pizza-Team";

echo"<br>";
echo"<br>";
echo"<br>";
echo"<br>";
echo"<br>";
echo"<br>";
echo"<br>";
echo"<br>";
echo"<br>";
echo"<br>";
echo"<br>";
echo"<br>";
echo"<br>";
echo"<br>";
echo"<br>";
echo"<br>";
echo"<br>";
echo"<br>";
echo"<br>";
echo"<br>";


?>
<form action = "PizzaBestellungFeedback.php" method = "post">
<p>
Feedback
</p>
<textarea name="Feedback" rows=10 cols=40> </textarea><br>
<input type="submit" value="Daten senden">
<input type="reset" value="Daten löschen">
</form>
</body>
</html>