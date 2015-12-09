#include <iostream>
#include<stdlib.h>
#include <array>

using namespace std;

int main()
{
    array<array<int, 3>,2> matriz;
    int suma = 0, vend = 0, reg = 0, mven = 0, mreg = 0;

    for (unsigned i = 0; i < matriz.size(); i++)
    {
        for (unsigned j = 0; j < matriz.at(i).size(); j++)
        {
            int n;
            cout << "Digite Posicion " << i << "." << j << ": ";
            cin >> n;
            matriz.at(i).at(j) = n;
        }
    }

    system ("cls");

    for (unsigned i = 0; i < matriz.size(); i++)
    {
        for (unsigned j = 0; j < matriz.at(i).size(); j++)
        {
            cout << matriz.at(i).at(j) << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (unsigned i = 0; i < matriz.size(); i++)
    {
        for (unsigned j = 0; j < matriz.at(i).size(); j++)
        {
            suma = suma + matriz.at(i).at(j);
            vend = vend + matriz.at(i).at(j);
        }
        if (mven < vend)
        {
            mven = vend;
        }

        cout << "Vendedor " << i + 1 << ": $" << vend << endl;
        vend = 0;
    }

    cout << "Mayor Venta Vendedor: $" << mven << endl << endl;

    for (unsigned j = 0; j < matriz.at(0).size(); j++)
    {
        for (unsigned i = 0; i < matriz.size(); i++)
        {
            reg = reg + matriz.at(i).at(j);
        }
        if (mreg < reg)
        {
            mreg = reg;
        }
        cout << "Region " << j + 1 << ": $" << reg << endl;
        reg = 0;
    }

    cout << "Mayor Venta Region: $" << mreg << endl;

    cout << endl
         <<  "Ventas Totales: $" << suma << endl;
}
