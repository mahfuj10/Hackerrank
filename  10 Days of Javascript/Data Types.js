
function performOperation(secondInteger, secondDecimal, secondString) {
    const firstInteger = 4;
    
    const firstDecimal = 4.0;
    
    const firstString = 'HackerRank ';
    
  let num = Number(secondInteger);
  const sum = num + firstInteger;
  console.log(sum);

 let float = parseFloat(secondDecimal);
 const secondSum = float + firstDecimal;
 console.log(secondSum);


const thirdSum = firstString + secondString;
console.log(thirdSum);

}

