#include<stdio.h>
#include<string.h>
// Chuong trinh xoa di ki tu 'e'
void delet(char x[])
{
    int len=strlen(x);
    for (int i=0;i<len;i++)
    {
        if (x[i]=='e')
        {
            
            for (int j=i;j<len;j++)
            {
                x[j]=x[j+1];
            }
            i--;
            len--;
        }
    }
}
int main()
{
    char s1[100];
    printf("Nhap chuoi s1: ");
    gets(s1);
    delet(s1);
    printf("Chuoi sau khi bo ki tu 'e': %s",s1);

}