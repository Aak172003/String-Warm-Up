

// Gfg -> https://www.geeksforgeeks.org/find-the-count-of-palindromic-sub-string-of-a-string-in-its-sorted-form/

// ******************************    1st Approach    **********************

// Time Complexity: O(N^3), where N is the length of the string s.
//  This is because we are using nested loops to generate all possible substrings
// of even length and then checking if each substring is a palindrome.
//  The isPalindrome function has a time complexity of O(N/2) = O(N) as we are iterating over half of the string.

// Space Complexity: O(1) as we are not using any extra data structure to store the substrings.

#include <iostream>
#include <string>
using namespace std;

bool checkPalindromeOrNot(string &temp)
{
    cout << "temp is : " << temp << endl;
    if (temp.length() == 1)
        return true;

    int i = 0, j = temp.length() - 1;

    while (i < j)
    {
        if (temp[i] != temp[j])
            return false;
        else
            i++, j--;
    }
    return true;
}

int main()
{
    string str = "abcd";
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        string temp;

        for (int j = i; j < str.length(); j++)
        {
            temp = temp + str[j];
            bool ans = checkPalindromeOrNot(temp);

            if (ans)
            {
                // cout << "for temp -> " << temp << endl;
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}

// ******************************    2nd Approach    **********************
// Time complexity: O(N) where N is the length of the given string.
// Auxiliary space: O(1), as constant extra space is used.

bool check(string s)
{
    for (int i = 0; i < s.length() - 1; i++)
        if (s[i] == s[i + 1])
            return true;
    return false;
}
