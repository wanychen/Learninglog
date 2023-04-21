#include<stdio.h>
int main()
{
float f1=1.5;
printf("%f\n",f1);
//此时1.5实际是double类型，赋值给了float 
//需要给这个数+f/+F才是真正的float类型 
double f2=1.5f;
printf("%f\n\n",f2);
//表示 29/10=2.9 
printf("%.1f\n\n",29/10);
//错误，结果是整形，不带小数 
printf("%.1f\n\n",29/10.0);
//正确，有实型参与运算，结果带小数 
printf("%f\n",0.03e2);//3.000000 
//e2、e+2、e+002 它们的效果都一样 
printf("%f\n",0.03e-2);//0.000300 
//e-2、e-002 它们的效果都一样 

}
