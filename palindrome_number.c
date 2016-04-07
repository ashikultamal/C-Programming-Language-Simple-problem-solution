#include <stdio.h>

int main(void) {
    int n, reverse = 0, temp;
    
    printf("Enter a number to check if it is a palindrome or not \n");
    scanf("%d", &n);
    
    temp = n;
    while(temp != 0){
        reverse = reverse*10;
        reverse = reverse + temp%10;
        temp = temp/10;
    }
    
    if( n == reverse ){
        printf("%d is a palindome number", n);
    }else{
        printf("%d is not palindome number", n);
    }
    return 0;
}
