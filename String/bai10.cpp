#include<stdio.h>
#include<string.h>
// Chuong trinh strinlen tuong tu strlen
int stringcmp(char x[],char y[])
{
    int N;
    if (x[0]==y[0]) N=0;
    else if(x[0]>y[0]) N=1;
    else if(x[0]<y[0])  N=-1;
return N;
}
int main()
{
    char s1[100];
    char s2[100]="Huy";
    printf("Nhap chuoi s1: ");
    gets(s1);
    printf("%d\n",stringcmp(s1,s2));

}