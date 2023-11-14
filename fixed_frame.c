#include<stdio.h>
void main(){
    int i,c=1,n;
    char s[10];
    printf("enter the string:\n");
    scanf("%s",&s);
    printf("\nenter the length:");
    scanf("%d",&n);
    for(i=0;s[i]!='$';i++)
    {
        c++;
        if(c==n)
        {
            printf("\nmessage:");
            c=0;
        }
        printf("%c",s[i]);
    }
}
