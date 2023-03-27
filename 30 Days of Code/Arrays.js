function main() {
    const n = parseInt(readLine().trim(), 10);

    const arr = readLine().replace(/\s+$/g, '').split(' ').map(arrTemp => parseInt(arrTemp, 10));

let myArr = '';
for(let i = arr.length - 1; i >= 0 ; i-- ){
    myArr = myArr + arr[i] + " ";
}
console.log(myArr)
}
