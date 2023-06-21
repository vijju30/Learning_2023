#include<stdio.h>

typedef struct {
    float real;
    float image;
} Complex;

Complex readComplexNumber() {
    Complex x;
    printf("Enter the real part: ");
    scanf("%f", &x.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &x.image);
    return x;
}

void writeComplexNumber(Complex x) {
    if (x.image >= 0)
        printf("Complex number: %.2f + %.2fi\n", x.real, x.image);
    else
        printf("Complex number: %.2f - %.2fi\n", x.real, -x.image);
}

Complex addComplexNumbers(Complex x1, Complex x2) {
    Complex result;
    result.real = x1.real + x2.real;
    result.image = x1.image + x2.image;
    return result;
}

Complex multiplyComplexNumbers(Complex x1, Complex x2) {
    Complex result;
    result.real = x1.real * x2.real - x1.image * x2.image;
    result.image = x1.real * x2.image + x1.image * x2.real;
    return result;
}

int main() {
    Complex x1, x2, sum, product;
    printf("Enter the first complex number\n");
    x2 = readComplexNumber();
    printf("Enter the second complex number\n");
    x1 = readComplexNumber();
    sum = addComplexNumbers(x1, x2);
    product = multiplyComplexNumbers(x1, x2);
    printf("\n");
    writeComplexNumber(x1);
    writeComplexNumber(x2);
    writeComplexNumber(sum);
    writeComplexNumber(product);
    return 0;
}