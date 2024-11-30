#include <iostream>
using namespace std;
int main (){
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	if(num <=0){
		cout<<"Enter a pasitive integer.\n";
	}else{
		cout<<"\ndivision of "<<num<<" is,\n";
	}
	for(int i=1; i<=num; i++){
		if (num %i ==0){
			cout<<i<<" , ";
		}
	}
	return 0;
}