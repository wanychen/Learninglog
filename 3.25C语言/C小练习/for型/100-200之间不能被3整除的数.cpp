#include<stdio.h>
//不能被3整除 即 除以3有余数 即 %3!=0 
int main(){
	int a=100;
	for(a;a<=200;a++){
//		if(a%3!=0){
//			printf("%d\t",a);
//		}
		if(a%3==0) continue;
		printf("%d\t",a); 
	}
	return 0;
}
