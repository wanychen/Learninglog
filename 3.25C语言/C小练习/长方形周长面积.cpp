#include"stdio.h"
int main(){
	float x,y;
	printf("请输入长方形的长:");
	scanf("%f",&x);
	printf("请输入长方形的宽:");
	scanf("%f",&y);
	printf("长方形的周长为：%.1f",x*2+y*2); 
	printf("长方形的面积为：%.1f",x*y); 
} 
