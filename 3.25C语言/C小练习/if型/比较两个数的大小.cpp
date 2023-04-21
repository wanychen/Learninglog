#include<stdio.h>
int main(){
	float a,b,max;
	printf("请输入两个数字：");
	scanf("%f %f",&a,&b); 
	/*if(a>b){
		printf("大的数字为：%.1f",a);
	}
	else if(a<b){
		printf("大的数字为：%.1f",b);
	}
	else{
		printf("两个数字一样大");
	}*/
	max=a>b?a:b;
	printf("%f",max);
} 
