#include <stdio.h>

int main() {
    int n, i;
    int tong = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        tong += i * (i + 1);
    printf("Tong = %d", tong);
    return 0;
}