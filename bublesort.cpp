#include <iostream>

using namespace std;

void burbuja(int a[], int n)
{
	int aux,i,j;
	for(i=1;i<=n;i++)
	{
	   for(j=n;j>=i;j--)
	   {
           if(a[j-1]>a[j])
           {
              aux=a[j-1];
              a[j-1]=a[j];
              a[j]=aux; 
            }  
	   }
	}
}

void imprimir(int a[], int n)
{
	cout<<"Numeros ordenados de Menor a Mayor"<<endl;
	for(int i=0;i<n;i++)
	    cout<<"[ "<<a[i]<<" ]";
}

int main()
{
	int a[]={12,5,6,8,2,45};
	burbuja(a,6);
	imprimir(a,6);

}
