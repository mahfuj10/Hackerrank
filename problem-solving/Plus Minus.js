
function plusMinus(arr) {
    // Write your code here
let positiveNumbers = 0
let negativeNumbers = 0
let zero = 0
    let arrSize = 0
    for(const number of arr){
        arrSize = arr.length
        if(number < 0){
            negativeNumbers++
        }else if(number > 0 ){
            positiveNumbers++
        }else if(number ==0){
            zero++
        }
        
    }
console.log(positiveNumbers / arrSize)
console.log(negativeNumbers / arrSize)
console.log(zero / arrSize)
}