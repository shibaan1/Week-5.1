#include<iostream>
using namespace std;
int main()
{
	int rows, colmn;
	cout<<"enter the number of rows";
	cin>>rows;
	cout<<"enter the number of coloumns";
	cin>>colmn;
	int matrix1[rows][colmn],matrix2[rows][colmn],sum[rows][colmn];
	cout<<"enter elements of the first matrix";
	for(int i=0; i<rows;i++)
	for(int j=0; j<colmn;j++){
		cin>>matrix1[i][j];
	}
	cout<<"enter the elements of second matrix";
	for(int i=0; i<rows; i++)
	for(int j=0; j<colmn; j++){
		cin>>matrix2[i][j];
	}
	for(int i=0; i<rows; i++){
		for(int j=0; j<colmn; j++){
		sum[i][j]=matrix1[i][j]+matrix2[i][j];
	}
}
cout<<"sum of matrices is"	;
	for(int i=0; i<rows; ++i){
		for(int j=0; j<colmn;++j){
			cout<<sum[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
