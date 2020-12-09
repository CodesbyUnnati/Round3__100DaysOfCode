#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the elements for array: ";
    cin >> n;
    int A[10];
    int sum = 0;
    if (n == 0 && n == 1)
    {
        cout << "Enter bigger size.";
    }
    cout << "\nEnter sorted array: ";
    for (int i = 0; i < n - 1; i++)
    {
        cin >> A[i];
    }
    //SUM THE ACTUAL ELEMENTS - SUM THE TOTAL ELEMENTS EXCLUDING MISSING
    for (int i = 0; i < n - 1; i++)
    {
        sum = sum + A[i];
    }
    int total = n * (n + 1) / 2;
    cout << "\nThe missing Element found in this sorted array is: " << total - sum;

    return 0;
}
