#include <stdio.h>
int fun(int n);
void main()
{
	int n,m=1;
	printf("请输入一个正整形数:\n");
	scanf("%d",&n);
	m=fun(n);
	printf("%d!=%d\n",n,m);
}
int fun(int n)
{ 
	if(n==1||n==0)
		return 1;
	else
		return n*fun(n-1);
}