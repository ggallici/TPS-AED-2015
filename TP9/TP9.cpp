/*
*Dinardi, Emiliano
*Gallici, German
*Orlando, Antonella
*Liserre, Ariel
*Sfara, Lucas
*/

#include <iostream>
#include <array>

using namespace std;

int fib (array <int, 46> a, int n)
{
    if (n < 2)
    {
        return a.at(n) = n;
    }

    return a.at(n) = a.at(n-1) + a.at(n-2);
}

int fibonachi (int n)
{
    if(n < 2)
    {
        return n;
    }

    return fibonachi(n-1) + fibonachi(n-2);
}

int main ()
{
    cout << "FIB CON ARRAY:" <<endl;

    array <int, 46> vectorFibonacci;

    for (int i = 0; i < 46; i++)
    {
        vectorFibonacci.at(i) = fib(vectorFibonacci, i);

        cout << "El fibonachi de " << i << " es: "  << vectorFibonacci.at(i) << endl;
    }

    cout << endl;
    cout << endl;

    cout << "FIB CON RECURRENCIA:" <<endl;

    for(int i = 0; i < 46; i++)
    {
        cout << "El fibonachi de " << i << " es: " << fibonachi(i) << endl;
    }
}
