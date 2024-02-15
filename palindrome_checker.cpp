#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

bool PalindromeCheck(const string& str)
{
    int length = str.length();

    for (int i = 0; i < length / 2; ++i)
    {
        if (str[i] != str[length - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string inputfirst;
    cout << "string is: ";
    getline(cin, inputfirst);

    string nospaces;

    for (char C : inputfirst)
    {
        if (C != ' ')
        {
            nospaces += C;
        }
    }

    if (PalindromeCheck(nospaces))
    {
        cout << "is palindrome" << endl;
    }
    else
    {
        cout << "not palindrome" << endl;
    }

    return 0;
}