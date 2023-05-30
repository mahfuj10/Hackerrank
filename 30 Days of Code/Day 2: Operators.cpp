#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. DOUBLE meal_cost
 *  2. INTEGER tip_percent
 *  3. INTEGER tax_percent
 */

void solve(double meal_cost, int tip_percent, int tax_percent)
{
    double tip = (meal_cost / 100) * tip_percent;
    double tax = (meal_cost / 100) * tax_percent;
    double tip_tax = tip + tax;
    int totalCost = meal_cost + tip_tax;

    cout << round(totalCost);
}
