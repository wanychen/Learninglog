#include<stdio.h>
#include<math.h>
int main(){
	/*
	掌握求根公式
	 
	因为C语言里面没有  +- 这个符号，所以需要将求根公式拆分 
	p=-b/(2*a); 
	q=sqrt(b*b-4*a*c)/(2*a); 
	p+q	 p-q
	*/
	float a,b,c,p,q;
	printf("请输入一元二次方程的a,b,c：");
	scanf("%f %f %f",&a,&b,&c);
	p=-b/(2*a);
	q=sqrt(b*b-4*a*c)/(2*a);
	printf("该一元二次方程的两个根为：%f %f\n",p+q,p-q);
}
