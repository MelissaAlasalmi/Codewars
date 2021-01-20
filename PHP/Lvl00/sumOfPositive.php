<?PHP
	$arr = array(1, 2, 3, 4, 5);
	$sum = 0;
	foreach ($arr as &$value) {
		  $sum = $sum + $value;
	}
	print($sum);
?>