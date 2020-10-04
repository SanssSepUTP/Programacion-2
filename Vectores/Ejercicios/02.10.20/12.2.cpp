/*Crea un vector de 10 elementos, lo llena y almacena el factorial de sus elementos en otro vector y calcula el promedio.
 * Tener en cuenta las limitaciones de tamaño.
 * @Author: Santiago Sepúlveda
 * @Date:   2020-10-03 12:52:15
 * @Last Modified by:   Santiago Sepúlveda
 * @Last Modified time: 2020-10-03 14:06:09
 */
#include <iostream>

using namespace std;
//Llena un vector de n elementos.
void leer(int n, int[]); 
// Muestra los datos ingresados de un vector de n elementos de tipo int.
void mostrar(int n,int[]);
// Muestra los datos ingresados de un vector de n elementos de tipo unsigned long long int.
void mostrar2(int n, unsigned long long int[]);
//Realiza recursivamente la suma de todos los elementos del vector de n elementos de tipo unsigned long long int.
unsigned long long int suma(int n, unsigned long long int[]); 
// Regresa el factorial de un numero n.
//(Solo logre que mostrara correctamente hasta el factorial n=21 por limites en el tamaño de las variables).
//El tamaño maximo de una variable de tipo unsigned long long int es de 18,446,744,073,709,551,615.
unsigned long long int factorial(int n); 
//Asigna los factoriales de un vector de n tamaño a otro del mismo.
void asignar(int n, int[], unsigned long long int[]);

int main()
{
    long double promedio;
    int n = 10;
    int vec[n];
    unsigned long long int vec1[n];
    leer(n, vec);
    cout << "Estos son los elementos del vector principal\n";
    mostrar(n,vec);
    asignar(n,vec,vec1);
    cout << "Estos son los elementos del vector de los factoriales.";
    mostrar2(n,vec1);
    promedio = suma(n, vec1)/ n;
    cout << "El promedio de los factoriales es: "<< promedio;
    return 0;
}

void leer(int n, int a[])
{
    cout << endl;
    for (int i=0;i<n;i++) 
    {
        cout << "Agregue el elemento." << endl << i+1 << ") ";
        cin >> a[i];
    }
    
    cout << endl;
}
void mostrar(int n, int a[])
{
    cout << endl;
    for (int i=0; i<n; i++)
    {
        cout <<"Dato " << i+1 << ") " << a[i] <<endl;
    }
    cout << endl;
}
void mostrar2(int n, unsigned long long int a[])
{
    cout << endl;
    for (int i=0; i<n; i++)
    {
        cout <<"Dato " << i+1 << ") " << a[i] <<endl;
    }
    cout << endl;
}
unsigned long long int suma(int n, unsigned long long int a[]) 
{
    unsigned long long int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += a[i];
    }
    return sum;
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
void asignar(int n, int a[], unsigned long long int b[])
{
    for (int i=0; i<n; i++)
    {
        b[i] = factorial(a[i]);
        
    }
}