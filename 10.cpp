#include <iostream>
using namespace std;
int main (){
	int n;
	
	cout<<"Enter a positive integer: ";
	cin>>n;
	
	if(n<0){
		cout<<"Enter a positive integer.";
	}else{
		cout<<"Generating reverse pattern.\n";	
	}
	for (int i = n; i >= 1; --i) {
        
            for (int j = i; j >= 1; --j) {
                cout << j << " ";
            }
            cout << endl;
	}
	return 0;
}