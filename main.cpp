#include <iostream>
#include <cstdlib>

using namespace std;
const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int string_length = sizeof(alphanum) - 1;
int main()
{
    int n;
    cout << "Enter the length of password:";
    cin >> n;
    cout << "Generated password: ";
    for (int i = 0; i < n; i++)
        cout << alphanum[rand() % string_length];
    return 0;
}