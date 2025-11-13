#include<stdio.h>

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        if (i==n)   // in hang cuoi
        {
            for (int l=0;l<=2*(n-1);l++)
                printf("*");
            break;
        }
        
        for (int j=1;j<=n-i;j++)    //in duong cheo ben trai
        {
            printf(" ");
        }
        printf("*");
        if (i>1)       //in khoang trong trong tam giac
        {
            for (int k=0;k<=2*(i-1)-2;k++)
                printf(" ");
            
            printf("*");    //in duong cheo ben phai
        }
        
        printf("\n");

    }
    
}