/*
 * Modify and return the array so that all even elements are doubled and all odd elements are tripled.
 * 
 * Parameter(s):
 * nums: An array of numbers.
 */
const  modifyArray = nums =>  {
    let numbers  = [];
    for(let i =0; i < nums.length; i++){
        let num = nums[i];
        if(num % 2 == 0){
           numbers.push(num * 2);
        }else{
            numbers.push(num * 3);
        }
    }
    return numbers;
};

