#include<stdio.h>
#include<string.h>
char msg[100],g[10],x1[10],rem[10],rev[100],rcv[100];
int m,n,j=0,f=0,k=0;
char XOR(char a,char b){
    if(a==b)
    return '0';
    else
    return '1';
}
void cal(char x2[])
{
    k=0;
    for(int i=0;i<n;i++)
    {
        rem[i]=XOR(x1[i],g[i]);
    }
    while(rem[k]!='1'&&k<=n)
    {
        k++;
    }
    int q=0,p=k;
    while(rem[p]!='\0')
    {
        x1[q++]=rem[p++];
    }
    for(int r=0;r<k;r++){
        x1[q++]=x2[j++];
    }
}
void crc(char x2[]){
    j=0;
    for(int i=0;i<n;i++){
        x1[i]=x2[j++];
    }
    while(x2[j]!='\0'){
        cal(x2);
    }
    cal(x2);
}
void main(){
    printf("enter the message:");
    scanf("%s",&msg);
    printf("\n enter the code:");
    scanf("%s",&g);
    n=strlen(g);
    m=strlen(msg);
    for(int i=0;i<n;i++){
        rev[i]=msg[i];
    }
    for(int i=m;i<m+n-1;i++){
        msg[i]='0';
    }
    crc(msg);
    printf("\nremainder is :%s\n",rem);
    int ind=1;
    for(int i=m;i<m+n-1;i++){
        rev[i]=rem[ind++];
    }
    printf("\nreceived message is :%s",rev);
    printf("\nenter the received message :");
    scanf("%s",&rcv);
    crc(rcv);
    printf("\nremainder of the given msg:%s",rem);
    int f=1;
    for(int i=0;i<n;i++){
        if(rem[i]!='0')
        f=0;
        if(f)
        printf("\nno error\n");
        else
        printf("\n error!!\n");
    }
}
