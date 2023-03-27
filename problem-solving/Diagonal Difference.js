function diagonalDifference(arr) {
    // Write your code here
    let s1 = 0;
    let s2 = 0;
    let size = arr.length;
    for(let i=0; i < size; i++){
        s1+=arr[i][i]
        s2+=arr[i][size-i-1]
    }
    
    return Math.abs(s1 - s2)
}