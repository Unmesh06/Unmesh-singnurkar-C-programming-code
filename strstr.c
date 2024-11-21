#include <stdio.h>
#include <string.h>
int main () {
 const char str1[20] = "MafiaDon";
 const char str2[10] = "Do"; 
 char *str3;

 str3 = strstr(str1, str2); 
 
 printf("The substring is: %s\n", str3);
 
 return(0);
}