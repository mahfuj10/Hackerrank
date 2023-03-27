function getMaxLessThanK(n,k){
    let max = 0;
    for(let i =0; i <= n; i++){
        for(let j = i + 1; j <= n; j++){
            const x = i & j;
            if(x > max & x< k){
                max = x
            }
        }
    }
    return max
 }
 