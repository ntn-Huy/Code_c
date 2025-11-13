#include<stdio.h>
#include<string.h>
int count(char x[])
{
    int len=strlen(x),count=0;
    for (int i=0;i<len;i++)
    {
        if('A'<=x[i]&&x[i]<='Z'||'a'<=x[i]&&x[i]<='z')  count++;
    }
return count;
}
int main()
{
    char s1[100];
    printf("Nhap chuoi s1: ");
    gets(s1);
    printf("So ky tu trong chuoi la: %d",count(s1));
}