/* Crea un vector de 10 elementos lo llena, y muestra todos los enteros comprendidos entre 1 y cada numero del vector.
 * Visual Studio Code 1.42.2 con Wsl Version 2 distro Debian (g++).
 * @Author: Santiago Sepúlveda
 * @Date:   2020-10-02 07:56:42
 * @Last Modified by:   Santiago Sepúlveda
 * @Last Modified time: 2020-10-02 16:59:37
 */
void leer(int n, int[]); //Llena el vector.
void mostrar(int n, int[]); // Muestra los datos ingresados.
void comprendidos(int n, int[]); // Muestra todos los numeros comprendidos entre 1 y los elementos del vector.
#include <iostream>
using namespace std;
int main()
{
    int n = 10, x;
    int vec[n];
    leer(n, vec);
    mostrar(n,vec);
    comprendidos(n,vec);
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
        cout <<"Dato:  " << i+1 << ") " << a[i] <<endl;
    }
}
void comprendidos(int n, int a[])
{
    for (int i=0; i<n; i++)// Muestra todos los numeros comprendidos entre 1 y los elementos del vector.
    {
        cout << "\nDato: " << i+1 << ") = " << a[i] << endl;
        for (int i1=1; i1<= a[i];i1++)
        {
            cout << i1 << " ";
        }
        cout << endl;
    }
}