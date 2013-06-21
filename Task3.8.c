#include <stdio.h>
#define N 64
int main()
{
	char arr[N], res[N], tmp[N];
	int i, j = 0, k = 0, l;
	puts("\nEnter:");
	fgets(arr, N, stdin);

	for( i = 0; i < N; i++)
	{
		if(arr[i] == '\n') break;
		k = 0;
		k++;
		while (arr[i+1] == arr[i])
		{
			k++; i++;
		}
		if(k > j)
		{
			j = k;
			for( l = 0; l < k; l++ )
			{
				tmp[l] = arr[i - l];
			}
		}
	}
	for(i = 0; i < j; i++)
		printf("%c",tmp[i]);
	printf("	%d", j);
	return 0;
}