#include<stdio.h>
int main(){
	printf("请输入两个数字："); 
	int a,b,t;
	scanf("%d %d",&a,&b);
	if(a<b){
		t=a;
		a=b;
		b=t;
	}
	printf("由大到小排序为：%d %d",a,b);
}
