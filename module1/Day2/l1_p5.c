#include<stdio.h>
void encode(char *s){
    for(int i=0;s[i]!='\0';i++){
        s[i]=s[i]+2;
    }
}
void decode(char *s){
    for(int i=0;s[i]!='\0';i++){
        s[i]=s[i]-2;
    }
}
int main(){
    char s[100];
    printf("Enter string:");
    scanf("%s",s);
    encode(s);
    printf("Encoded string : %s\n",s);
    decode(s);
    printf("Decoded string : %s\n",s);
    return 0;
}