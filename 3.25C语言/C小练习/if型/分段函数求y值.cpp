#include<stdio.h>
//掌握，就是将给出的分段情况用if表示 
/*设分段函数为： 
	f(x)={	
			x		(x<1)
			2x-1	(1<=x<10)
			3x-11	(x>=10)	
         }

*/
int main(){
	float x,y;
	printf("请输入x的值：");
	scanf("%f",&x);
	if(x<1){
		y=x;
	}else if(x<10){
		y=2*x-1;
	}else{
		y=3*x-11;
	}
	printf("y=%f",y);
	return 0;
} 
