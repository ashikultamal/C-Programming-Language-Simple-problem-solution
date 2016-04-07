#include <stdio.h>

int main(void) {
    
    int n, sum = 0, temp, remainder, digit = 0;
    
    printf("Input an interger \n");
    scanf("%d", &n);
    
    temp = n;
    
    while(temp !=0){
        digit++;
        temp = temp/10;
    }
    
    temp = n;
    
    while( temp !=0 ){
        remainder = temp%10;
        sum = sum+power(remainder, digit);
        temp = temp/10;
    }
    if( n=sum ) printf("%d is an Aramstrong number", n);
    else{
        printf("%d is an Aramstrong number", n);
    }
    return 0;
}

int power(int n, int r){
    int c, p=1;
    for(c=1; c<=r;c++){
        p = p*n;
        return p;
    }
}
