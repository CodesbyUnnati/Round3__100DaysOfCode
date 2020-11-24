#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter x & y: ";
    cin >> x >> y;
    /*
    x = x + y;
    y = x - y;
    x = x - y;
    cout<<"After Swapping: ";
    cout << x<<" ";
    cout << y;
    
   */

    /*------USING MULTIPLICATION------
    x = x * y;
    y = x / y;
    x = x / y;
    cout << "After Swapping: ";
    cout << x << " " << y;

    */

    /*-----BITWISE OPERATOR-----
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    cout << "After Swapping: ";
    cout << x << " " << y;
    */

    //ONE LINER SWAP

    y = (x + y) - (x = y);
    cout << x << y;

    return 0;
}
