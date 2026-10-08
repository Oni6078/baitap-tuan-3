#include <stdio.h>

int main() {
    int n, i, tong = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (i = 2; i <= 2 * n; i += 2) {
        tong = tong + i;
    }
    printf("Tong = %d", tong);
    return 0;
}