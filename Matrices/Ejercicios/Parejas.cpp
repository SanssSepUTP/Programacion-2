/* Crea una matriz de 5 x 5 y ordena los numeros por filas.
 * @Author: Santiago Sepúlveda
 * @Date:   2020-10-05 07:39:23
 * @Last Modified by:   Santiago Sepúlveda
 * @Last Modified time: 2020-10-05 09:50:49
 */
#include <iostream>
using namespace std;
//llena la matriz.
void llenar(int f, int c, int a[][100]);
//Muestra la matriz.
void mostrar(int f, int c, int a[][100]);
// Llena el vector con los elementos de la matriz.
void llenar_vec(int f, int c, int a[][100],int b[]);
// Organiza el vector de menor a mayor por el metodo burbuja.
void organizar_vec(int t, int a[]);
//Asigna cada elemento del vector a la matriz.
void asignar(int f, int c, int a[][100],int b[]);
int main()
{
    int f= 5,c= 5;
    int a[100][100];
    int b[f*c];
    llenar(f,c,a);
    cout<<"\nEsta es la matriz dada:\n "<<endl;
    mostrar(f,c,a);
    llenar_vec(f,c,a,b);
    organizar_vec(f*c,b);
    asignar(f,c,a,b);
    cout<<"\nEsta es la matriz organizada:\n "<<endl;
    mostrar(f,c,a);
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
void llenar_vec(int f, int c, int a[][100], int b[])
{
    int i = 0;
    for(int i1=0; i1<f;i1++)
    {
        for(int i2=0;i2<c;i2++)
        {
            b[i] = a[i1][i2];
            i++;
        }
    }
}
void organizar_vec(int t, int a[])
{
    int temp;
    for(int i1=0;i1<t;i1++)
    {
        for(int i2=0;i2<t-1;i2++)
        {
            if(a[i2] > a[i2+1])
            {
                temp = a[i2];
                a[i2] = a[i2+1];
                a[i2+1] = temp;
            }
        }
    }
}
void asignar(int f, int c, int a[][100], int b[])
{
    int i=0;
    for(int i1=0; i1<f; ++i1)
    {
        for(int i2=0; i2<c; ++i2)
        {
            a[i1][i2] = b[i];
            i++;
        }
        
    }
}