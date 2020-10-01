#include <iostream>
using namespace std;
void llenar(int f, int c, int a[][100]);
void mostrar(int f, int c, int a[][100]);
int main()
{
    int f= 4,c= 5;
    int a[100][100];
    llenar(f,c,a);
    mostrar(f,c,a);
    return 0;
}
void llenar(int f, int c, int a[][100])
{
    for (int i1=0;i1<c;i1++)
    {
        for(int i2=0;i2<f;i2++)
        {
            cout << "Agregue el componente: ";
            cin >> a[i2][i1];
        }
    }
}
void mostrar(int f, int c, int a[][100])
{
    cout<<"La matriz es:"<<endl;
    for(int i1=0; i1<f; ++i1)
    {
        for(int i2=0; i2<c; ++i2)
        {
            cout<<a[i1][i2]<<" ";
        }
        cout<<endl;
    }
}