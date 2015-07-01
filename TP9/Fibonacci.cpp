//*
*Dinardi, Emiliano
*Gallici, German
*Orlando, Antonella
*Liserre, Ariel

#include <iostream>
#include <cstdlib>
#include <array>

using namespace std;

long long fib (int)
{
	int i, n, cont = 1;
 
    long long int a[100];
 
    a[0] = 1;
    a[1] = 1;
 
    cout << "Cuantos terminos desea? :  ";
 
    cin >> n;
 
    cout << "\n";
 
    for(i=1; i < n; i++)
	{
         a[i+1] = a[i-1] + a[i];
     }
 
 
    for(i=0; i < n; i++){
 
        if (cont == 10)
		{ 
             cout << "\n";
 
            cont = 0;           
         }
 
        cout << a[i] << " ";
 
        cont += 1;  
     }
       
    cout << "\n";
}

unsigned fibonacci (int n)
{
	static array <unsigned, 21> f={0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765}
if(n<22) return f.at(m);
return fib(n-1) + fib(n-2);
}

int main ()
{
	cout << "fib";
	
	cout << "fibonacci";
}
