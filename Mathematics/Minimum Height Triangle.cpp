/*
 * Complete the 'lowestTriangle' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER trianglebase
 *  2. INTEGER area
 */

int lowestTriangle(int base, int area)
{
    return ceil(float(2 * area) / base);
}
