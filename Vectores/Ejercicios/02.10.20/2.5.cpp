/* Crea un vector de 10 elementos lo llena, pide un numero y verifica si lo contiene y en que indice
 * Visual Studio Code 1.42.2 con Wsl Version 2 distro Debian (g++).
 * @Author: Santiago Sepúlveda
 * @Date:   2020-10-02 07:56:42
 * @Last Modified by:   Santiago Sepúlveda
 * @Last Modified time: 2020-10-02 16:59:18
 */
void leer(int n, int[]); //Llena el vector.
void mostrar(int n, int[]); // Muestra los datos ingresados.
void verificar(int n, int[]);// Pide un elemento y verifica que lo contenga.
#include <iostream>
using namespace std;
int main()
{
    int n = 10, x;
    int vec[n];
    leer(n, vec);
    mostrar(n,vec);
    verificar(n,vec);
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
        cout <<"Dato " << i+1 << ") " << a[i] <<endl;
    }
}
void verificar(int n, int a[])// Pide un elemento y verifica que lo contenga.
{
    int x;
    cout<< "Agregar el numero para verificar: ";
    cin >> x;
    for (int i=0; i<n; i++)
    {
        if (x == a[i])
        {
            cout << "El numero " << x << " esta en el vector, tiene el indice numero " << i <<endl;
        }
        
    }
}