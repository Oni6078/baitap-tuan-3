#include <stdio.h>

int main() {
    int chon;
    float a, b, r;

    printf("1. Hinh vuong\n");
    printf("2. Hinh chu nhat\n");
    printf("3. Hinh tron\n");
    printf("Chon hinh: ");
    scanf("%d", &chon);

    switch (chon) {
        case 1:
            printf("Nhap canh: ");
            scanf("%f", &a);
            printf("Chu vi = %.2f\n", 4 * a);
            printf("Dien tich = %.2f", a * a);
            break;
        case 2:
            printf("Nhap chieu dai va chieu rong: ");
            scanf("%f%f", &a, &b);
            printf("Chu vi = %.2f\n", 2 * (a + b));
            printf("Dien tich = %.2f", a * b);
            break;
        case 3:
            printf("Nhap ban kinh: ");
            scanf("%f", &r);
            printf("Chu vi = %.2f\n", 2 * 3.14 * r);
            printf("Dien tich = %.2f", 3.14 * r * r);
            break;
        default:
            printf("Lua chon khong hop le");
    }
    return 0;
}