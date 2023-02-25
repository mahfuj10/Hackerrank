function minimumNumber(n, password) {
    const STRING_LENGTH = 6;
    const missing_chars = STRING_LENGTH - n;
    let count = 0;
    
    const passwordArray = Array.from(password);
    
    const hasNumber = passwordArray.some(char => '0123456789'.includes(char))
    const hasLowerCase = passwordArray.some(char => "abcdefghijklmnopqrstuvwxyz".includes(char))
    const hasUpperCase = passwordArray.some(char => "ABCDEFGHIJKLMNOPQRSTUVWXYZ".includes(char) )
    const hasSpecialCharecters = passwordArray.some(char => "!@#$%^&*()-+".includes(char))
    
    if(!hasNumber) count++
    if(!hasLowerCase) count++
    if(!hasUpperCase) count++
    if(!hasSpecialCharecters) count++
    
    return Math.max(count, missing_chars)
}