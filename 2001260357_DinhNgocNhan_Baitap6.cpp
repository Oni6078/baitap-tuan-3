#include <stdio.h>

int main() {
    int a, b;
    char phep;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap phep toan (+, -, *, /): ");
    scanf(" %c", &phep);
    switch (phep) {
        case '+':
            printf("Ket qua = %d", a + b);
            break;
        case '-':
            printf("Ket qua = %d", a - b);
            break;
        case '*':
            printf("Ket qua = %d", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Ket qua = %.2f", (float)a / b);
            else
                printf("Khong the chia cho 0");
            break;
        default:
            printf("Phep toan khong hop le");
    }
    return 0;
}