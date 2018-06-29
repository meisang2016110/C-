#include <stdio.h>
void main()
{
	int a,n,i,j,t,sum=0,s=0;
	printf("请输入两个数字:");
	scanf("%d,%d",&n,&a);
	for(i=1;i<=n;i++)
	{
		t=a;s=0;
		for(j=1;j<=i;j++)
		{
			s=s+t;
			t=t*10;
		}
		sum=sum+s;
	}
	printf("%d",sum);
	return 0;
}

