#include <stdio.h>
#define N 64
int main()
{
	char arr[N], res[N];
	int n, j = 1, i, k = 0;
	puts("Enter your string:");
	fgets(arr, N, stdin);
	puts("\nEnter number of word:");
	scanf("%d", &n);
	for( i = 0; i < sizeof(arr); i++)
	{
		if(arr[i] == ' ')
		{
			j++;
			while(arr[i+1] == ' ') i++;
		}

		if( j == n )
		{
			i++;
			while( arr[i] != ' ' && arr[i] != '\n')
			{
				res[k] = arr[i];
				i++; k++;
			}
			break;
		}
	}
	if(k!= 0)
	{
		for(i = 0; i < k; i++)
			printf("%c", res[i]);
	}
	else
	{
		printf("\nThe word with this index doesn't exist");
	}

	return 0;
}