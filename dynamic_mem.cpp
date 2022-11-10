#include<iostream>
using namespace std;
int main(){
	int size;
	int *ptr;
	
	cout<<"Size of array? : "<<endl;
	cin>>size;
	
	ptr=new int[size];
	cout<<"Enter values : "<<endl;
	for (int i=0;i<size;i++){
			cin>>ptr[i];
	}
	cout<<"Values are : "<<endl;
	for (int i=0;i<size;i++){
			cout<<ptr[i]<<endl;
	}
	cout<<ptr;
	return 0;
}
