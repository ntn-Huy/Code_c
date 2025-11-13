#include<stdio.h>
#include<string.h>
void tach(char x[])
{
    int len=strlen(x);
    for (int i=0;i<len;i++)
    {
        if (x[i]==32)   x[i]='\n';
    }
}
int main()
{
    char s1[100];
    printf("Nhap chuoi s1: ");
    gets(s1);
    tach(s1);
    printf("%s",s1);
}