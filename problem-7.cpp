#include <iostream>
#include <math.h>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono; 
bool isPrime(int m){
   for(int i=2; i<=sqrt(m); i++) 
      if(m%i == 0)
          return false;
   return true;
}

int nthPrime(int n){
    //math prop: is unknown the n-th prime number, but is known that cannot be bigger than n(logn + log(logn))
    int bound = n * (log(n) + log(log(n)));
    std::vector<int> primes( { 2, 3, 5});
    int i = 2;
    //pattern for primes => 6n – 1 or 6n + 1
    while(6*i + 1 < bound){ 
        if (isPrime(6*i -1))
            primes.push_back(6*i - 1);
        if (isPrime(6*i + 1)){
            primes.push_back(6*i + 1);    
        }
        i++;
    }
   
    return primes.at(n-2);
}

int main(){
    auto start = high_resolution_clock::now(); 
    std::cout << nthPrime(10001) << "\n";
    auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<milliseconds>(stop - start); 
  
    cout << duration.count() << " milliseconds";
    //around 35ms
    return 0;
}
