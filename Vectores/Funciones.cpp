/*
 * @Author: Santiago Sepúlveda
 * @Date:   2020-10-02 11:31:15
 * @Last Modified by:   Santiago Sepúlveda
 * @Last Modified time: 2020-10-03 14:49:46
 */
#include <iostream>
#include <clocale> //Esta biblioteca permite utilizar caracteres propios del español.
#include <math.h>
using namespace std;
//Llena un vector de n elementos.
void leer(int n, int[]); 
// Muestra los datos ingresados de un vector de n elementos.
void mostrar(int n, int[]); 
//Realiza recursivamente la suma de todos los elementos del vector de n elementos.
int suma(int n, int[]); 
//Realiza recursivamente la resta de todos los elementos del vector de n elementos.
int resta(int n, int[]); 
//Realiza recursivamente la multiplicacion de todos los elementos del vector de n elementos.
int multiplicacion(int n, int[]); 
//Calcula cuantos elementos estan por debajo, son iguales o estan por encima de p promedio calculado en un vector de n elementos.
void datos_del_promedio(float p, int n, int[]); 
//Verifica si un numero n es primo.
bool primo(int n);
//Calcula el numero de digitos de un numero x.
int n_digitos(int x);
//llena un vector de n elementos con cada digito de un numero x con n digitos.
void asignar_n(int x,int n, int a[]);
// Regresa el factorial de un numero n.
//(Solo logre que mostrara correctamente hasta el factorial n=21 por limites en el tamaño de las variables).
//El tamaño maximo de una variable de tipo unsigned long long int es de 18,446,744,073,709,551,615.
unsigned long long int factorial(int n); 
int main ()
{
    setlocale(LC_CTYPE, "Spanish"); //Llamado a la biblioteca <clocale>.
    int t,sum,mult,rest;
    float promedio;
    cout << "¿Cuantos elementos desea agregar?: ";
    cin >> t;
    int vec[t];
    leer(t,vec);
    cout << "\nEstos son los datos ingresados:\n";
    mostrar(t,vec);
    sum=suma(t,vec);
    rest=resta(t,vec);
    mult=multiplicacion(t,vec);
    promedio = sum/t;
    cout << "\nLa suma de todos los datos agregados fue: " << sum << endl;
    cout << "\nLa resta de todos los datos agregados fue: " << rest << endl;
    cout << "\nLa multiplicacion de todos los datos agregados fue: " << mult << endl;
    cout << "\nEl promedio de los datos agregados fue: " << promedio << endl;
    datos_del_promedio(promedio,t,vec);
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
        cout <<"Dato " << i+1 << ") " << a[i] <<endl;
    }
}
int suma(int n, int a[]) 
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += a[i];
    }
    return sum;
}
int resta(int n, int a[]) 
{
    int rest = 0;
    for(int i=0; i<n; i++)
    {
        rest -= a[i];
    }
    return rest;
}
int multiplicacion(int n, int a[])
{
    int mult = 1;
    for(int i=0; i<n; i++)
    {
        mult *= a[i];
    }
    return mult;
}
void datos_del_promedio(float p, int n, int a[]) 
{
    int debajo = 0,igual= 0, encima = 0;
    for(int i=0; i<n; i++)
    {
        if (a[i] < p)
        {
            debajo++;
        }
        else if (a[i] == p)
        {
            igual++;
        }
        else 
        {
            encima++;
        }
    }
    cout << "\nHay " << debajo << " elementos por debajo de el promedio \n";
    cout << igual << " elementos iguales al promedio y \n" << encima << " elementos por encima del promedio.\n";
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
int n_digitos(int x)
{
    int i=1;
    while (x >= pow(10, i))
    {
        i++;
    }
    return i;
}
void asignar_n(int x,int n, int a[])
{
    int d = n;
    for (int i=0; i<n; i++)
    {
        a[i] = x / pow(10, d-1);
        x = x - (a[i] * (pow(10, d-1)));
        --d;
    }
}
unsigned long long int factorial(int n)
{
    unsigned long long int fac= 1;
    
    if (n < 0)
    {
        fac = 0;
    }
    else if(n == 0)
    {
        fac = 1;
    }
    else 
    {
        for(unsigned long long int i = 1; i <= n; i++)
        {
            fac =fac * i;
        }
    }
    return fac;
}