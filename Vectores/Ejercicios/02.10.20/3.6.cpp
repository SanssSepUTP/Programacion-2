/* Crea un vector de 10 elementos lo llena, pide un numero y verifica cuantos divisores exactos contiene el vector.
 * Visual Studio Code 1.42.2 con Wsl Version 2 distro Debian (g++).
 * @Author: Santiago Sepúlveda
 * @Date:   2020-10-02 07:56:42
 * @Last Modified by:   Santiago Sepúlveda
 * @Last Modified time: 2020-10-02 16:59:23
 */
void leer(int n, int[]); //Llena el vector.
void mostrar(int n, int[]); // Muestra los datos ingresados.
void verificar(int n, int[]); // Pide un numero y cuenta el numero de divisores exactos que contiene el vector. 
#include <iostream>
using namespace std;
int main()
{
    int n = 10, x;
    int vec[n];
    leer(n, vec);
    mostrar(n,vec);
    verificar(n,vec);
    return 0;
}
void leer(int n, int a[])
{
    for (int i=0;i<n;i++) //Llena el vector.
    {
        cout << "Agregue el valor: " << endl << i+1 << ") ";
        cin >> a[i];
    }
}
void mostrar(int n, int a[])
{
    cout << "\nEstos son los datos ingresados:\n";
    for (int i=0; i<n; i++)// Muestra los datos ingresados.
    {
        cout <<"Dato " << i+1 << ") " << a[i] <<endl;
    }
}
void verificar(int n, int a[])// Pide un numero y verifica si el modulo de su division respecto a los otros elementos del vector sea 0.
{
    int x, cont = 0;
    cout<< "Agregar el numero para verificar: ";
    cin >> x;
    for (int i=0; i<n; i++)
    {
        if ((x % a[i]) == 0)
        {
            cont++;
        }
    }
    cout << "El numero " << x << " tiene " << cont << " divisores exactos dentro del vector.";
}