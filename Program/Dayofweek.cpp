#include <stdio.h>

int main()
{
    char a[7][10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int n;
    printf("Chuong trinh xac dinh thu ngay thang\n");
    printf("Nhap ngay trong tuan: ");
    scanf("%d",&n);
    if (n<8 && n>=1)
        printf("%s",a[n-1]);
    else
        printf("Khong hop le!");
     return 0;
} 