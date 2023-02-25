function extraLongFactorials(n)
{
    // Write your code here
    let calc = BigInt(1);
    for (let i = 1; i <= n; i++)
    {
        calc *= BigInt(i)
    }
    console.log(calc.toString())
}