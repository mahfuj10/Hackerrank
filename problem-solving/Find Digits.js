function findDigits(n) {
    // Write your code here
    let count = 0;
    const array = String(n).split('');
    
    for(let i = 0; i < array.length; i++){
        const number = parseInt(array[i]);
        if(n % number == 0){
            count++
        }
    }
    return count;
}