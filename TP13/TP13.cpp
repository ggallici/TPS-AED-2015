#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int matriz [2][3],i,j,n;
    int suma=0,vend=0,reg=0,mven=0,mreg=0;


    for (i=0; i<=1; i++){
        for (j=0; j<=2; j++){
            cout<<"Digite Posicion"<<" "<<i<<"."<<j<<": ";
            cin>>n;
            matriz [i][j]=n;
        }
    }

    system ("cls");


    for (i=0; i<=1; i++){
        for (j=0; j<=2; j++){
            cout<<matriz [i][j]<<" ";

        }
        cout<<"\n";
    }

     for (i=0; i<=1; i++){
        for (j=0; j<=2; j++){
            suma=suma+matriz [i][j];
            vend=vend+matriz [i][j];

        }
    if (mven<vend){
        mven=vend;
    }
    cout<<"\n"<<"Vendedor "<<i+1<<": $"<<vend;
    vend=0;
        }


cout<<"\n"<<"Ventas Totales: $"<<suma;
cout<<"\n"<<"Mayor Venta Vendedor: $"<<mven;


     for (j=0; j<=2; j++){
        for (i=0; i<=1; i++){
            reg=reg+matriz [i][j];

        }
    if (mreg<reg){
        mreg=reg;
    }
    cout<<"\n"<<"Region "<<j+1<<": $"<<reg;
    reg=0;
        }


cout<<"\n"<<"Mayor Venta Region: $"<<mreg;
    return 0;
}

