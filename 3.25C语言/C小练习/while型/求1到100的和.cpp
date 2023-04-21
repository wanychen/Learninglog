#include<stdio.h>
//1~100µÄºÍÎª5050 
int main(){
	int n=0,m=0;
	while(n<100){
		++n;
		m+=n;
	}
	printf("%d",m);

//	do{
//		++n;
//		m+=n;
//	}while(n<100);
//	printf("%d",m);
	
	return 0;
} 
