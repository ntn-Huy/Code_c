#include<stdio.h>
#include<string.h>
void stringcpy(char *x,char *y)
{
    while(*y!='\0')
    {
        *x=*y;
        x++;
        y++;
    }
    *x='\0';
}
int main()
{
    char s1[100];
    char s2[100]="hello";
    stringcpy(s1,s2);
    printf("chuoi 1: %s",s1);
    printf("chuoi 2: %s",s2);
}