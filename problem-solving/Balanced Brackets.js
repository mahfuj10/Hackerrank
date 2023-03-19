function isBalanced(s) {
    // Write your code here
    const bracket ={
        '{' : '}',
        '[' : ']',
        '(' : ')',
    }
    
    const heap = [];
    
   for(const char of s){
       if(bracket[char]){
           heap.push(bracket[char]);
       }else {
           if(heap.pop() !== char) return 'NO'
       }
   }
   
   return !heap.length ? 'YES' : 'NO';

}