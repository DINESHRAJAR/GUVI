#include<stdio.h>
#include<conio.h>
int main()
{
int a[100], i, num, largest;
printf("\nEnter no of elements :");
scanf("%d", &num);
for (i = 0; i < num; i++)
scanf("%d", &a[i]);
largest = a[0];
for (i = 0; i < num; i++) 
{
if (a[i] > largest) 
{
 largest = a[i];
 }
 } 
 printf("\nLargest Element : %d", largest);
return (0);
}
