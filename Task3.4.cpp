#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctime>
#define N 64
int main()
{
	int n, i, a = 0, b = 0, MIN = 0, PLUS = -1;
	int arr[N];
	puts("N:");
	scanf("%d", &n);
	srand(time(NULL));
	for(i = 0; i < n/2; i++)
	{
		switch(rand()%2)
		{ 
		case 1:arr[i] = rand();break;
		case 2:arr[i] = - rand();break;
		}
		arr[i] > 0 ? a++ :b++;
		if(arr[i] < 0 && MIN == 0) MIN = arr[i];
		if(arr[i] >= 0) PLUS = arr[i];
	}
		for(i = n/2; i < n; i++)
	{
		if( a > b )
			{
				arr[i] = - rand();
				a--;
			}
		else if(a < b)
			{
				arr[i] = rand();
				b--;
			}
		if(arr[i] < 0 && MIN == 0) MIN = arr[i];
		if(arr[i] >= 0) PLUS = arr[i];
	}

		for(i = 0; i < n; i++)
			printf("%d	", arr[i]);
		printf("\n%d + %d = %d", MIN, PLUS, MIN + PLUS);
return 0;
}