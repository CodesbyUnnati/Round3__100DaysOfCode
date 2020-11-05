//QUESTION
/*
You are given an array of  integers, , and a positive integer, . Find and print the number of  pairs where  and  +  is divisible by .

For example,  and . Our three pairs meeting the criteria are  and .

Function Description

Complete the divisibleSumPairs function in the editor below. It should return the integer count of pairs meeting the criteria.

divisibleSumPairs has the following parameter(s):

n: the integer length of array 
ar: an array of integers
k: the integer to divide the pair sum by
Input Format

The first line contains  space-separated integers,  and .
The second line contains  space-separated integers describing the values of .

Constraints

Output Format

Print the number of  pairs where  and  +  is evenly divisible by .

Sample Input

6 3
1 3 2 6 1 2
Sample Output

 5
*/


//SOLUTION

#include <iostream>
using namespace std;

int main()
{

    int a[20];
    int k;
    int n;
    int count = 0;
    cout << "Enter size of array: ";
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the number divisible: ";
    cin >> k;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((a[i] + a[j]) % k == 0)
            {
                count++;
            }
        }
    }
    cout << "The answer is: " << count;
    return 0;
}
