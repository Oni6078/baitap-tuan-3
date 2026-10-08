#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    if (b != 0 && a % b == 0)
        printf("a la boi so cua b");
    else
        printf("a khong la boi so cua b");

    return 0;
}