#include<stdio.h>
#include<conio.h>

//convert celsius to fahrenheit
main()
{
  int celsius;
  float fahr;

  clrscr();

  printf("Enter temperature in celsius: ");
  scanf("%d",&celsius);

  fahr = (1.8 * celsius) + 32;

  printf("Temperature in fahrenheit is: %0.1f",fahr);

  getch();
}