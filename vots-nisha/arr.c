#include<stdio.h>
int main()
{

int number[10];

 printf("enter any ten number: ");

 for(int i=1;i<=10;i++)
 {
    scanf("%d" , &number[i]);
 }
 for(int i=1;i<=10;i++)

{

printf(" %d ", number[i]);
 
}


    return 0;
}