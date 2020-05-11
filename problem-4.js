function isPali(m){
    if(String(m).length % 2 != 0) return 0; //only even lenght are candidates for palindrome
    return parseInt(String(m).split('').reverse().join('')) == m;
}

function largestPali(n){
    let i, f, l, prod;
    i = Math.pow(10, n - 1) * 9;
    for(let m = 0; m < n-1; m++)
        i += (Math.pow(10, m) * 9); //build num with n 9
    
    f = i;
    l = 0;
    let old_i = i;
    for(;i > (old_i/10) ; i--){
        for(let sec = f-9; sec > (f/10); sec-=11){ //all prod values shown in the example were multiplied by 11, so no need to check all values
                if(i % 11 == 0) sec+=10;//but if i is a multiple of 11, you gotta check it, or you get lower prods
                prod = i * sec; //factor
                if(prod > l && isPali(prod)) {//that's way better than  isPali(prod) && prod > l avoiding useless calls to func
                    l = prod;//update
                    break; // it's useless checking smaller nums
                }else if(l > prod) break; //same
        }
    }
    return l;
}


var t0 = performance.now()

console.log(largestPali(3));

var t1 = performance.now()
console.log((t1 - t0) + " milliseconds.")
