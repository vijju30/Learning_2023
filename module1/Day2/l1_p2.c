#include <stdio.h>
#include <string.h>
void swap(void *i, void *j, size_t size) {
    char temp[size];
    memcpy(temp, i, size);
    memcpy(i, j, size);
    memcpy(j, temp, size);
}

int main() {
    int n1,n2;
    printf("Enter input values:");
    scanf("%d %d",&n1,&n2);
    printf("Inetegrs before swapping : %d %d\n",n1,n2);
    swap(&n1,&n2,sizeof(int));
    printf("Inetegrs after swapping : %d %d\n",n1,n2);
    float k,l;
    printf("Enter input values:");
    scanf("%f %f",&k,&l);
    printf("Floating numbers before swapping : %f %f\n",k,l);
    swap(&k,&l,sizeof(float));
    printf("Floating numbers after swapping : %f %f\n",k,l);
    char ch1,ch2;
    printf("Enter input values:");
    scanf(" %c  %c",&ch1,&ch2);
    printf("Characters before swapping : %c %c\n",ch1,ch2);
    swap(&ch1,&ch2,sizeof(char));
    printf("Characters after swapping : %c %c\n",ch1,ch2);
    return 0;
}