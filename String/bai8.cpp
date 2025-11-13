#include<stdio.h>
#include<string.h>
// Chuong trinh xoa tu dau tien
void delet(char x[])
{
    int len=strlen(x),count=0,word=0;
    for (int i=0;i<len;i++)
    {
        if (x[i]==' '&&count==0)
        {
            count++;
            word=i+1;
            for (int j=0;j<len-word;j++)
            {
                x[j]=x[j+word];
            }
            len-=word;
            break;
        }
    }
    x[len]='\0';
}
int main()
{
    char s1[100];
    printf("Nhap chuoi s1: ");
    gets(s1);
    delet(s1);
    printf("Chuoi sau khi bo ki tu dau tien: %s",s1);

}