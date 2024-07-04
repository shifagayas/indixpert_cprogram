#include<stdio.h>

int main()
{
    int num[5];
    int arraysecond[5];
    int legnth=0;
    printf("please enter 5 number ");
    for (int i=0; i<5;i++)
    {
        scanf("%d",  &num[i]);
    }

    printf("\nfirst array: ");
    for(int j=0;j<5;j++)
    {
        printf("%d",num[j]);
        if(num[j]>5)

        {
            arraysecond[legnth]=num[j];
            legnth++;
        }
    }

    printf("\nsecond array: ");
    for(int k=0;k<legnth;k++)
    {
        printf("%d ",arraysecond[k]);
    }

    return 0;
}