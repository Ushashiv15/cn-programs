#include<stdio.h>
void main()
{
    int i=0,n,j;
    char c[100];
    printf("enter the string:");
    scanf("%s",&c);
    while(c[i]!='$')
    {
        printf("\nenter the size:");
        scanf("%d",&n);
        printf("\nmessage:");
        for(j=i;j<i+n;j++)
        {
            printf("%c",c[j]);
        }
        i+=n;
    }
}
