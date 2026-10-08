#include <stdio.h>

int main() {
    float donGia, soLuong, thanhTien, giamGia, tongTien;

    printf("Nhap don gia: ");
    scanf("%f", &donGia);

    printf("Nhap so luong: ");
    scanf("%f", &soLuong);

    thanhTien = donGia * soLuong;

    if (thanhTien > 100){
        giamGia = thanhTien * 0.03;        
    }
    else{
        giamGia = 0;
    }
    tongTien = thanhTien - giamGia;
    printf("Thanh tien: %.2f\n", thanhTien);
    printf("Giam gia: %.2f\n", giamGia);
    printf("Tong tien phai tra: %.2f\n", tongTien);

    return 0;
}