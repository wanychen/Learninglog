#include<stdio.h>
/*
给出一个不多于5位数的正整数，
(1)求出它是几位数
方法：
个	%10  
十	/10%10
百	/100%10 
千	/1000
	  
(2)分别输出每一个数字
(3)按逆序输出各位数字 
*/
int main(){
	int a=4753;
	printf("%d",a/1000); 
	
	return 0;
}
	

