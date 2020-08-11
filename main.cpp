#include <iostream>
#include <fstream>
using namespace std;

#define tamanio(array) (sizeof(arrray)/sizeof(array[0]));

int main()
{

  ofstream archivoPrueba;
  archivoPrueba.open ( "Binario.txt", ios::out);
  int b,i,j,k;
  int n;
  int array[n];

  cout << "Ingrese el tamaño del arreglo: ";
  cin >> n;

   archivoPrueba << "Arreglo: " ;
    for(i=0; i<n; i++)
    {
        cout << "Ingrese el elemento Nº" << i  << " del arreglo: ";
        cin >> array[i];
        archivoPrueba << array[i];
    }  
    archivoPrueba << endl;

    cout << "Ingrese el elemento a buscar en el arreglo: ";
    cin >> b;

    archivoPrueba << "Elemento a buscar: " << b;
    archivoPrueba << endl;
    i=0;

    j = array[i] -1;
 
    do{

        k=(i+j)/2;

        if (array[k]<=b)
        {
            i=k+1;
        }


        if(array[k]>=b)
        {
            j=k-1;
        }
    }
    while( i <=j );

    cout<<"El elemento encontrado es: "<< b << " y se encuentra en la posicion: "<< array[k];

    archivoPrueba << "El elemento encontrado es: "<< b << " y se encuentra en la posicion: "<< array[k];

    return 0;

}