#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"enter the size of an array :";
	cin>>size;
	
	int arr[size];
	for(int i=0; i<size; i++){
		cin>>arr[i];
		}
	cout<<"array: ";
	for(int i=0; i<size; i++){
		cout<<"["<<arr[i]<<"]";
	}
	cout<<endl;
	int freq=0;
	int key;
	cout<<"enter the number whose frequency you want to know";
	cin>>key;
	
	for(int k=0; k<size; k++){
		
		if(key==arr[k]){
			freq++;
		}
	}
	cout<<"frequency of the ni=umber in this array is"<<freq;
	
	
	
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
