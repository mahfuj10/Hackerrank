
function processData(input) {
    //Enter your code here
let inputCopy = input.split('\n').slice(1);

inputCopy.forEach(str => {
let message = ''
let secondMessage = ''
    for(let i =0; i<str.length; i ++){
        if(i % 2 == 0){
            message += str[i] 
        }else{
            secondMessage += str[i]
        }
    }
    console.log(`${message} ${secondMessage}`)
})

  
}

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});
