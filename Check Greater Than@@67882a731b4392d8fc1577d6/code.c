include <stdio.h>  

int main() { 
int a, b; 
 
// Input two space-separated integers 
scanf("%d %d", &a, &b); 
 
// Check if the first number is greater than the second 
if (a > b) { 
printf("True\n");   // Output True if a is greater than b 
} else { 
printf("False\n");  // Output False otherwise 
} 

return 0; 
}