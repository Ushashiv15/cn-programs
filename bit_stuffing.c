#include<stdio.h>
void main()
{
    int i=0,j=0,c=0;
    char in[100],out[100];
    printf("sent message is:");
    scanf("%s",&in);
    while(in[i]!='$')
    {
        if(in[i]=='1')
        c++;
        else
        c=0;
        out[j]=in[i];
        i++;
        j++;
        if(c==5){
            out[j]='0';
            j++;
        }
    }
    printf("\nreceived message is:%s",out);
}
