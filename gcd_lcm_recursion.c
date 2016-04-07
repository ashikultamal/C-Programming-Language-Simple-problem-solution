#include <stdio.h>

long gcd(long, long);
int main(void) {
    long x, y,hcf,lcm;
    
    printf("Enter 2 interger: \n");
    scanf("%ld%ld", &x,&y);
    
    hcf=gcd(x,y);
    lcm=(x*y)/hcf;
    
    printf("GCD of %ld and %ld is : %ld\n", x,y,hcf);
    printf("LCM of %ld and %ld is : %ld", x,y,lcm);
    
    
    return 0;
}

long gcd(long a, long b){
    if( b == 0 ){
        return a;
    }
    else{
        return (b, a%b);
    }
}