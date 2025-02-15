#include <stdio.h>

int main() {
  char name[100]; 
  int age;
  char hobby[100]; 

  printf("Enter your name: ");
  scanf("%s", name); 

  printf("Enter your age: ");
  scanf("%d", &age);

  printf("Enter your hobby: ");
  scanf("%s", hobby);

  printf("Name: %s\n", name);
  printf("Age: %d\n", age);
  printf("Hobby: %s\n", hobby);

  return 0;
}