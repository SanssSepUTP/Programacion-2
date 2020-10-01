/*Crear una matriz de 4 filas y 5 columnas carga por columna y la imprime.
Visual Studio Code 1.42.2 con Wsl Version 2 distro Debian.
Santiago Sepúlveda.
1/10/20*/

#include <iostream>
using namespace std;
void llenar(int f, int c, int a[][100]);//llena la matriz comenzando por las columnas.
void mostrar(int f, int c, int a[][100]);//Muestra la matriz.
int main()
{
    int f= 4,c= 5;
    int a[100][100];
    llenar(f,c,a);
    mostrar(f,c,a);
    return 0;
}
void llenar(int f, int c, int a[][100])
{
    for (int i1=0;i1<c;i1++)
    {
        for(int i2=0;i2<f;i2++)
        {
            cout << "Agregue el componente: ";
            cin >> a[i2][i1];
        }
    }
}
void mostrar(int f, int c, int a[][100])
{
    cout<<"La matriz es:"<<endl;
    for(int i1=0; i1<f; ++i1)
    {
        for(int i2=0; i2<c; ++i2)
        {
            cout<<a[i1][i2]<<" ";
        }
        cout<<endl;
    }
}