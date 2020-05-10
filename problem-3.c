#include <stdio.h>
#include <math.h>
//need unsigned long version for testing 600851475143 case
int isPrime(int n) {
    if (n == 1) 
        return 0;
    
    int i = 2;
    while (i*i <= n) {// Only O(sqrt(n)) needed
        if (n % i == 0) return 0;
        i += 1;
    }
    return 1;
}
int largestPrime(int n) {
    if(isPrime(n)) return n;
    int old = n;
    // Only O(sqrt(n)) needed
    n = (int)(sqrt(n));
    while(old % n || !isPrime(n)) n--;
    return n;
}
void main() {
    int lp = largestPrime(13195);
    printf("%d", lp);
}
