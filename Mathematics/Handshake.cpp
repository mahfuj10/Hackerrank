/*
 * Complete the 'handshake' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int handshake(int n)
{
    int r = 0;
    r = (n * (n + 1) / 2) - n;
    return r;
}
