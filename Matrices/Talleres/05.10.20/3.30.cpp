/* Crea una matriz 4x6, encuentra el numero menor y define cuantas veces lo contiene. 
 * Visual Studio Code 1.49.3 junto con WSL version 2 distro debian
 * @Author: Santiago Sepúlveda
 * @Date:   2020-10-05 07:39:23
 * @Last Modified by:   Santiago Sepúlveda
 * @Last Modified time: 2020-10-07 23:26:44
 */
#include <iostream>
using namespace std;
//llena la matriz.
void llenar(int f, int c, int a[][100]);
//Muestra la matriz.
void mostrar(int f, int c, int a[][100]);
//Devuelve el menor de los datos.
int menor(int f, int c, int a[][100]);
int contador(int f,int c, int m, int a[][100]);
int main()
{
    int f= 4,c= 6, men, veces;
    int a[100][100];
    llenar(f,c,a);
    cout << "\nEsta es la matriz dada\n";
    mostrar(f,c,a);
    men =  menor(f,c,a);
    veces = contador(f,c,men,a);
    cout << "El menor valor es " << men <<  " y se encuentra en la matriz " << veces << " veces";
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
int menor(int f, int c, int a[][100])
{
    int menor = a[0][0];
    for(int i1=0; i1<f; ++i1)
    {
        for(int i2=0; i2<c; ++i2)
        {
            if(menor > a[i1][i2])
            {
                menor = a[i1][i2];
            }
        }
    }
    return menor;
}
int contador(int f, int c, int m, int a[][100])
{
    int cont = 0;
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
    return cont;
}


