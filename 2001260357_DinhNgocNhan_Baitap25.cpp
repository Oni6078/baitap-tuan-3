#include <stdio.h>

int main() {
    int n, i;
    long long tich = 1;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        tich = tich * i;
    printf("Tich = %lld", tich);
    return 0;
}