function stringConstruction(s) {
    // Write your code here
    const string_arr = []
    for(let i =0; i < s.length; i++){
        if(!string_arr.includes(s[i])){
            string_arr.push(s[i])
        }
    }
    return string_arr.length
}
