#include<stdio.h> 
int main()
{
	int num1,num2,t,p;
	printf("������������������");         
	scanf("%d,%d",&num1,&num2);
    p=num1*num2;
    while(t=num1%num2)
    {
    	num1=num2;
    	num2=t;
	}
	p=p/num2;
	printf("���ǵ����Լ���ǣ�%d\n",num2);
	printf("���ǵ���С�������ǣ�%d\n",p);
	return 0;
}
