#include <stdio.h>
#include <stdlib.h>
#define N 64
int main()
{
	int arr[N], n, i, max, min;
	printf("Enter size \n");
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		arr[i] = rand();
		if(i == 0)
			max = min = arr[i];
		else
		{
			if(arr[i] > max)
				max = arr[i];
			if(arr[i] < min)
				min = arr[i];
		}
		printf("%d	", arr[i]);
	}
	printf("\nMAX = %d	MIN = %d", max, min);
	return 0;
}