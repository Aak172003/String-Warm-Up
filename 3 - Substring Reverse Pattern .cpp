
// Gfg String -> https://www.geeksforgeeks.org/substring-reverse-pattern/

//  *******************************************  1st Simple Way  *******************************************
#include <iostream>
#include <string>
using namespace std;

void printReverse(string &name)
{

    int i = 0, j = name.length() - 1;

    while (i <= j)
    {
        swap(name[i], name[j]);
        i++, j--;
    }
}

int main()
{

    string name = "Aakash";
    int n = name.length();
    printReverse(name);

    cout << "Reversed name is : " << name << endl;

    int half = name.length() / 2;

    cout << "half is : " << half << endl;

    int i = 0;

    while (i < half)
    {
        name[i] = name[n - i - 1] = '*';

        cout << "name is : " << name << endl;
        i++;
    }

    return 0;
}

//  *******************************************  2nd Simple Way  *******************************************

#include <iostream>
#include <string>
#include <algorithm> // Include the algorithm header for the reverse function

using namespace std;

void printPattern(string str)
{

    // Step 1: Print the unmodified string
    cout << str << endl;

    // Step 2: Reverse the string and initialize i = 0 and j = n – 1
    int n = str.length();
    string reversedStr = str;

    reverse(reversedStr.begin(), reversedStr.end());
    // Include the algorithm header

    int i = 0, j = n - 1;

    // Step 3: Replace s[i] = '*' and s[j] = '*'
    // and update i = i + 1 and j = j – 1, then print the modified string

    while (j - i > 1)
    {
        reversedStr[i] = reversedStr[j] = '*';
        i++, j--;
        cout << reversedStr << endl;
    }
}

int main()
{
    string str;

    // Example 1
    str = "geeks";
    printPattern(str);

    // Example 2
    str = "Aakash";
    printPattern(str);

    return 0;
}
