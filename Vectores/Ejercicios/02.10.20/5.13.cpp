/* Crea un vector de 10 elementos lo llena, y muestra si la suma del mayor y el menor es primo.
 * Visual Studio Code 1.42.2 con Wsl Version 2 distro Debian (g++).
 * @Author: Santiago Sepúlveda
 * @Date:   2020-10-02 07:56:42
 * @Last Modified by:   Santiago Sepúlveda
 * @Last Modified time: 2020-10-02 17:00:16
 */
#include <iostream>
using namespace std;
void leer(int n, int[]); //Llena el vector.
void mostrar(int n, int[]); // Muestra los datos ingresados.
int mayor(int n,int[]);// calcula el mayor
int menor(int n, int[]);// calcula el menor
bool primo(int n);//Verifica si el numero es primo.
void verificar(bool x);
int main()
{
    int n = 10,may, men, suma;
    int vec[n];
    leer(n, vec);
    mostrar(n,vec);
    may = mayor (n,vec);
    men = menor (n,vec);
    suma = men + may;
    verificar(primo(suma));
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
void verificar(bool x)
{
    if (x)
    {
        cout << "la semi suma del mayor y el menor es primo";
    }
    else
    {
        cout << "la semi suma del mayor y el menor no es primo";
    }

}
