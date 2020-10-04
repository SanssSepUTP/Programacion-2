/* Llena un vector de 10 elementos y cuenta cuanto inician por 3 o son 3.
 * Visual Studio Code 1.42.2 con Wsl Version 2 distro Debian (g++).
 * @Author: Santiago Sepúlveda
 * @Date:   2020-10-02 12:35:50
 * @Last Modified by:   Santiago Sepúlveda
 * @Last Modified time: 2020-10-02 17:03:17
 */
#include <iostream>
#include <math.h>
using namespace std;
void leer(int n, int[]); //Llena el vector.
void mostrar(int n, int[]); // Muestra los datos ingresados.
int n_digitos(int x);//Calcula el numero de digitos.
void contar(int n, int[]);// Contador de numeros iniciados por 3 o que son 3.
int main()
{
    int n= 10;
    int vec[10];
    leer(n,vec);
    mostrar(n,vec);
    contar(n, vec);
    return 0;
}
void leer(int n, int a[])
{
    for (int i=0;i<n;i++) //Llena el vector.
    {
        cout << "Agregue el dato: " << endl << i+1 << ") ";
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
int n_digitos(int x)//Calcula el numero de digitos.
{
    int i=1;
    while (x >= pow(10, i))
    {
        i++;
    }
    return i;
}
void contar(int n, int a[])// Contador de numeros iniciados por 3 o que son 3.
{
    int cont = 0,d, x;
    for (int i=0; i<n; i++)
    {
        d = n_digitos(a[i]);
        x = a[i]/ pow(10, d-1);

        if (a[i] == 3)
        {
            cont++;
        }
        else if (3 == x)
        {
            cont++;
        }
    }
    cout << "Hay " << cont << " elemntos que inician por 3 o son 3";
}

