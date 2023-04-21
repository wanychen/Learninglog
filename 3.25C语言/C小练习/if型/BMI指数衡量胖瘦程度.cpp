#include<stdio.h>
int main(){
	float h,w,t;
	printf("请输入身高和体重：");
	scanf("%f %f",&h,&w);
	t=w/(h*h);
	printf("t=%f\n",t);
	if(t<18){
		printf("体重偏轻");
	}
	else if(t<25){
		printf("体重正常");
	}
	else{
		printf("体重偏重");
	} 
	
	return 0;
}
