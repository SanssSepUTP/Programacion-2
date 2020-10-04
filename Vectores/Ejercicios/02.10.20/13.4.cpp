/* Crea un vector de 10 elementos, lo llena y muestra los numeros comprendidos entre 1
 * y cada digito de cada numero contenido en el vector.
 * @Author: Santiago Sepúlveda
 * @Date:   2020-10-03 14:13:04
 * @Last Modified by:   Santiago Sepúlveda
 * @Last Modified time: 2020-10-03 14:45:11
 */
#include <iostream>
#include <math.h>
using namespace std;
//Llena un vector de n elementos.
void leer(int n, int[]); 
// Muestra los datos ingresados de un vector de n elementos.
//llama a asignar.
void mostrar(int n, int[]); 
//Calcula el numero de digitos de un numero x.
int n_digitos(int x);
//llena un vector de n elementos con cada digito de un numero x con n digitos.
//llama a la funcion d_1_a_x
void asignar_n(int x,int n);
//Muestra los numeros de 1 a x.
void de_1_a_x(int n);
int main()
{
    int n = 10;
    int vec[n];
    leer(n, vec);
    mostrar(n, vec);
    return 0;
}
void leer(int n, int a[])
{
    for (int i=0;i<n;i++) 
    {
        cout << "Agregue el elemento." << endl << i+1 << ") ";
        cin >> a[i];
    }
}
void mostrar(int n, int a[])
{
    for (int i=0; i<n; i++)
    {
        cout <<"\nDato " << i+1 << ") " << a[i] <<endl;
        asignar_n(a[i], n_digitos(a[i]));
    }
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
void asignar_n(int x,int n)
{
    int a[n];
    int d = n;
    for (int i=0; i<n; i++)
    {
        a[i] = x / pow(10, d-1);
        x = x - (a[i] * (pow(10, d-1)));
        --d;
        cout << a[i] << ") ";
        de_1_a_x(a[i]);
    }
}
void de_1_a_x(int x)
{
    for (int i=1;i<=x;i++)
    {
        cout << i << " ";
    }
    cout << endl;
}