#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    char zdanie [3][100];
    cout << "Podaj pierwsze zdanie: "; cin.getline(zdanie [0], 100);
    cout << "Podaj drugie zdanie: "; cin.getline(zdanie[1], 100);
    cout << "Podaj trzecie zdanie: "; cin.getline(zdanie[2], 100);
    for (int i=2; i>=0; i--)
    {


    int k=0;
    while (zdanie [i][k])
    {
    if (zdanie [i][k]>=97 && zdanie [i][k]<=122)
    cout << char(zdanie[i][k]-32);
    else
    cout<< (char)zdanie[i][k];
    ++k;

    }
    cout<<endl;
    }
    return 0;
}
