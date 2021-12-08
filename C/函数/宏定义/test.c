#include <stdio.h>
#define C(a,b) (a+b)*2
void main(){
	int c,m,n;
	printf("请输入矩形的长和宽:\n");
	scanf("%d%d",&m,&n);
	c=C(m,n);
	printf("周长为:%d",c);
}
