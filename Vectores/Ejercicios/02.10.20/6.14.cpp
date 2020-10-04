/* Crea un vector de 10 elementos lo llena, y muestra si la suma del mayor y el menor es par.
 * Visual Studio Code 1.42.2 con Wsl Version 2 distro Debian (g++).
 * @Author: Santiago Sepúlveda
 * @Date:   2020-10-02 07:56:42
 * @Last Modified by:   Santiago Sepúlveda
 * @Last Modified time: 2020-10-02 17:01:48
 */
#include <iostream>
using namespace std;
void leer(int n, int[]); //Llena el vector.
void mostrar(int n, int[]); // Muestra los datos ingresados.
bool par(int n);//Define si el numero es par
int mayor(int n,int[]);// calcula el mayor
int menor(int n, int[]);// calcula el menor
int main()
{
    int n = 10, may, men;
    int vec[n];
    leer(n, vec);
    mostrar(n,vec);
    may = mayor (n,vec);
    men = menor (n,vec);
    if (par(men + may))
    {
        cout << "\nLa semisuma del mayor y el menor es par.";
    }
    else
    {
        cout << "\nLa semisuma del mayor y el menor es impar.";
    }
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
bool par(int n)//Define si el numero es par
{
    bool estado;

    if (n % 2 == 0)
    {
        estado = true;
    }
    else 
    {
        estado = false;
    }
    return estado;
}
int mayor(int n,int a[])// calcula el mayor
{
    int may;
    for (int i=0; i<n; i++)
    {
        if ( a[i] > may)
        {
            may = a[i];
        }
    }
    return may;
}
int menor(int n,int a[])// calcula el menor
{
    int men;
    for (int i=0; i<n; i++)
    {
        if ( a[i] < men)
        {
            men = a[i];
        }
    }
    return men;
}
