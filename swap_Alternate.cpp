#include<iostream>
using namespace std;

swapAlternate(int arr[],int size){
	
	for(int i=0; i<size;i+=2){
		
		if(i+1<size){
		
		
		swap(arr[i],arr[i+1]);
		}
	}
	
}

printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	
	int arr[10]={2,5,6,8,9,4,33,-99,8,44};
	
	int brr[5]={8,-99,4,99,450};
	
	
	swapAlternate(arr,10);
	printArray(arr,10);
	
	swapAlternate(brr,5);
	printArray(brr,5);
	
	return 0;
	
	
}
