#include<stdio.h>
int main(){
	/*
	掌握以下两个条件 
	能被400整除	（即没有余数，即%400==0） 
	不能被100整除但能被4整除 	（即%100!=0&&%4==0） 
	*/
	printf("请输入年份："); 
	int a;
	scanf("%d",&a);
	if((a%400==0)||(a%100!=0&&a%4==0)){
		printf("%d年是闰年",a); 
	}
	else{
		printf("%d年不是闰年",a); 
	} 
	return 0;
} 
