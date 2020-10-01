/*Crea una matriz de 4 filas y 5 columnas. Realizar su carga e impresión.
Intercambiar los elementos de la primera fila con la segunda y volver a imprimir la
matriz.
Visual Studio Code 1.42.2 con Wsl Version 2 distro Debian.
Santiago Sepúlveda.
1/10/20*/
#include <iostream>
#include <thread>         
#include <chrono>
using namespace std;
void llenar(int f, int c, int a[][100]);//llena la matriz
void mostrar(int f, int c, int a[][100]);//Muestra la matriz
void intercambiar(int c, int a[][100]); // Intercambia filas 1 y 2.
void pro();// Simula carga de procesamiento.
int main()
{
    int f= 4,c= 5;
    int a[100][100];
    llenar(f,c,a);
    cout<<"\nLa matriz es:"<<endl;
    mostrar(f,c,a);
    intercambiar(c,a);
    pro();
    cout<<"\nLa matriz procesada es:"<<endl;
    mostrar(f,c,a);
    return 0;
}
void llenar(int f, int c, int a[][100])//llena la matriz
{
    for (int i1=0;i1<f;i1++)
    {
        for(int i2=0;i2<c;i2++)
        {
            cout << "Agregue el componente: ";
            cin >> a[i1][i2];
        }
    }
}
void mostrar(int f, int c, int a[][100])//Muestra la matriz 
{
    for(int i1=0; i1<f; ++i1)
    {
        for(int i2=0; i2<c; ++i2)
        {
            cout<<a[i1][i2]<<" ";
        }
        cout<<endl;
    }
}
void intercambiar(int c, int a[][100])
{
    int aux= 0,i1= 0;

        for(int i2=0; i2<c; ++i2)
        {
            aux = a[i1][i2];
            a[i1][i2] = a[i1+1][i2];
            a[i1+1][i2] = aux;
        }
        cout<<endl;
        i1++;
}
void pro()
{
  cout << "Procesando\n";
  for (int i=3; i>0; --i) {
    cout << "    ." << endl;
    this_thread::sleep_for (chrono::milliseconds(700));
  }
}
