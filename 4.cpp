#include <iostream>
using namespace std;

int main(){
	int choice;
	double balance = 1000;
	double totalbill =0; 
	double d =0;
	double w =0;	
        // Display the menu
        cout << "\n\t\t\tWELCOME:\n";
        cout << "\n1. Check balance\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Deposit Money\n";
        cout << "4. Exit\n";
    do{  cout<<"\nEnter your choice (1-4): ";
    	 cin>>choice;	
switch(choice){
	case 1:
		cout<<"CHECK BALANCE\n";
		cout<<"your total balance is: $"<<balance<<endl;
		break;
	case 2:
		cout<<"(WITHDRAW MONEY)\n";
		cout<<"$";cin>>w;
		if(w<=1000){
		balance -=w ;
		cout<<"Your total balance after withdraw: $"<<balance<<endl;
	}else{
		cout<<"you balance is sufficient.\n";
		return 0;
	}
		break;
	case 3:
		cout<<"(DEPOSITE MONEY)\n";
		cout<<"$";cin>>d;
		d += balance ;
		cout<<"you deposite: $"<<d<<endl;
		break;
	case 4:	
		cout<<"(-_-)\n";
		break;
	default:
		cout<<"please enter: (1-4)\n";
		break;
}
	
}while (choice!=4);{
	cout<<"Have a good day\n";
}

return 0;           
}