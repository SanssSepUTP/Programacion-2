/* Llena un vector de 10 elementos y cuenta cuanto inician por 5, que son 5 y son primos.
 * Visual Studio Code 1.42.2 con Wsl Version 2 distro Debian (g++).
 * @Author: Santiago Sepúlveda
 * @Date:   2020-10-02 12:35:50
 * @Last Modified by:   Santiago Sepúlveda
 * @Last Modified time: 2020-10-02 17:11:58
 */
#include <iostream>
#include <math.h>
using namespace std;
void leer(int n, int[]); //Llena el vector.
void mostrar(int n, int[]); // Muestra los datos ingresados.
int n_digitos(int x);//Calcula el numero de digitos.
bool primo(int n);//Verifica si el numero es primo.
void contar(int n, int[]);// Contador de numeros iniciados por 5, que son 5 y son primos.
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
bool primo(int n)
{
    bool estado;
    int a=0;
    for(int i=1;i<(n+1);i++)
    {
        if(n%i==0)
        {
            a++;
        }
    }
        if(a!=2)
        {
            estado = false;
            
        }
        else
        {
            estado = true;
        }
        return estado;
}
void contar(int n, int a[])// Contador de numeros iniciados por 5 o que son 5 y son primos
{
    int cont = 0,d, x;
    for (int i=0; i<n; i++)
    {
        d = n_digitos(a[i]);
        x = a[i]/ pow(10, d-1);

        if (a[i] == 5)
        {
            cont++;
        }
        else if (x == 5 && primo(a[i]))
        {
            cont++;
        }
    }
    cout << "Hay " << cont << " elementos que inician por 5 o son 5 y son primos";
}

