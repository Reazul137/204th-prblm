#include<stdio.h>
int main()
{
    int a, b, c;

    printf("Enter three random numbers : ");
    scanf("%d %d %d",&a, &b, &c);

    if ( a>b && a>c)
        printf("This is the largest number %d.",a);
    if( b>a && b>c)
        printf("This is the largest number %d.",b);
    if ( c>a && c>b)
        printf("This is the largest number %d.",c);
    return 0;
}
