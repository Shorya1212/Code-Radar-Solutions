#include <stdio.h>

int main() {
  char name[50]; 
  int age;
  char hobby[50]; 

  printf("Enter your name: ");
  scanf("%ch",  name); 

  printf("Enter your age: ");
  scanf("%d", &age);

  printf("Enter your hobby: ");
  scanf("%ch", hobby);

  printf("Name: %ch\n", name);
  printf("Age: %d\n", age);
  printf("Hobby: %ch\n", hobby);

  return 0;
}