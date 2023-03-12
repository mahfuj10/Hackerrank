function timeConversion(s) {
    // Write your code here
    const hour = s.split(":")[0];

    let formattedHour = parseInt(hour)
    
    const time = s.includes('AM') ?  s.replace('AM','') : s.replace('PM','')
    
     if (s.includes('PM') && formattedHour < 12) formattedHour = formattedHour + 12;
     if (s.includes('AM') && formattedHour === 12) formattedHour = formattedHour - 12;
    
    if (formattedHour < 10) formattedHour = "0" + formattedHour;
    
    return time.replace(hour,formattedHour)
}
