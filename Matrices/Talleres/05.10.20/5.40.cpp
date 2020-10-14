/* Crea dos matrices 5x5, y define si los promedios de sus diagonales son iguales.
 * Visual Studio Code 1.49.3 junto con WSL version 2 distro debian
 * @Author: Santiago Sepúlveda
 * @Date:   2020-10-05 07:39:23
 * @Last Modified by:   Santiago Sepúlveda
 * @Last Modified time: 2020-10-07 23:28:47
 */
#include <iostream>
using namespace std;
//llena la matriz.
void llenar(int f, int c, int a[][100]);
//Muestra la matriz.
void mostrar(int f, int c, int a[][100]);
float promedio(int x,int a[][100]);
void iguales(float x, float y);
int main()
{
    int f = 5, c = 5;
    int a[100][100];
    int b[100][100];
    cout << "Agregue los valores de la primera matriz\n";
    llenar(f, c, a);
    cout << "Agregue los valores de la segunda matriz\n";
    llenar(f, c, b);
    cout << "\nEstos son los valores de la primera matriz\n";
    mostrar(f, c, a);
    cout << "\nEstos son los valores de la segunda matriz\n";
    mostrar(f, c, b);
    cout << "\n El promedio de los datos de la diagonal de la primera matriz es: " << promedio(f, a);
    cout << "\n El promedio de los datos de la diagonal de la segunda matriz es: " << promedio(f, b);
    iguales(promedio(f,a),promedio(f,b));
    return 0;
}
void llenar(int f, int c, int a[][100])
{
    for (int i1 = 0; i1 < f; i1++)
    {
        for (int i2 = 0; i2 < c; i2++)
        {
            cout << "Agregue el numero entero: ";
            cin >> a[i1][i2];
        }
    }
}
void mostrar(int f, int c, int a[][100])
{
    for (int i1 = 0; i1 < f; ++i1)
    {
        for (int i2 = 0; i2 < c; ++i2)
        {
            cout << a[i1][i2] << " ";
        }
        cout << endl;
    }
}
float promedio(int x,int a[][100])
{
    int sum= 0;
    float prom;
    for (int i=0;i<x;i++)
    {
        sum += a[i][i];
    }
    prom = sum/x;
    return prom;
}
void iguales(float x, float y)
{
    if (x == y)
    {
        cout << "\nLos promedios son iguales";
    }
    else
    {
        cout<< "\nLos promedios son distintos";
    }
}