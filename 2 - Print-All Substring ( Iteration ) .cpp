#include <iostream>
#include <string>
using namespace std;

void printSubsequence(string s)
{

    for (int i = 0; i < s.length(); i++)
    {
        string temp;

        for (int j = i; j < s.length(); j++)
        {
            temp = temp + s[j];
            cout << temp << " ";
        }
        cout << endl;
    }
}

int main()
{
    string s = "12345";

    // cout<<"Enter String : "<<endl ;
    // cin>> s ;

    printSubsequence(s);
    return 0;
}