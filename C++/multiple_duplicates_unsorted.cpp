#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    int A[10];
    int count;
    cout << "Enter number: ";
    cin >> n;
    cout << "Enter Array: ";
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        count = 1;
        if (A[i] != -1)
        {
            for (j = i + 1; j < n; j++)
            {
                if (A[i] == A[j])
                {
                    count++;
                    A[j] = -1; //AS IT COMPARES I AND I+1 SO DUPLICATES AFTER I+1 ARE NOT COUNTED SO -1 DONE.
                }
            }
            if (count > 1)
            {
                cout << "Duplicate is: " << A[i] << " it comes " << count << " times.\n";
            }
        }
    }
    return 0;
}
