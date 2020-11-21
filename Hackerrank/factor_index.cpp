#include <iostream>
using namespace std;
int main()
{
    int number;
    int p, i;
    int arr[20];
    cin >> number;
    cin >> p;
    if (p > number)
    {
        cout << 0;
    }
    int count = 0;
    int flag = 0;
    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
        if (count == p)
        {
            cout << i;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << 0;
    }
    return 0;
}
