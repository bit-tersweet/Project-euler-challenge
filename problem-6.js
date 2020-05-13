function sumSquareDifference(n) {
  //**the first part evaluates the square of the sum: you just have to check half oh the total sum because: math says that: 
//  1+(n-1) = n
//  2+(n-2) = n and so on..
  let sum = 0;
  if(n % 2 == 0) sum = n/2;
  for(let i = n; i > n/2; i--){
    sum += n;
  }
  sum *= sum; // <-the sum square

  //well known math props:
  let s = ((n*n+n)*((2*n)+1))/6;
  return sum - s;
}
var t0 = performance.now()

console.log(sumSquareDifference(100));

var t1 = performance.now()
console.log((t1 - t0) + " milliseconds.")
