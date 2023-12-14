#include <iostream>
#include <string>
using namespace std;

bool checkIsPalindrome(string &temp)
{
    int i = 0, j = temp.length() - 1;

    while (i < j)
    {
        if (temp[i] != temp[j])
        {
            return false;
        }

        i++;
        j--;
    }

    return true;
}

int main()
{
    string str = "saasa";

    bool found = false;

    for (int i = 0; i < str.length(); i++)
    {
        string temp;

        for (int j = i; j < str.length(); j++)
        {
            temp = temp + str[j];

            if (temp.length() % 2 == 0)
            {
                bool ans = checkIsPalindrome(temp);

                if (ans)
                {
                    found = true;
                    break;
                }
            }
        }

        if (found)
        {
            cout << "Yes" << endl;
            break;
        }
    }

    if (!found)
    {
        cout << "No" << endl;
    }

    return 0;
}
