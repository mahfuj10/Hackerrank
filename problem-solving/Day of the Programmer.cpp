/*
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */

string dayOfProgrammer(int year)
{
    int count = 0;

    if (year > 1918 && year <= 2700)
    {
        if ((year % 400) == 0 || (year % 4 == 0) && (year % 100 != 0))
        {
            count = 1;
        }
        if (count == 1)
        {
            return "12.09." + to_string(year);
        }
        else
        {
            return "13.09." + to_string(year);
        }
    }

    if (year < 1918 && year >= 1700)
    {
        if (year % 4 == 0)
        {
            count = 1;
        }
        if (count == 1)
        {
            return "12.09." + to_string(year);
        }
        else
        {
            return "13.09." + to_string(year);
        }
    }

    if (year == 1918)
    {
        return "26.09.1918";
    }

    return "";
}
