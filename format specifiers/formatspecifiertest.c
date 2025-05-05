#include<stdio.h>

int main(){
    int num1=1;
    int num2=10;
    int num3=100;
    int num4=1000;


    printf("%1d\n",num1); // decimal integer
    printf("%2d\n",num2); // decimal integer 
    printf("%3d\n",num3); // octal integer
    printf("%.4d\n",num4); // hexadecimal integer


    float num5=1.0;
    float num6=10.0;
    float num7=100.0;
    float num8=1000.0;
    printf("%.1f\n",num5); // decimal float
    printf("%.2f\n",num6); // decimal float  
    printf("%.3f\n",num7); // decimal float
    printf("%.4f\n",num8); // decimal float
    return 0;
}