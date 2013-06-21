#include <stdio.h>
#include <stdlib.h>
#define N 64
int main()
{
  int arr[N][2], i, j;
	int count = 0, tmp;
	char c;
	do{
	scanf("%c",&c);
	for(i = 0; i <= count; i++)
		if(arr[i][0] == (int)c)
		{
			arr[i][1] ++;
			break;
		}
		else if (i == count)
		{
			arr[count][0] = c;
			arr[count][1] = 1;
			count++;
			break;
		}
	}while(c != '\n');

	for (i = 0; i < count-1; i++)
	{
		for (j = i + 1; j < count-1; j++)
		{
			if(arr[i][1] > arr[j][1])
			{
				tmp = arr[i][1];
				arr[i][1] = arr[j][1];
				arr[j][1] = tmp;
				tmp = arr[i][0];
				arr[i][0] = arr[j][0];
				arr[j][0] = tmp;
			}
		}
	}

	for (i = count-2; i != 0 ; i--)
			printf("%c %d \n",arr[i][0], arr[i][1]);
	return 0; 
}