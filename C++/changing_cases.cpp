#include <iostream>
#include <string>
using namespace std;
int main()
{
    string A;
    cout << "Enter the string: ";
    cin >> A;
    int i;
    int ln = A.length();

    for (i = 0; i < ln; i++)
    {
        if (A[i] >= 'A' && A[i] <= 'Z')
        {
            A[i] += 32;
        }
        else if (A[i] >= 'a' && A[i] <= 'z')
        {
            A[i] -= 32;
        }
    }
    cout << "String is: " << A;
    return 0;
}
