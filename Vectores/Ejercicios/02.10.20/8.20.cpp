/* Llena un vector de 10 elementos y determina cuantos numeros inician por 34.
 * Visual Studio Code 1.42.2 con Wsl Version 2 distro Debian (g++).
 * @Author: Santiago Sepúlveda
 * @Date:   2020-10-02 16:07:18
 * @Last Modified by:   Santiago Sepúlveda
 * @Last Modified time: 2020-10-02 17:09:53
 */
#include <iostream>
#include <math.h>
using namespace std;
void leer(int n, int[]); //Llena el vector.
void mostrar(int n, int[]); // Muestra los datos ingresados.
void recorrer(int n, int a[]);//Recorre el vector incial.
int n_digitos(int x);//Calcula el numero de digitos.
bool verificar(int x,int n);// Crea un vector donde almacena temporalmente los digitos de cada elemento del vector inicial y compara los dos primeros digitos con 34.
int main()
{
    int n = 10;
    int vec[n];
    leer(n, vec);
    mostrar(n, vec);
    recorrer(n, vec);
    return 0;
}
void leer(int n, int a[])
{
    for (int i=0;i<n;i++) //Llena el vector.
    {
        cout << "Agregue la nota del usuario " << endl << i+1 << ") ";
        cin >> a[i];
    }
}
void mostrar(int n, int a[])
{
    cout << "\nEstos son los datos ingresados:\n";
    for (int i=0; i<n; i++)// Muestra los datos ingresados.
    {
        cout <<"Persona " << i+1 << ") " << a[i] <<endl;
    }
}
void recorrer(int n, int a[])
{
    int cont = 0;
    for (int i=0; i<n; i++)
    {
        if (verificar(a[i],n_digitos(a[i])))
        {
            cont++;
        }
    }
    cout << "Hay " << cont << " Elementos que inician por 34";
}
int n_digitos(int x)
{
    int i=1;
    while (x >= pow(10, i))
    {
        i++;
    }
    return i;
}
bool verificar(int x,int n)
{
    bool estado = false;
    int d = n;
    int a[d];
    for (int i=0; i<n; i++)
    {
        a[i] = x / pow(10, d-1);
        x = x - (a[i] * (pow(10, d-1)));
        --d;
    }
    
    if (a[0] == 3 && a[1] == 4)
    {
        estado = true ;
    }
    return estado;
}