#include <stdio.h>

int main(void) {
  int number, workHour;
  float baseSalary, salary;
  scanf("%d %d %f", &number, &workHour, &baseSalary);
  salary = workHour * baseSalary;
  printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, salary);
  return 0;
}