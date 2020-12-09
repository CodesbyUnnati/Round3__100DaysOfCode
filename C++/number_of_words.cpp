#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[50];
    int count = 0, i;
    cout << "Enter a string : ";
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i - 1] != ' ')
            count++;
    }
    cout << "Number of words in the string are: " << count + 1;
    return 0;
}
