#include <stdio.h>

int main(void) {
    
    int n, c, f=1;
    printf("Enter a integer number to find fictorial: \n");
    scanf("%d", &n);
    
    for( c=1; c<=n; c++ ){
        f = f*c;
    }
    printf("Factorial of %d = %d\n", n, f);
    
    return 0;
}
