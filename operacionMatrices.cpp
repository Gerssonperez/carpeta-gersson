#include <iostream>

using namespace std;
bool esPrimo(int n);
int n;
int p;

int main()
{
	short int m,n,i,j;
	
	cout<<"Introduzca el numero de la fila: ";
	cin>>m;
	
	cout<<"Introduzca el numero de columnas: ";
	cin>>n;
	
	float A[m][n], B[m][n], C[m][n];
	
	cout<<"Introduzca los datos de la matriz A: "<<endl;
	
	for (i=0; i<m; i++)
	for (j=0; j<n; j++)
		{
			cout<<"A["<<i<<"] ["<<j<<"]: ";
			cin>>A[i][j];	
		}
		
	cout<<"Introduzca los datos de la matriz B: "<<endl;	
	for (i=0; i<m; i++)
	for (j=0; j<n; j++)
		{
			cout<<"B["<<i<<"] ["<<j<<"]: ";
			cin>>B[i][j];	
		}
		
	{
		for (i=0; i<m; i++)
		for (j=0; j<n; j++)
			C[i][j]=A[i][j]+B[i][j];
	}
	
	cout<<"\nLa matriz resultado es: "<<endl;
	for (i=0; i<m; i++)
	for (j=0; j<n; j++)
		cout<<"C["<<i<<"]["<<j<<"]: "<<C[i][j]<<endl;
	
	if(p) cout<<"Es primo"<<endl;
		else{
			cout<<"No es primo"<<endl;
		}
	
	
	
return 0;	
	
}
