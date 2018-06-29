#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 1000
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
 float p,r;
 printf("Please input a positive number p less than %d\n",M);
 scanf("%f",&p);
 if(p>M)
 {
 	printf("Please input another number:\n");
 	scanf("%f",&p);
 }
 else
 {
    r=sqrt(p);
 	printf("r=%2.0f\n",r);
 }
 return 0;
}



