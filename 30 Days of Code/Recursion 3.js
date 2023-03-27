function factorial(n) {
    // Write your code here
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return n * factorial(n-1);

}
