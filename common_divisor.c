#include<stdio.h>
int main()
{
	printf("please input two number:\n");
	int a,b;
	scanf("%d,%d",&a,&b);
	int n = a;
	if(n>b)
		n = b;
	for(int i=n; i>=1; i--)
	{
		if(a%i==0 && b%i==0)
		{
			printf("greatest common divisor is:%d\n",i)
			break;
		}
	}
}
