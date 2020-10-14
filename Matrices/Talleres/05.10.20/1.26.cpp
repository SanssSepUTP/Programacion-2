/* Crea dos matrices de 4x5, y verifica que contengan igual numero de pares.
 * Visual Studio Code 1.49.3 junto con WSL version 2 distro debian
 * @Author: Santiago Sepúlveda
 * @Date:   2020-10-05 07:39:23
 * @Last Modified by:   Santiago Sepúlveda
 * @Last Modified time: 2020-10-07 23:25:53
 */
#include <iostream>
using namespace std;
//llena la matriz.
void llenar(int f, int c, int a[][100]);
//Muestra la matriz.
void mostrar(int f, int c, int a[][100]);
//Verifica si un numero x es par.
bool par(int x);
//Cuenta los numeros pares de una matriz
void conteo(int f,int c, int [][100], int [][100]);
int main()
{
    int f= 5,c= 5;
    int a[100][100];
    int b[100][100];
    cout << "Agregue los valores de la primera matriz\n";
    llenar(f,c,a);
    cout << "Agregue los valores de la segunda matriz\n";
    llenar(f,c,b);
    cout << "\nEstos son los valores de la primera matriz\n";
    mostrar(f,c,a);
    cout << "\nEstos son los valores de la segunda matriz\n";
    mostrar(f,c,b);
    conteo(f,c,a,b);
    return 0;
}
void llenar(int f, int c, int a[][100])
{
    for (int i1=0;i1<f;i1++)
    {
        for(int i2=0;i2<c;i2++)
        {
            cout << "Agregue el numero entero: ";
            cin >> a[i1][i2];
        }
    }
}
void mostrar(int f, int c, int a[][100])
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
bool par(int x)
{
    bool estado = false;
    if (x % 2 == 0)
    {
        estado = true;
    }
    return estado;
}
void conteo(int f, int c, int a[][100], int b[][100])
{
    int pares1=0, pares2=0;
    for(int i1=0; i1<f; ++i1)
    {
        for(int i2=0; i2<c; ++i2)
        {
            if (par (a[i1][i2]))
            {
                pares1++;
            }
        }
    }
    for(int i1=0; i1<f; ++i1)
    {
        for(int i2=0; i2<c; ++i2)
        {
            if (par (b[i1][i2]))
            {
                pares2++;
            }
        }
    }

    cout << "\nla primera matriz tiene " << pares1 << " elementos pares.\n";
    cout << "\nla segunda matriz tiene " << pares2 << " elementos pares.\n";
    
    if (pares1 == pares2)
    {
        cout << "\nLas matrices contienen igual cantidad de pares. ";
    }
    else
    {
        cout << "\nLas matrices contienen diferente cantidad de pares.";

    }
}

