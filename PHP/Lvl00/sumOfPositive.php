<?PHP
// Take an array of numbers and return the sum of all of the positives ones.
// Example [1,-4,7,12] => 1 + 7 + 12 = 20
	$arr = array(1, 2, 3, 4, 5);
	$sum = 0;
	foreach ($arr as &$value) {
		if ($value > 0)
		  $sum = $sum + $value;
	}
	print($sum);
?>