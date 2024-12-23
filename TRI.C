#include<stdio.h>
#include<conio.h>

//find third angle of triangle
main()
{
  int angle1, angle2, angle3;

  clrscr();

  printf("Enter angle 1: ");
  scanf("%d",&angle1);

  printf("Enter angle 2: ");
  scanf("%d",&angle2);

  angle3 = 180 - (angle1 + angle2);

  printf("Third angle is: %d",angle3);

  getch();
}