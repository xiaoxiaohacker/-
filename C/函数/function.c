#include <stdio.h>
#define PI 3.14
#include <math.h>
float Y_s(float R);  //����Y_s������Բ�����
void main()
{
	float s,r;
	printf("������Բ�İ뾶:");
	scanf("%f",&r);
	s=Y_s(r);  //����Y_s����
	printf("%.2f",s);
}
float Y_s(float R)  //����Y_s����
{
	float S;
	S=PI*pow(R,2);
	return S;
}