#include <stdio.h>
#include<conio.h>
#define MAX_SIZE 100
int main()
{
char string[MAX_SIZE];
int alphabets, digits, specialchars, i;
alphabets = digits = specialchars = i = 0;
printf("Enter any string : ");
gets(string);
while(string[i]!='\0')
{
if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z'))
{
alphabets++;
}
else if(string[i]>='0' && string[i]<='9')
{
digits++;
}
else
{
specialchars++;
}
i++;
}
printf("Total Special characters : %d\n", specialchars);
return 0;
}
