#include<iostream>
using namespace std;
int main(){
	int n;
	int array[7]={2,6,8,5,3,9,4};
	
	int temp=array[n-1];
	
	for(int i=n-2 ; i>=0 ;i--){
		
		array[i+1]=array[i];
		
	}
		array[0]=temp;
	
	
	for(int i=0; i<7; i++){
		
		//array[7]=temp;
		
		cout<<array[i]<<" ";
		
	}
}
