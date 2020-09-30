/* Este programa pide dos vectores enteros de 4 elementos 
y crea un tercer vector con el resultado de la suma de los dos anteriores.
Visual Studio Code 1.42.2 con Wsl Version 2 distro Debian.
Santiago Sepúlveda
30/09/20*/
#include <iostream>
using namespace std;
void leer(int n, int[]); //Llena el vector.
void mostrar(int n, int[]); // Muestra los datos ingresados.
void crear3(int n, int [], int [], int[]);//crea el vector 3.

int main()
{
    int n = 4;
    int a[n], b[n], c[n];
    cout << "Grupo 1:" << endl;
    leer(n, a);
    cout << "Grupo 2:" << endl;
    leer(n, b);
    crear3(n,a,b,c);
    cout << "Grupo 1:" << endl;
    mostrar(n,a);
    cout << "Grupo 2:" << endl;
    mostrar(n,b);
    cout << "Grupo 3:" << endl;
    mostrar(n,c);
}
void leer(int n, int a[])
{
    for (int i=0;i<n;i++) //Llena el vector.
    {
        cout << "Agregue el digito:" << endl << i+1 << ") ";
        cin >> a[i];
    }
    cout << "\n";
}
void mostrar(int n, int a[])
{
    cout << "\nEstos son los datos ingresados:\n";
    for (int i=0; i<n; i++)// Muestra los datos ingresados.
    {
        cout <<"indice " << i+1 << ") " << a[i] <<endl;
    }
    cout << "\n";
}
void crear3(int n, int a[], int b[], int c[])//crea el vector 3.
{
    for(int i=0;i<n;i++)
    {
        c[i]= a[i] + b[i];
    }
}