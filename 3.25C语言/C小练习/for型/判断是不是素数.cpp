#include<stdio.h>
//只能被 1 和它本身整除(需要从所有数中找有没有一个数能被它整除，有则不是素数)
//例如：3 5 7 11..... 
//这个题不能只用if！！！ 
int main(){
	int i,j;
	printf("请输入一个数：");
	scanf("%d",&i); 
	for(j=2;j<i;j++){		//1不是素数直接排除，从2开始 (i要<a)  
		if(i%j==0){			//a如果能被i这个非它本身的数整除，则不是素数 
			j=0;            //为i赋值0为下面的if做准备  
			break;
		}   
	}
	if(j){	//此时i的值要!=0才能执行，!=0即和上面的for循环无关，则为素数  
		printf("%d是素数",i); 
	}  
	else{
		printf("%d不是素数",i);
	}

 
////100~200之间的素数 
//	int i,j;              
//	for(i=100;i<=200;i++){
//		for(j=2;j<i;j++){
//			if(i%j==0){
//				j=0;            
//				break;
//			}
//		}
//		if(j)
//			printf("%d\t",i);     
//	}
	
	
	return 0;
} 
