// Take an array of numbers and return the sum of all of the positives ones.
// Example [1,-4,7,12] => 1 + 7 + 12 = 20
#include <stdio.h>

int ft_sop(int *arr)
{
	int sum = 0;
	int i;
	for (i = 0; i < 5; i++)
	{
		if (arr[i] > 0)
			sum = sum + arr[i];
	}
	return (sum);
}

int main(void)
{
	int arr1[] = {1,2,3,4,5};
	int arr2[] = {1,22,3,-4,5};
	int arr3[] = {1,22,-3,-4,5473};
	printf("arr1 :%d\n", ft_sop(arr1));
	printf("arr2 :%d\n", ft_sop(arr2));
	printf("arr3 :%d\n", ft_sop(arr3));
	return (0);
}