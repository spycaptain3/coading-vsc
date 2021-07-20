/*Enter 20 numbers into an array the number to be
searched is entered is entered through the keyboard by
user. WAP to find if the number to be searched is
present in an array and if present ,display the number of
times it appears in the array.
*/
#include<stdio.h>
int main()
{
	int arr[100], a, i, count = 0;
    printf("Enter 20 numbers : \n");
	for (i = 0; i<20; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter number for search: \n");
	scanf("%d", &a);
	for (i =0; i<20; i++)
	{
		if (arr[i] == a)
			count++;
	}
	if (count)
		printf("times it appears in the array %d times.\n", count);
	else
		printf("sorry, %d is not present, retry\n", a);

	return 0;
}