/* Crea una Matriz 5x5, calcula el promedio de la diagonal y la muestra en pantalla.
 * Visual Studio Code 1.49.3 junto con WSL Version 2 distro debian 
 * @Author: Santiago Sepúlveda
 * @Date:   2020-10-05 07:39:23
 * @Last Modified by:   Santiago Sepúlveda
 * @Last Modified time: 2020-10-07 23:21:52
 */
#include <iostream>
using namespace std;
//llena la matriz.
void llenar(int f, int c, int a[][100]);
//Muestra la matriz.
void mostrar(int f, int c, int a[][100]);
float promedio_dia(int x, int a[][100]);
void conteo(int f, int c, float p, int a[][100]);
int main()
{
    int f = 5, c = 5;
    int a[100][100];
    int b[100][100];
    cout << "Agregue los valores de la matriz\n";
    llenar(f, c, a);
    cout << "\nEstos son los valores de la matriz\n";
    mostrar(f, c, a);
    cout << "Este es el promedio de la diagonal de la matriz: " << promedio_dia(f,a);
    cout << "\nEl promedio se ubica en las posiciones: \n";
    conteo(f,c,promedio_dia(f,a),a);
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
float promedio_dia(int x,int a[][100])
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
void conteo(int f, int c, float p, int a[][100])
{
    for (int i1 = 0; i1 < f; ++i1)
    {
        for (int i2 = 0; i2 < c; ++i2)
        {
            if (p == a[i1][i2])
            {
                cout << i1 << "," << i2 << endl;
            }
        }
    }
}