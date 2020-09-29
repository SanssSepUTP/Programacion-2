#include <iostream>
#include <clocale> //Esta biblioteca permite utilizar caracteres propios del español.
using namespace std;
void leer(int n, int[]); //Llena el vector.
void mostrar(int n, int[]); // Muestra los datos ingresados.
int suma(int n, int[]); //Realiza recursivamente la suma de todos los elementos del vector.
int resta(int n, int[]); //Realiza recursivamente la resta de todos los elementos del vector.
int multiplicacion(int n, int[]); //Realiza recursivamente la multiplicacion de todos los elementos del vector.
void datos_del_promedio(float p, int n, int[]); //Calcula cuantos elementos estan por debajo, son iguales o estan por encima del promedio calculado.
int main ()
{
    setlocale(LC_CTYPE, "Spanish"); //Llamado a la biblioteca <clocale>.
    int t,sum,mult,rest;
    float promedio;
    cout << "¿Cuantos elementos desea agregar?: ";
    cin >> t;
    int vec[t];
    leer(t,vec);
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
int suma(int n, int a[]) //Realiza recursivamente la suma de todos los elementos del vector.
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += a[i];
    }
    return sum;
}
int resta(int n, int a[]) //Realiza recursivamente la resta de todos los elementos del vector.
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
void datos_del_promedio(float p, int n, int a[]) //Calcula cuantos elementos estan por debajo, son iguales o estan por encima del promedio calculado.
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
    cout << "\nHay " << debajo << " elementos por debajo de el promedio \n"<< igual << " elementos iguales al promedio y \n" << encima << " elementos por encima del promedio.\n";
}