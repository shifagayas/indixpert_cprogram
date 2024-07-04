#include<stdio.h>
void main()
{
    char alpha[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int c;

    printf("These are all the vowels :");
    for(c=0;c<26;c++)
    {
        if(alpha[c]=='a'|| alpha[c]=='e'|| alpha[c]=='i' || alpha[c]=='o'|| alpha[c]=='u')
        {
            printf("%c\n",alpha[c]);
        }
       
    }
     printf("These are all the constant :");
    for(c=0;c<26;c++)
    {
        if(alpha[c]!='a'&& alpha[c]!='e'&& alpha[c]!='i' && alpha[c]!='o'&& alpha[c]!='u')
        {
            printf("%c\n",alpha[c]);
        }
       
    }

}