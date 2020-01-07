#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
    int a = 0;
    double f;
    int c = argv[++a];
    if ((--argc)>0)
    {   
        f = atof(argv[++a]);
        if(c>f);
        c = f;
        a = a + 1;
        printf("Min parameter is %d\n",c);
    }
    else if (!isdigit(argv[++a]))
    {
        printf("The program needs at least one integer parameter to run!");
    }
    else 
    {
        printf("The parameter has to be an integer format!");
    } 
}