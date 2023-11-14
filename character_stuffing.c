#include<stdio.h>
#define flag '$'
#define esc '@'
void main(){
    int i=0,j=0;
    char in[100],out[100];
    printf("sent message is:");
    scanf("%s",&in);
    out[j++]=flag;
    while(in[i]!='\0')
    {
        if(in[i]==flag||in[i]==esc){
            out[j++]=flag;
        }
        out[j++]=in[i++];
    }
    out[j++]=flag;
    printf("\nreceived message is: %s",out);
    
}
