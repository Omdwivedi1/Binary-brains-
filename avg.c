#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,avg;
    printf("enter the three no.:");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("average of no. is %d",avg);
    getch();
}