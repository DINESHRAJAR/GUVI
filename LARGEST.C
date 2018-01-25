#include <stdio.h>
#include<conio.h>
void main()
{
    double n6, n7, n8;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &n6, &n7, &n8);

    if( n6>=n7 && n6>=n8 )
        printf("%.2f is the largest number.", n6);

    if( n7>=n6 && n7>=n8 )
        printf("%.2f is the largest number.", n7);

    if( n8>=n6 && n8>=n7 )
        printf("%.2f is the largest number.", n8);

    return 0;
}
