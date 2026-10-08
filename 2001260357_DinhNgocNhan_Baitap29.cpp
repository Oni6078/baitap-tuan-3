#include <stdio.h>

int main() {
    int n, m, i, dem = 0;
    printf("Nhap n, m: ");
    scanf("%d%d", &n, &m);
    for (i = n; i <= m; i++) {
        if (i % 2 == 0)
            dem++;
    }
    printf("So luong so chan = %d", dem);
    return 0;
}