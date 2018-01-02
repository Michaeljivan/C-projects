#include <stdio.h>

int main(){
  char operator;
  double num1, num2;
   
  printf("Choose operator(+, -, *, /)\n");
  scanf("%c", &operator);
  
  printf("Enter first number: ");
  scanf("%lf", &num1);  
  
  printf("Enter second number: ");
  scanf("%lf", &num2);
  
  switch(operator)
  {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
      break;
    default:
      printf("Operator is not correct, try again.");
  }
  
  return 0;
}
