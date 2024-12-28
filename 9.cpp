#include <iostream>
using namespace std;
int main (){
	int n;
	
	cout<<"Enter a number: ";
	cin>>n;
	if(n<=0){
		cout<<"ENTER A POSITIVE INTEGER.";
	}else{
		cout<<"table of: "<<n<<" is\n";
	
		cout<<"\nNumbers"<<"\tSquares"<<"\tCubes\n";
	}
	for(int i=1; i<=n ; i++){
		cout<<i<<"\t"<<i*i<<"\t"<<i*i*i<<endl;
	}
	return 0;
}