#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main()
{
	float x,y;
	printf("Please input x:\n");
	scanf("%f",&x);
	if(x>=1)
	 if(x<10) y=2*x-1;
	 else y=3*x-11;
	else y=x;
	printf("y=%f\n",y);
	return 0;
}
