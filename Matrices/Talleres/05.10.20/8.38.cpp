/* Crea dos matrices de 4x6, y verifica cuantas veces esta contenido el mayor numero primo en la otra matriz
 * Visual Studio Code 1.49.3 junto con WSL version 2 distro debian
 * @Author: Santiago Sepúlveda
 * @Date:   2020-10-05 07:39:23
 * @Last Modified by:   Santiago Sepúlveda
 * @Last Modified time: 2020-10-09 12:41:29
 */
#include <iostream>
using namespace std;
//llena la matriz.
void llenar(int f, int c, int a[][100]);
//Muestra la matriz.
void mostrar(int f, int c, int a[][100]);
//Verifica si un numero n es primo.
bool primo(int n);
int mayor_pri(int f, int c, int a[][100]);
void contador(int f, int c,int m, int a[][100]);
int main()
{
    int f= 4,c= 6;
    int a[100][100];
    int b[100][100];
    cout << "Agregue los valores de la primera matriz\n";
    llenar(f,c,a);
    cout << "Agregue los valores de la segunda matriz\n";
    llenar(f,c,b);
    cout << "\nEstos son los valores de la primera matriz\n";
    mostrar(f,c,a);
    cout << "\nEstos son los valores de la segunda matriz\n";
    mostrar(f,c,b);
    cout << "El numero mayor primo es: " << mayor_pri(f,c,a)<< endl;
    contador(f,c,mayor_pri(f,c,a),a);
    return 0;
}
void llenar(int f, int c, int a[][100])
{
    for (int i1=0;i1<f;i1++)
    {
        for(int i2=0;i2<c;i2++)
        {
            cout << "Agregue el numero entero: ";
            cin >> a[i1][i2];
        }
    }
}
void mostrar(int f, int c, int a[][100])
{
    for(int i1=0; i1<f; ++i1)
    {
        for(int i2=0; i2<c; ++i2)
        {
            cout<<a[i1][i2]<<" ";
        }
        cout<<endl;
    }
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
int mayor_pri(int f, int c, int a[][100])
{
    int may = 0;
    for(int i1=0; i1<f; ++i1)
    {
        for(int i2=0; i2<c; ++i2)
        {
            if (may < a[i1][i2] && primo(a[i1][i2]))
            {
                may = a[i1][i2];
            }
        }
    }
    return may;
}
void contador(int f, int c, int m, int a[][100])
{
    int cont=0;
    for(int i1=0; i1<f; ++i1)
    {
        for(int i2=0; i2<c; ++i2)
        {
           if (m == a[i1][i2])
           {
               cont++;
           }
        }
        
    }
    cout << "El numero se repite " << cont << " veces en la segunda matriz";
}