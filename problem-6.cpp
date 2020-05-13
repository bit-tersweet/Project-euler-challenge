#include <iostream>
//just for performance i wrote this in cpp
//comments are in the js script
using namespace std;
int sumSquareDifference(int n) {
  int sum = 0;
  if(n % 2 == 0) sum = n/2;
  for(int i = n; i > n/2; i--){
    sum += n;
  }
  sum *= sum; 

  int s = ((n*n+n)*((2*n)+1))/6;
  return sum - s;
}

int main()
{
    cout<<sumSquareDifference(100);

    return 0;
}
