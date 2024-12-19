#include <iostream>
using namespace std;
int main (){
	int num , even_count=0 , odd_count=0;
	
	while(true){
	cout<<"\nEnter num to find even and odd (0 - to exit)";
	cin>>num;
	if(num==0){
		cout<<"you want to exit.\n";
		break;
	}
	if (num %2==0){
		even_count++;
		continue;
	}else{
		odd_count++;
	}
}
cout<<"Total even count: "<<even_count<<endl;
cout<<"Total odd count: "<<odd_count<<endl;
	return 0;
}