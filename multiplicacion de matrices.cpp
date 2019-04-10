void multiplicacion(double A[20][20],int FA,int CA,double B[20][20],int FB,int CB,double C[20][20] )
{ 
    if(CA==FB)
    {
        for(int i=0;i<FA;i++)
        { 
            for(int j=0;j<CB;j++)
            {  
                C[i][j]=0;
                for(int k=0;k<CA;k++)
                {
                    C[i][j]=C[i][j]+A[i][k]*B[k][j];
                }
            }
        }
    } 
} 

void llenar_matriz(double M[20][20],int f,int c)
{ 
    cout<<"ingrese datos de la matriz:"<<endl; 
    for(int i=0;i<f;i++)
    { 
        for(int j=0;j<c;j++)
        { 
            cin>>M[i][j];
        } 
    }
} 

void mostrar_matriz(double M[20][20],int f,int c)
{ 
    cout<<endl; 
    for(int i=0;i<f;i++)
    { 
        for(int j=0;j<c;j++)
        { 
            cout<<M[i][j]<<"\t"; 
        }cout<<endl; 
    }cout<<endl;
} 
int main (int argc, char *argv[]) 
{ 
    double A[20][20]; 
    double B[20][20]; 
    double C[20][20]; 
    int fa,ca,fb,cb; 
    cout<<"\t"<<"MATRIZ A:"<<endl; 
    cout<<"ingrese filas de la matriz A:"; 
    cin>>fa; 
    cout<<"ingrese columnas de la matri A:"; 
    cin>>ca; 
    llenar_matriz(A,fa,ca); 
    cout<<"\t"<<"MATRIZ B:"<<endl; 
    cout<<"el numero de filas tiene que ser:"<<ca<<" para que se puedan multiplicar"<<endl; 
    fb=ca; 
    cout<<"ingrese columnas de la matriz B:"; 
    cin>>cb; 
    llenar_matriz(B,fb,cb); 
    multiplicacion(A,fa,ca,B,fb,cb,C); 
    cout<<"matriz A:"<<endl; 
    mostrar_matriz(A,fa,ca); 
    cout<<"matriz A:"<<endl; 
    mostrar_matriz(B,fb,cb); 
    cout<<"matriz AXB:"<<endl; 
    mostrar_matriz(C,fa,cb);

    return 0;
}    