/* Crea dos matrices 4x6, y determina si los promedios de las esquinas son iguales.
 * Visual Studio Code 1.49.3 junto con WSL version 2 distro debian
 * @Author: Santiago Sepúlveda
 * @Date:   2020-10-05 07:39:23
 * @Last Modified by:   Santiago Sepúlveda
 * @Last Modified time: 2020-10-07 23:27:37
 */
#include <iostream>
using namespace std;
//llena la matriz.
void llenar(int f, int c, int a[][100]);
//Muestra la matriz.
void mostrar(int f, int c, int a[][100]);
//Retorna el promedio de las esquinas de una matriz.
float prom_esqui(int f, int c, int a[][100]);
//Verifica que dos elementos sean iguales
void iguales(float x, float y);
int main()
{
    int f = 4, c = 6;
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
    cout << "\n Primer promedio: "<< prom_esqui(f,c,a);
    cout << "\n Segundo promedio: " << prom_esqui(f,c,b);
    iguales(prom_esqui(f,c,a), prom_esqui(f,c,b));
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
float prom_esqui(int f, int c, int a[][100])
{
    
    int suma = a[0][0] + a[0][c-1] + a[f-1][0]+ a[f-1][c-1];
    float prom = suma/4;
    return prom;
}
void iguales(int x, int y)
{
    if (x == y)
    {
        cout << "Los promedios son iguales";
    }
    else
    {
        cout << "Los promedios no son iguales";
    }
}