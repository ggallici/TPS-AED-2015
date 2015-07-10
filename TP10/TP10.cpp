#include <iostream>
#include <array>

using namespace std;

int main()
{
    cout << "Ingrese numeros y para finalizar Ctrl + Z y Enter" << endl;

    array <int,10> contador = {0,0,0,0,0,0,0,0,0,0};
    char c;

    while (cin >> c)
    {
        contador.at(c-'0') = contador.at(c-'0') + 1;
    }

    for(int i = 0; i < 10; i++)
    {
        cout << "cantidad de " << i << " es " << contador.at(i) << endl;
    }
}
