#include <iostream>
using namespace std;
int main (){
	int password = 1234;
	int user_password;
	
	cout<<"Enter your password: \n";
	
	for(int i = 2; i >=0 ; i--){
			cin>>user_password;
		if(user_password == password){
			cout<<"\nCorrect password\n";
			cout<<"Welcome : Rafay";
			break;
		}else{
			cout<<"\n\tincorrect password\n";
			cout<<"\nremaining attempt: "<<i<<endl;
		}
	}
	
	return 0;
}