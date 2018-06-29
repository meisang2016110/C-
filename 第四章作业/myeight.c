#include<stdio.h>
int main()
{
    float score;
	char grade;
	printf("ÊäÈëÄãµÄ³É¼¨:\n");
	scanf("%f",&score);
	printf("Your grade:%C\n",grade);
	if((score>=90)&&(100>=score)) grade=1;
	if((score>=80)&&(89>=score))  grade=2;
	if((score>=60)&&(69>=score))  grade=3;
	if(60>score)  grade=4;
	
	switch(grade)
{
	case 1:printf("A\n");break;
	case 2:printf("B\n");break;
	case 3:printf("C\n");break;
	case 4:printf("D\n");break;
	default:printf("enten date error!\n");
}
return 0;
}
