#include <iostream>
using namespace std;
int main()
{
    int A[20];
    int n, i;
    int last_duplicate = 0;
    cout << "Enter array numbers: ";
    cin >> n;
    cout << "Enter Array: ";
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (i = 0; i < n; i++)
    {
        if ((A[i] == A[i + 1]) && A[i] != last_duplicate)
        {
            cout << "The number is : " << A[i] << "\n";
            last_duplicate = A[i];
        }
    }

    return 0;
}
