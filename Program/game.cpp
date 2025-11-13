#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    char a[3][10]={"keo","bua","bao"};
    int n,may;
    printf("Tro choi one-two-three\n");
    printf("Nhap 1(keo),2(bua),3(bao) : ");
    scanf("%d",&n);
    while (n>3||n<1)   
    {
        printf("Khong hop le vui long nhap lai: ");
        scanf("%d",&n);
    }
    srand(time(0));
    may=1+rand()%3;
    printf("Ban chon :%s\n",a[n-1]);
    printf("May chon :%s\n",a[may-1]);
    switch (n)
    {
        case 1: 
            if(may==2)  printf("Ban da thua!");
            if(may==3)  printf("Ban da thang!");
            break;
        case 2: 
            if(may==3)  printf("Ban da thua!");
            if(may==1)  printf("Ban da thang!");
            break;
        case 3: 
            if(may==1)  printf("Ban da thua!");
            if(may==2)  printf("Ban da thang!"); 
            break;      
    }

    if (n==may) printf("Hoa!");
}