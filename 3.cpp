#include <iostream>
using namespace std;

int main(){
	int choice;
	int t=2,c=3,s=5,b=7;
	
	double totalbill =0; 
	
        // Display the menu
        cout << "\nMENU:\n";
        cout << "1. TEA = $2\n";
        cout << "2. COFFEE = $3\n";
        cout << "3. SANDWICH = $5\n";
        cout << "4. BURGER = $7\n";
        cout << "5. Exit\n";
    do{  
        cout << "Enter your choice (1-5): ";
        cin >> choice;
    
switch(choice){
	case 1:
		cout<<"(TEA - $2)\n";
		totalbill +=t;
		break;
	case 2:
		cout<<"(COFFEE - $3)\n";
		totalbill +=c;
		break;
	case 3:
		cout<<"(SANDWHICH - $5)\n";
		totalbill +=s;
		break;
	case 4:	
		cout<<"(BURGER - $7)\n";
		totalbill +=b;
		break;
	case 5:	
		cout<<"\nThank you for your order\n";
		break;	
	default:
		cout<<"wrong number\n";
		break;
}
	
}while (choice!=5);{
	cout<<"your total bill is: $"<<totalbill<<endl;
}	return 0;
}