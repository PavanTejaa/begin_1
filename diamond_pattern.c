/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,space,temp;
    scanf("%d",&n);
    if(n%2==0)
    space=n/2-1;
    else
    space=n/2;
    int count=1;
    for(int i=space;i>=0;i--)
    {
        for(int j=i;j>0;j--)
        {
            printf(" ");
        }
        for(int j=count;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
        count+=2;
    }
    count-=2;
    int i;
    if(n%2==1){
    i=1;count-=2;}
    else
    i=0;
    for(i;i<=space;i++)
    {
        for(int j=i;j>0;j--)
        {
            printf(" ");
        }
        for(int j=count;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
        count-=2;
    }
    return 0;
}
