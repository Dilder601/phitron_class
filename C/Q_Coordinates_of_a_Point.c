#include<stdio.h>
int main() {
    float a, b;
    scanf("%f %f", &a, &b);

    //printf("%f %f", a, b);

    if (a > 0 && b > 0) {
        printf("Q1");
    }
    else if (a > 0 && b < 0) {
        printf("Q4");
    }
    else if (a < 0 && b < 0) {
        printf("Q3");
    }
    else if (a < 0 && b > 0) {
        printf("Q2");
    }
    else if (a > 0 && b == 0) {
        printf("Eixo X");
    }
    else if (a < 0 && b == 0) {
        printf("Eixo X");
    }
    else if (a == 0 && b < 0) {
        printf("Eixo Y");
    }
    else if (a == 0 && b > 0) {
        printf("Eixo Y");
    }
    else if (a == 0 && b == 0) {
        printf("Origem");
    }
    return 0;
}