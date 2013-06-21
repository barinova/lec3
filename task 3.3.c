#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 64
int main()
{
char str[N], i=0;
int a[N];
int tmp[N], j, temp, count = 0, res = 0;
puts("Enter a string:");
fgets(str,N,stdin);
while(str[i])
{
	temp = 0;
	do{
		if(str[i]>='0' && str[i]<='9')
			tmp[temp] = str[i] - '0';
			temp++;i++; 
	}while(str[i] != ' ' && str[i] != '\n');
	i++;
	a[count] = 0;
	for(j = 0; j < temp; j++)
		a[count] += pow(10., temp - j - 1) * tmp[j];
	count++;
}

for(i = 0; i < count; i++)
	res += a[i];
printf("%d",res);
return 0;
}