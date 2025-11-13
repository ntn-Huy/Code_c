#include <stdio.h>
#include <stdlib.h>

// Định nghĩa kiểu cấu trúc NgayThangNam
typedef struct {
    int ngay;
    int thang;
    int nam;
} NgayThangNam;

// Hàm kiểm tra năm nhuận
int laNamNhuan(int nam) {
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

// Hàm trả về số ngày trong một tháng
int soNgayTrongThang(int thang, int nam) {
    int ngayTrongThang[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (thang == 2 && laNamNhuan(nam)) {
        return 29;
    }
    return ngayTrongThang[thang - 1];
}

// Hàm nhập ngày tháng năm
void nhapNgay(NgayThangNam *ngay) {
    printf("Nhap ngay: ");
    scanf("%d", &ngay->ngay);
    printf("Nhap thang: ");
    scanf("%d", &ngay->thang);
    printf("Nhap nam: ");
    scanf("%d", &ngay->nam);
}

// Hàm hiển thị ngày tháng năm
void hienThiNgay(NgayThangNam ngay) {
    printf("%02d/%02d/%04d\n", ngay.ngay, ngay.thang, ngay.nam);
}

// Hàm chuyển ngày tháng năm sang số ngày kể từ 01/01/0001
int chuyenNgaySangSo(NgayThangNam ngay) {
    int tongNgay = 0;

    // Cộng tổng số ngày của các năm trước
    for (int i = 1; i < ngay.nam; i++) {
        tongNgay += laNamNhuan(i) ? 366 : 365;
    }

    // Cộng tổng số ngày của các tháng trong năm hiện tại
    for (int i = 1; i < ngay.thang; i++) {
        tongNgay += soNgayTrongThang(i, ngay.nam);
    }

    // Cộng số ngày trong tháng hiện tại
    tongNgay += ngay.ngay;

    return tongNgay;
}

// Hàm tính khoảng cách giữa hai ngày
int khoangCachHaiNgay(NgayThangNam ngay1, NgayThangNam ngay2) {
    int soNgay1 = chuyenNgaySangSo(ngay1);
    int soNgay2 = chuyenNgaySangSo(ngay2);
    return abs(soNgay1 - soNgay2);
}

int main() {
    NgayThangNam ngay1, ngay2;

    printf("Nhap ngay thu nhat:\n");
    nhapNgay(&ngay1);

    printf("Nhap ngay thu hai:\n");
    nhapNgay(&ngay2);

    printf("\nNgay thu nhat: ");
    hienThiNgay(ngay1);

    printf("Ngay thu hai: ");
    hienThiNgay(ngay2);

    int khoangCach = khoangCachHaiNgay(ngay1, ngay2);
    printf("\nKhoang cach giua hai ngay la: %d ngay\n", khoangCach);

    return 0;
}
