#include<iostream>
using namespace std;
int main(){
	
	int sum=0;
	int size=5;
	int array[size];
	
	for(int i=0; i<=5; i++)
	{ 
	cout<<"enter the elements of array";
	cin>>array[i];
	}
	for(int i=0; i<=5; i++){
		sum=sum+array[i];
	}
	
	cout<<"sum of array is "<<sum;
	return 0;
	
	
}
