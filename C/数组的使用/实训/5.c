#include <stdio.h>
//有一个a[3][4]整型二维数组，找出各行的最大值存到数组b[3]中
void main()
{
	int a[3][4],i,j;
	int b[3];
	printf("请输入3行四列各值:");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);
	printf("各行最大值为：\n");
	for(i=0;i<3;i++)
	{
		b[i]=a[i][0];//每列设为最大值
		for(j=0;j<4;j++)
			if(b[i]<a[i][j])
				b[i]=a[i][j];
		printf("%5d\n",b[i]);
	}
}
