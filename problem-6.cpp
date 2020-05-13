#include <iostream>
#include <chrono> 
using namespace std::chrono; 
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

int main(){
  auto start = high_resolution_clock::now(); 
    cout << sumSquareDifference(100)<<"\n";
    auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<microseconds>(stop - start); 
  
// To get the value of duration use the count() 
// member function on the duration object 
cout << duration.count() << " microsec";
    return 0;
}
