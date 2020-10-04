/* Crea un vector de 10 elementos lo llena, y muestra los cuadrados de cada numero.
 * Visual Studio Code 1.42.2 con Wsl Version 2 distro Debian (g++).
 * @Author: Santiago Sepúlveda
 * @Date:   2020-10-02 07:56:42
 * @Last Modified by:   Santiago Sepúlveda
 * @Last Modified time: 2020-10-02 16:53:16
 */
void leer(int n, int[]); //Llena el vector.
void mostrar(int n, int[]); // Muestra los datos ingresados.
void cuadrados(int n, int[]); // Muestra los cuadrados de cada elemento.
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int vec[n];
    leer(n, vec);
    mostrar(n,vec);
    cuadrados(n,vec);
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
void cuadrados(int n, int a[])// Muestra los cuadrados de cada elemento.
{
    for (int i=0; i<n; i++)
    {
        cout << "\nDato: " << i+1 << ") = " << a[i] << endl << "Cuadrado= " <<a[i] * a[i]  << endl;
    }
}