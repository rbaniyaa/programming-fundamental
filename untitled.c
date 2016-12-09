/*
student name:Rupesh baniya
program:wap
lab sheet no:
roll no:
subject:programming fundamental
*/

#include<stdio.h>  //printf(),scanf()
//conio.h   (getch(),clrscr())

int main()
{
int a,b,c;//decleration of variable

printf("enter the first number:\n");//o/p

scanf("%d",&a);               //i/p

printf("enter the second number:\n");
scanf("%d",&b);

printf("enter the third number:\n");
scanf("%d",&c);

if(a>=b&&a>=c)
{
printf("a is greater");
}
else if(b>=a&&b>c)
{
printf("b is greater");
}
else
{
printf("c is greater");
}
return(0);

}
