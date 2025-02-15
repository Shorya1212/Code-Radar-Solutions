#include <stdio.h>
#include <string.h> // Include for strlen

int main() {
    char name[50];
    int age;
    char hobby[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // Remove trailing newline

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar(); // Consume the newline left by scanf

    printf("Enter your hobby: ");
    fgets(hobby, sizeof(hobby), stdin);
    hobby[strcspn(hobby, "\n")] = 0; // Remove trailing newline

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}