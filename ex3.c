#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int a = 0;
    double f;
    int c = argv[++a];
    while ((--argc) > 0 )
    {   
        f = atof(argv[a]);
        if(c > f)
        c = f;
        a++;
    }
    printf("Min parameter is %d\n",c);
}
