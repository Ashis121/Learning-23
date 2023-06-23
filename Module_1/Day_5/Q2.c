#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

void readComplex(struct Complex *c) {
    printf("Enter the real part: ");
    scanf("%f", &(c->real));
    printf("Enter the imaginary part: ");
    scanf("%f", &(c->imaginary));
}

void writeComplex(struct Complex c) {
    printf("Complex number: %.2f + %.2fi\n", c.real, c.imaginary);
}

struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    result.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
    return result;
}

int main() {
    struct Complex c1, c2;
    
    printf("Enter the first complex number:\n");
    readComplex(&c1);
    
    printf("Enter the second complex number:\n");
    readComplex(&c2);
    
    printf("First complex number:\n");
    writeComplex(c1);
    
    printf("Second complex number:\n");
    writeComplex(c2);
    
    struct Complex sum = addComplex(c1, c2);
    printf("Sum of the complex numbers:\n");
    writeComplex(sum);
    
    struct Complex product = multiplyComplex(c1, c2);
    printf("Product of the complex numbers:\n");
    writeComplex(product);
    
    return 0;
}
