#include <iostream>

bool esTriangulo(int,int,int);

int determinarTipo(int,int,int);

using namespace std;

int main()
{
    int a,b,c;

    cout << "Ingrese las dimensiones" << endl;

    cin >> a >> b >> c;

    enum triangulos { equilatero = 1, isosceles, escaleno };

    if(esTriangulo(a,b,c))
    {
        cout << "Es triangulo ";

        if(determinarTipo(a,b,c) == equilatero)
        {
            cout << "equilatero" << endl;
        }
        if(determinarTipo(a,b,c) == isosceles)
        {
            cout << "isosceles" << endl;
        }
        if(determinarTipo(a,b,c) == escaleno)
        {
            cout << "escaleno" << endl;
        }
    }
    else
    {
         cout << "No es triangulo" << endl;
    }
}

bool esTriangulo(int a, int b, int c)
{
    return(((a+b) > c) && ((a+c) > b) && ((b+c) > a));
}

int determinarTipo(int a, int b, int c)
{
    if((a == b) && (b == c))
    {
        return 1;
    }
    else
    {
        if((a == b) || (a == c) || (b == c))
        {
            return 2;
        }
        return 3;
    }
}
