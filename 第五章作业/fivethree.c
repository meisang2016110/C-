#include<stdio.h> 
int main()
{
	int num1,num2,t,p;
	printf("请输入两个正整数：");         
	scanf("%d,%d",&num1,&num2);
    p=num1*num2;
    while(t=num1%num2)
    {
    	num1=num2;
    	num2=t;
	}
	p=p/num2;
	printf("它们的最大公约数是：%d\n",num2);
	printf("它们的最小公倍数是：%d\n",p);
	return 0;
}
