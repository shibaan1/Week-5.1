#include<iostream>
using namespace std;
int main(){
	int size = 6;
	int array[size];
	  for(int i=0; i<size; i++)
	  {
	  cout<<"enter the elements of array :" ;
	  cin>>array[i];
       }
	cout<<"the array will be ";
	for(int i=0; i<size; i++){
		cout<<array[i]<<" ";
	}
	return 0;
}
