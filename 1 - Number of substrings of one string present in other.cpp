
// Time Complexity: O(n*n), as nested loops are used where n is the size of string s1
// Auxiliary Space: O(n), as extra space for string s3 is being used

#include <iostream>
#include <string>
using namespace std;

int countOccurance(string s1, string s2)
{
    int count = 0;

    for (int i = 0; i < s1.length(); i++)
    {
        string temp;

        for (int j = i; j < s1.length(); j++)
        {
            temp = temp + s1[j];

            // if pos == string::npos ke barabr means , means koi common wala mila hi nhi hai
            // if pos != string::npos mean common milna start hogya , so hume erase krna pdega

            if (s2.find(temp) != string::npos)
            {
                count++;
            }
        }
    }

    return count;
}
int main()
{
    string s1, s2;
    cout << "Enter first and Second String : " << endl;
    cin >> s1 >> s2;

    cout << "First String is : " << s1 << " "
         << "Second is : " << s2 << endl;

    int ans = countOccurance(s1, s2);

    cout << "The total count is : " << ans << endl;

    return 0;
}
