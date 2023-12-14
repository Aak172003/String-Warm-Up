

// Gfg - https://www.geeksforgeeks.org/check-if-the-given-string-is-k-periodic/

#include <iostream>
#include <string>

using namespace std;

bool checkIsEqualOrNot(string temp, string newtemp)
{
    int i = 0, k = temp.length();
    while (i <= k)
    {
        if (temp[i] != newtemp[i])
            return false;
        i++;
    }

    return true;
}

int main()
{

    string str = "ababab";
    int k = 2;

    string temp;

    for (int i = 0; i < k; i++)
    {
        temp += str[i];
    }
    // cout << "temp is : " << temp << endl;

    bool flag = true;

    for (int i = k; i < str.length(); i++)
    {
        string newtemp = newtemp + str[i];

        if (newtemp.length() == k)
        {
            bool check = checkIsEqualOrNot(temp, newtemp);

            if (check)
                newtemp = "";
            else
            {
                flag = false;
                break;
            }
        }
    }

    if (!flag)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;

    return 0;
}