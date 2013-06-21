#include <stdio.h>
#define N 64
int main()
{
	int i, temp, count = 0;
	char a[N], tmp[N], res[N];
	puts("Enter a string:");
	fgets(a,N,stdin);
	i = temp = 0;
	while(a[i]){
		do{
			tmp[temp] = a[i];
			i++;temp ++;
		}while(a[i] != ' ' && a[i]);
		if(temp > count)
		{
			count = temp;
			for(temp = 0; temp < count; temp++)
				res[temp] = tmp[temp];
		}
		temp = 0;
	}

	printf("Maximum simbols in ");
	for(temp = 0; temp < count; temp++)
		printf("%c",res[temp]);
	printf("\nLenght:	%d", count -1);
	return 0; 
}