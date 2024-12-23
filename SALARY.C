#include <stdio.h>
#include <conio.h>

//show gross salary
main()
{
  int salary;
  float hra, da, ta, gross;

  clrscr();

  printf("Enter salary: ");
  scanf("%d",&salary);

  hra = salary * 0.1;
  da = salary * 0.05;
  ta = salary * 0.08;

  gross = salary + hra + da + ta;

  printf("HRA = 10% , DA = 5% , TA = 8%\n");
  printf("Gross Salary is: %0.1f",gross);

  getch();
}