#include <stdio.h>
#define N 64
int main()
{
	int n, i, k = 0, j = 0;
	char arr[N];
	puts("Enter string:");
	fgets(arr, N, stdin);
	puts("Enter number of word:");
	scanf("%d", &n);

	for(i = 0; i < N; i++)
	{
		if(arr[i] == ' ')
		{
			k++;
		while(arr[i] == ' ')
			i++;
		}

		if(k == n - 1)
		{
			n = i;
			while( arr[n] != ' ' && arr[n] != '\n')
			{
				n++; j++;
			}
			while(arr[i] != '\n')
			{
				arr[i] = arr[i + j + 1];
				i++;
			}
			break;
		}
	}

	i = 0;
	while(arr[i] != '\n')
	{
		printf("%c", arr[i]);
		i++;
	}
		
	return 0;
}