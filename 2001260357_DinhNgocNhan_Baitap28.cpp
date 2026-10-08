#include <stdio.h>

int main() {
    int n, i;
    float tong = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        tong += 1.0 / (i * (i + 1) * (i + 2));
    printf("Tong = %.4f", tong);
    return 0;
}