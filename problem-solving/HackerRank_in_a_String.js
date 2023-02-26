function hackerrankInString(s) {
    // Write your code here
   const example = "hackerrank".split("");
   const input = s.split("");
   let count = 0;
   
   if(input.length < example.length) return 'NO'
   
   for(let i =0; i < input.length; i++){
       if(input[i] === example[count]){
           count++
       }
   }
   
   return count === example.length ? 'YES' : "NO"
}