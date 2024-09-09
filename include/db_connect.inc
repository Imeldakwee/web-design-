<?php
if (strstr($_SERVER['SERVER_NAME'], 'localhost')) {
    $servername = "localhost";
    $username = "root";
    $password = "";
    $dbname = "system";
} else {
    $servername = "ptkmp.co";
    $username = "Hendric";
    $password = "p102030!";
    $dbname = "system";
}
$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}
?>