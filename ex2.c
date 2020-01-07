#include<stdio.h>
#include<string.h>
void reverse(char r[],int i, int j)
{
    int temp;
    if (i<(j-i-1))
    {
        temp = r[i];
        r[i] = r[(j-i-1)];
        r[(j-i-1)] = temp;
        reverse(r,++i,j);
    } 
}
int main()
{
    char a;
    char b[1000];
    int i = 0;
    int j = 0;
    while((a = getchar()) != '\n')
    {
        b[i]=a;
        j=++i;
    }
    reverse(b,0,j);
    for(i=0;i<j;i++)
    printf("%c",b[i]);
}