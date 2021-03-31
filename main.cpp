// Программа, в которой создается массив и заполняется квадратами натуральных чисел ( 1^2, 2^2, 3^2 и т.д.)
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  int RazmerMassiva ;
cout << " Vvedite colichestvo chisel: " ;
cin >> RazmerMassiva;
int Sashylechka [RazmerMassiva];
for ( int n = 1; n <= RazmerMassiva; n ++)
    {
    Sashylechka [n] = pow (n,2);
    cout << Sashylechka [n] << endl;
    }
}

