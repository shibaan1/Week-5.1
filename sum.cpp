 #include<iostream>
 using namespace std;
 int main(){
 	int size;
 	cout<<"Enter the size of Array: ";
 	cin>>size;
 	int arr1[size];
 	int arr2[size];
 	int arr3[size];
	
	cout<<"Enter the element of first array: ";
	for(int i=0; i<size; i++){
		cin>>arr1[i];
		
	} 	
	cout<<endl;
	
	cout<<"Enter the element of second array: ";
	for(int j=0; j<size; j++){
		cin>>arr2[j];
		
	}
	cout<<endl;
	
	cout<<"The sum of Above Two Array is: ";
	for(int k=0; k<size; k++){
		arr3[k]=arr1[k]+arr2[k];
		cout<<arr3[k]<<", ";
		
	}
	
	
 }
