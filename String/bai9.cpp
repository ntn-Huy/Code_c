#include<stdio.h>
#include<string.h>
// Chuong trinh strinlen tuong tu strlen
int stringlen(char x[])
{
    int count=0,i=0;
    while(x[i]!='\0')
    {
        count++;
        i++;
    }
return count;
}
int main()
{
    char s1[100];
    printf("Nhap chuoi s1: ");
    gets(s1);
    printf("so ki tu cua chuoi s1: %d",stringlen(s1));

}