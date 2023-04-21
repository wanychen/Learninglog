#include<stdio.h>
int main(){
	char a;
	printf("请输入成绩等级：");
	a=getchar();
	switch(a){
		case 'A':
		printf("85以上");
		break;
		case 'B':
		printf("70-84");
		break;
		case 'C':
		printf("60-69");
		break;
		case 'D':
		printf("60以下");
		break;
		default:("输入错误");
	} 
	
} 
