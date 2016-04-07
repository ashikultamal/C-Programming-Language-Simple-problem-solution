#include <stdio.h>
#include <string.h>

int main() {
    // your code goes here
    char n[100];
    
    printf("Enter the string you want to reverse \n");
    gets(n);
    strrev(n);
    
    printf("Reverse string is \n%s\n", n);
    
    return 0;
}
