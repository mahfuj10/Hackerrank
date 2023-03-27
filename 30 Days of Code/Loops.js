function main() {
    const n = parseInt(readLine().trim(), 10);
    for(let i = 1; i <= 10; i++){
        const multipy = n * i;
        console.log(n + ' x ' + i + ' =', multipy);
    }
}