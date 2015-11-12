#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int opcion;
    int vector[] = {3, 5, 4, 3, 1, 8, 2, 9, 6, 0};
    int i;
    int j;
    int temp;
    int aux;
    int aux2;
    void quickSort(int arr[], int left, int right);

    cout << "Tipos de ordenamiento" << endl << "1. Burbujeo" << endl << "2. Seleccion" << endl<< "3. Insercion" << endl << "4. Quicksort" << endl << endl << "Ingrese Opcion: ";
    cin >> opcion;


    switch (opcion){

        case 1:
            for (i=1; i<10; i++){
                for (j=0; j<10-1; j++){
                    if (vector[j]>vector[j+1]) {
                        temp=vector[j+1];
                        vector[j+1]=vector[j];
                        vector[j]=temp;

                    }
                }
            }
            break;


        case 2:
            for (i=0; i<9; i++){

                     aux=9;

                for (j=i; j<10; j++){

                    if (vector[j]< aux){
                        aux=vector[j];
                        aux2=j;


                    }
                }

                temp=vector[i];
                vector[i]=vector[aux2];
                vector[aux2]=temp;



            }
            break;



        case 3:
            for (i=1; i<10; i++){
               temp=vector[i];
               j=i-1;

                    while ((vector[j]>temp)&&(j>=0)){
                        vector[j+1]=vector[j];
                        j--;
                        vector[j+1]=temp;
                    }
            }
            break;

        case 4:
            quickSort(vector,0,9);
            break;
    }

    for (int out=0; out<10; out++){
        cout << vector[out] << " ";
    }


    return 0;
}

void quickSort(int arr[], int left, int right) {

      int i = left, j = right;

      int tmp;

      int pivot = arr[(left + right) / 2];



      /* partition */

      while (i <= j) {

            while (arr[i] < pivot)

                  i++;

            while (arr[j] > pivot)

                  j--;

            if (i <= j) {

                  tmp = arr[i];

                  arr[i] = arr[j];

                  arr[j] = tmp;

                  i++;

                  j--;

            }

      };



      /* recursion */

      if (left < j)

            quickSort(arr, left, j);

      if (i < right)

            quickSort(arr, i, right);

}

