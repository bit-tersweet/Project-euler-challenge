function multiplesOf3and5(number) {
  var sum = 0;
  number--;
  while (number > 0){
    if(number % 5 == 0 || number % 3 == 0){
      sum+=number;
    }
    number--;
  }
  return sum;
}

multiplesOf3and5(1000);
