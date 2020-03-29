#include<stdio.h>

unsigned long int find_factorial(int);
void print_fibonacci(int);
void print_odd(int, int);
void print_even(int, int);

unsigned long int find_factorial(int term) {
  long factorial = 1, number;
  for (int number = 1; number <= term; number++) {
    factorial = factorial * number;
  }
  return factorial;
}

void print_fibonacci(int limit) {
  int previous = 0, current = 0, next = 1;
  while (current <= limit) {
    printf("%d\n",current);    
    previous = current;
    current = next;
    next = previous + current;
  }
}

void print_odd(int start, int end) {
  int skip = 2, current;
  int excess = start % skip;
  int first_odd = start - excess + 1;

  for(current = first_odd; current <= end; current += skip){
    printf("%d\n", current);
  }
}

void print_even(int start, int end) {
  int skip = 2, current;
  int excess = start % skip;
  int first_even = start + excess;

  for(current = first_even; current <= end; current += skip){
    printf("%d\n", current);
  }
}

int main(void) {
  int number;
  printf("Enter a number\n");
  scanf("%d", &number);

  printf("\nThe factorial of %d : %lu\n", number, find_factorial(number));
  printf("\nThe fibonacci series till %d are :\n", number);
  print_fibonacci(number);
  printf("\nThe odd numbers from 1 to %d are :\n", number);
  print_odd(1, number);
  printf("\nThe even numbers from 1 to %d are :\n", number);
  print_even(1, number);
  return 0;
}