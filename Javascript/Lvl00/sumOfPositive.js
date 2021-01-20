// Take an array of numbers and return the sum of all of the positives ones.
// Example [1,-4,7,12] => 1 + 7 + 12 = 20
function positiveSum(arr) {
	var sum = 0;
	var i;
	for (i = 0; i < arr.length + 1; i++) {
	  if (arr[i] > 0)
		sum = sum + arr[i];
	}
	return sum;
  }