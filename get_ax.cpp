#include<iostream>
using namespace std;
int main(){
	
	int size;
	cout<<"Enter the size of an Array: ";
	cin>>size;
	
	int arr[size];
	arr[100];
	
	cout<<"Enter the elements of an Array: ";
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	

	int max1=arr[0];
	int max2=arr[1];

	for(int j=1; j<size; j++){
		if(arr[j]>arr[0]){
			max1=arr[j];
			
		}
	}
	for(int j=2; j<size; j++){
		if(max2[j]<max1[j]){
			max2=arr[j];
		}
	}
	cout<<"First Maximum : "<<max1;
	cout<<"Second Maximum: "<<max2;
}

