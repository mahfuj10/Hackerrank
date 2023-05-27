// Write your code here
class Calculator
{
public:
    int power(int x, int y)
    {
        if (x < 0 || y < 0)
        {
            throw invalid_argument("n and p should be non-negative");
        }

        return pow(x, y);
    }
};
