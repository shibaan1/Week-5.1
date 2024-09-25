#include<iostream>
using namespace std;
int main(){
	int a[5][5], b[5][5], c[5][5], m,n,p,q,i,j,k;
	cout<<"enter the rows and coloumn of first matrix";
	cin>>m>>n;
	cout<<"enter the rows and coloumns of second matrix";
	cin>>p>>q;
	if(n==p){
		cout<<"enter first matrix";
		for(i=0; i<m; i++)
		for(j=0; j<n; j++)
		cin>>a[i][j];
		cout<<"enter second matrix";
		for(i=0; i<p; i++)
		for(j=0; j<q; j++)
		cin>>b[i][j];
		cout<<"the new matrix is";
		for(i=0; i<m; i++)
		{
			for(j=0; j<q; j++){
				c[i][j]=0;
				for(k=0; k<n; k++)
				c[i][j]=c[i][j]+(a[i][k]+b[k][j]);
				cout<<c[i][j];
			}
		cout<<"\n";
		}
		}
		else
		cout<<"multiplication is not possible";
		return 0;	
}

