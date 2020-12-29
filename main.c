
//29-12-2020

#include <stdio.h>

int main()
{
	int i, n, p, k;
	long t;
	
	scanf("%ld", &t);
	if(t%2 !=0) //test statement 1 (Look readme for more details)
	{
		printf("0\n");
	}
	else //test statement 2 (Look readme for more details)
		{
		if(t%4==0){
			printf("%ld\n", (t/4)-1);
		}
		else printf("%ld\n", t/4);
	}
	
	return 0;
}
