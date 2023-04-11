#include <iostream>
#include <conio.h>
using namespace std;

void encrypt(char n[25])
{
    int a;
    cout << "Enter your confusion Key: " << endl;
    cin >> a;
    for (char b = 0; ((b < 25) && (n[b] != '\0')); b++)
    {
        n[b] += a;
    }
    cout << "Your data is encripted: " << n;
}
void decrypt(char n[25])
{
    int a;
    cout << "Enter your defusion Key: " << endl;
    cin >> a;
    for (char b = 0; ((b < 25) && (n[b] != '\0')); b++)
    {
        n[b] -= a;
    }
    cout << "Your data is encripted: " << n;
}

int main()
{
    int d;
    char z[25], m;
    while (m != 'n')
    {
        cout << "Enter your input: " << endl;
        cin >> z;
        cout << "Press: " << endl
             << "\t 1 -> for Encrypt " << endl
             << "\t 2 -> for Decrypt " << endl;
        cin >> d;
        switch (d)
        {
        case 1:
            encrypt(z);
            break;
        case 2:
            decrypt(z);
            break;
        default:
            cout << "Invalid data";
            break;
        }
        cout << endl
             << "Do you want to do more  (y/n):  ";
        cin >> m;
    }
    return 0;
}