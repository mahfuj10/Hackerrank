
function camelcase(s) {
    // Write your code here
    const string = s.replace(/([A-Z]+)/g, "$1").replace(/([A-Z][a-z])/g, " $1")
    return string.split(" ").length
}