#include <stdio.h>

int main() {
    int n, i;
    printf("Nhap n (10 <= n <= 1000): ");
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        if (i % 2 != 0 && i % 3 == 0)
            printf("%d ", i);
    }
    return 0;
}