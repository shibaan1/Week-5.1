#include<iostream>
using namespace std;
int main()
{
int array[10]={2,4,58,8,46,85,56,19,47,25};
int max = array[0];
int secondMax=INT_MIN;
for(int i=1; i<10; i++){
	if(array[i] > max) {
		secondMax = max;
		max = array[i];
	}
	else if(array[i] > secondMax && array[i] != max){
		secondMax = array[i];
	}
}
cout<<"second largest number in array is"<<secondMax<<endl;
return 0 ;
}
