#include<stdio.h>
#include<string.h>
// Chuong trinh strinlen tuong tu strlen
void stringcat(char x[],char y[])
{
   int count=0,lenx=strlen(x),leny=strlen(y),j=0;
   for (int i=lenx;i<lenx+leny;i++)
   {
        x[i]=y[j++];
   }
    x[lenx+leny]='\0';
}
int main()
{
    char s1[100];
    char s2[100]=" dep trai";
    printf("Nhap chuoi s1: ");
    gets(s1);
    stringcat(s1,s2);
    printf("%s\n",s1);

}