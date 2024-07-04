#include<stdio.h>

int main()
{
int number;
int i;

printf("enter any number: ");
scanf("%d",&number);
for (int i=1;i<=10;i++)
{

    printf("\n%d*%d=%d" ,number,i,number*i);
}




    return 0;
}