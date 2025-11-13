#include <stdio.h>
#include <string.h>
struct sinhvien{
    char hoten[50];
    char email[50];
    char lop[30];
    float gpa;

};
typedef struct sinhvien sinhvien;

int main()
{
    sinhvien sv;
    strcpy(sv.hoten,"Nguyen Thanh Nhat Huy");
    strcpy(sv.email,"huynguyen310106@gmail.com");
    strcpy(sv.lop,"DHTKVM20A");
    sv.gpa=3.6;
    
    printf("Thong tin sinh vien: \n");
    printf("Ho va ten: %s\n",sv.hoten);
    printf("Email: %s\n",sv.email);
    printf("Lop: %s\n",sv.lop);
    printf("GPA: %.2f\n",sv.gpa);
    return 0;

}