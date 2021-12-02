#include <stdio.h>
#define PI 3.14
#include <math.h>
float Y_s(float R);  //声明Y_s函数：圆的面积
void main()
{
	float s,r;
	printf("请输入圆的半径:");
	scanf("%f",&r);
	s=Y_s(r);  //调用Y_s函数
	printf("%.2f",s);
}
float Y_s(float R)  //定义Y_s函数
{
	float S;
	S=PI*pow(R,2);
	return S;
}