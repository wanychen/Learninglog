#include<stdio.h>
#include<math.h>	//要用根号先声明这个数学库 
int main(){
	/*
	掌握两个公式：
	s=(a+b+c)/2		即周长的一半
	area= sqrt(s*(s-a)*(s-b)*(s-c));	即面积公式 
	*/
	float a,b,c,s,area;
	printf("请输入三角形的三边长：");
	scanf("%f %f %f",&a,&b,&c);
	s=(a+b+c)/2;
	area= sqrt(s*(s-a)*(s-b)*(s-c));	//sqrt()函数代表根号 
	printf("三角形的面积为：%f\n",area);
	 
	return 0;
}
