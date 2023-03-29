/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */

function vowelsAndConsonants(s){
    let str='';
    for(var i=0; i<s.length ; i++)
    {
        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')){
            console.log(s[i]);
        }
        else{
            str=str.concat(s[i]).concat('\n');
        }
    }
    console.log(str)
}
