function bonAppetit(bill, k, b) {
    // Write your code here
    let sum = 0;
    bill.splice(k,1)
    for(let i =0; i < bill.length; i++){
            sum += bill[i]
    }
    
    const devide = sum / 2;
    
    if(devide === b) {
        console.log('Bon Appetit')
    }else{
        console.log(b - devide)
    }
}