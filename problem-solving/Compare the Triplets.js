/*
 * Complete the 'compareTriplets' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

function compareTriplets(a, b) {
    // Write your code here
    let alice = 0
    let bob = 0
    const arr = []
    for(let i=0; i<3;i++){
    if(a[i] > b[i]){
        alice++
    }
    if(a[i] < b[i]){
        bob++
    }
    }
    return [alice,bob]
    
}