#include <stdio.h>
#define N 60696
int fiboEvenSum(int n) {
  int c = 8;
  int sum = 10;
  int last = 8;
  int p_last =2;
  
  //the trick is: n = 4(n-1) + (n-2)
  //c = 4last + p_last
  while(sum < n){
  	c = (last * 4) + p_last;
    sum += c;
    p_last = last;
    last = c;
  }
  if(sum > n)
      sum -= c;
    
  return sum;
}

void main() {
    int f = fiboEvenSum(N);
    printf("%d", f);
}

