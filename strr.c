#include <stdio.h>
#include <string.h>
int main() {
 // Declaration and Initialization
 char str1[] = "Mafia";
 char str2[20];
 char search = 'i';

 // strlen - String Length
 printf("Length of str1: %lu\n", strlen(str1));

 // strcpy - String Copy
 strcpy(str2, str1);
 printf("After copying, str2: %s\n", str2);

 // strcat - String Concatenation
 strcat(str2, " welcomes");
 printf("After concatenation, str2: %s\n", str2);
 
// strcmp - String Comparison
 int result = strcmp(str1, str2);
 if (result == 0) {
 printf("str1 is equal to str2\n");
 } else if (result < 0) {
 printf("str1 is less than str2\n");
 } else {
 printf("str1 is greater than str2\n");
 }
 return 0;
}