#include<conio.h>
#include<stdio.h>
void main()
{
    float p1,p2,p3,s=0,t=0;
    printf("enter the price of the products:\n");
    printf("product 1:");
    scanf("%f",&p1);
    printf("product 2:");
    scanf("%f",&p2);
    printf("product 3:");
    scanf("%f",&p3);
    s=p1+p2+p3;
    t=((s*0.18)+s);
    printf("total bill after gst of 18 percent: %f",t);
    getch();
}
