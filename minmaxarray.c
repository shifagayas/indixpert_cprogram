#include<stdio.h>
void main()
{
    int array[10],i,max=0,min=array[0];
    for(i=0;i<10;i++)
    {
        printf("Enter a number : ");
        scanf("%d",&array[i]);
    }
    for(i=0;i<10;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
        if(array[i]<min)
        {
            min=array[i];
        }

    }
    printf("Maximum number in array is : %d\n",max);
    printf("Minimum number in array is : %d",min);
}