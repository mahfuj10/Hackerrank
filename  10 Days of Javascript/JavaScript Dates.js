

// The days of the week are: "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
function getDayName(dateString) {
    
    let dayName;
    const Xmas95 = new Date(dateString);
    const weekday = Xmas95.getDay();
    const options = {weekday:'long'};
  
    dayName = new Intl.DateTimeFormat('en-US',options).format(Xmas95);
    // Write your code here
    
    
    return dayName;
}

