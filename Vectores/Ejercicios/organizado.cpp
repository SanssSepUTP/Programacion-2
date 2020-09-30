/* Este programa crea un vector de 10 elementos y verifica si esta ordenado de menor a mayor.
Visual Studio Code 1.42.2 con Wsl Version 2 distro Debian.
Santiago Sepúlveda
30/09/20*/
#include <iostream>
using namespace std;
void leer(int n, int[]); //Llena el vector.
void mostrar(int n, int[]); // Muestra los datos ingresados.
void verificar(int n, int[]); // verifica que el vector este ordenado de menor a mayor.
int main()
{
    int n=10;
    int a[n];
    leer(n,a);
    verificar(n, a);
    mostrar(n, a);
}
void leer(int n, int a[])
{
    for (int i=0;i<n;i++) //Llena el vector.
    {
        cout << "Agregue el valor:" << endl << i+1 << ") ";
        cin >> a[i];
    }
    cout << "\n";
}
void mostrar(int n, int a[])
{
    cout << "\nEstos son los datos ingresados:\n";
    for (int i=0; i<n; i++)// Muestra los datos ingresados.
    {
        cout <<"Dato " << i+1 << ") " << a[i] <<endl;
    }
    cout << "\n";
}
void verificar(int n, int a[]) // verifica que el vector este ordenado de menor a mayor.
{
    for(int i=0;i<n;i++)
    {
        if (a[i] > a[i+1])
        {
            cout << "El vector no esta ordenado\n";
            break;
        }
        else
        {
            cout << "El vector esta organizado\n";
            break;
        }
    }
}