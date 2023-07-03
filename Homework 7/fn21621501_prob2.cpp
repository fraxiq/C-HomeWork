#include <iostream>

using namespace std;


int main()
{
    char str[59];
    int i, n, count = 0;

    cout << "Enter a string of words: ";
    fgets(str, 59, stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }


    }
    cout << "Number of words: " << count + 1;
    return 0;
}