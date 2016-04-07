#include <stdio.h>
int main(){
    int n, c, i=0;
    
    scanf("%d", &n);
    printf("Fibonacci Series: \n");
    
    for( c=1; c <=n; c++  ){
        printf("%d", fibonacci(i));
    }
}

int fibonacci( int n ){
    if( n == 0 ){
        return 0;
    }
    else if( n==1 ){
        return 1;
    }else{
        return (fibonacci(n-1)+fibonacci(n-2));
    }
}