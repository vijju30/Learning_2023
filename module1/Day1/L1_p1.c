#include <stdio.h>

int biggest(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}
 int ternary(int n1,int n2){
         return (n1 > n2) ? n1 : n2;
    }
int main() {
    int n1,n2;
    printf("Enter the n1: ");
    scanf("%d",&n1);
    printf("Enter the n2:");
    scanf("%d",&n2);

    printf("Biggest of two numbers %d and %d is %d\n",  n1, n2, biggest(n1, n2) );  
    printf("By using ternary operator the biggest number of %d and %d is %d\n",n1,n2, ternary(n1, n2));  

    return 0;
}
