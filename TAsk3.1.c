#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count = 0;
	char c;
	scanf("%c", &c);
	if(count != 0 && c != '\n')
	{
		printf("Empty string");
	}
	else
	{
		while(c != '\n')
		{
			printf("%c", c);
			scanf("%c", &c);
			if( c == ' ')
			{
				while(c == ' ')
				{
					scanf("%c", &c);
				}
				printf("\n");
				count ++;
			}
		}
		count ++;
	}
	printf("\nNumber : %d", count);
	return 0 ;
}