/*Crea una matriz de 3x4. Realizar la carga y luego imprimir el elemento mayor.
Visual Studio Code 1.42.2 con Wsl Version 2 distro Debian.
Santiago Sepúlveda.
1/10/20*/
#include <iostream>
using namespace std;
void llenar(int f, int c, int a[][100]);//Llena la matriz
void mostrar(int f, int c, int a[][100]);//Muestra los elementos de la matriz
int mayor(int f, int c, int a[][100]);//Retorna el mayor de los elementos de la matriz
int main()
{
    int f= 3 ,c= 4;
    int a[100][100];
    llenar(f,c,a);
    mostrar(f,c,a);
    cout << "El numero mayor es: " <<  mayor(f,c,a);
    return 0;
}

void llenar(int f, int c, int a[][100])//Llena la matriz
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
void mostrar(int f, int c, int a[][100])//Muestra los elementos de la matriz
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

int mayor(int f, int c, int a[][100])//Retorna el mayor de los elementos de la matriz
{
    int may= 0;
    for(int i1=0; i1<f; ++i1)
    {
        for(int i2=0; i2<c;++i2)
        {
            if (a[i1][i2] > may)
            {
                may = a[i1][i2];
            }
            
        }
    }
    return may;
}