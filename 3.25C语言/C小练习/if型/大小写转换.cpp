#include<stdio.h>

int main(){
	/*
	//大写转小写 
	char c;
	printf("请输入一个大写英文字母："); 
	c=getchar();
	c+=32;
	putchar(c);
	return 0; 
	*/
	
	/*小写转大写 
	char c;
	printf("请输入一个小写英文字母："); 
	c=getchar();	
	c-=32;
	putchar(c);
	return 0;  
	*/
	
	char c;
	printf("请输入一个字母：");
	c=getchar();
	if(c>='A'&&c<='Z'){
		c+=32;
	    putchar(c);
	}
	else if(c>='a'&&c<='z'){
		c-=32;
	    putchar(c);
	}
	else{
		printf("输入的不是字母"); 
	}
	return 0;
} 
