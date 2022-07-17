// WAP for addition of number,square,cube,average
#include <stdio.h>

int main()
{
    int a,b,sum,sqa,sqb,cua,cub;
    printf("Enter number two numbers :");
    scanf("%d %d",&a,&b);
    sum = a+b;
    printf("\nAddition of %d and %d is :%d\n",a,b,sum);
    sqa = a*a;
    sqb = b*b;
    printf("\nSquare of %d is :%d\n",a,sqa);
    printf("\nSquare of %d is :%d\n",b,sqb);
    cua = sqa * a;
    cub = sqb * b;
    printf("\nCube of %d is : %d\n",a,cua);
    printf("\nCube of %d is : %d\n",b,cub);
    float avg;
    avg = sum/2.0;
    printf("\nAverage of %d and %d is: %0.4f\n",a,b,avg);
}