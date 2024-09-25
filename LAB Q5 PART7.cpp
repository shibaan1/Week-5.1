#include<iostream>
using namespace std;
int main(){
	
	int size;
	cout<<"enter the size of array:";
	cin>>size;
	int arr[size];
	arr[100];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	cout<<endl;
	for(int j=0; j<size; j++){
		
		if(arr[j]>0){
			cout<<arr[j]<<" "<<"positive number in array"<<endl;
			}
			else if(arr[j]<0){
				cout<<arr[j]<<" "<<"negative numbers in array ";}
	}
	for(int k=0; k<size;k++){
		if(arr[k]%2==0){
			cout<<arr[k]<<" "<<"even number";
		}
		else{
			cout<<arr[k]<<" "<<"odd number";
		}
	}
}
