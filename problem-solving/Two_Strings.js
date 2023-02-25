
function twoStrings(s1, s2) {
    const map = new Map()
    
    for(let i = 0; i < s1.length; i++){
        map.set(s1[i],1)
    }
    for(let i =0; i < s2.length; i++){
        if(map.get(s2[i])){
            return 'YES'
        }
    }
    return "NO"

}