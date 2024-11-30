#include <iostream>
using namespace std;
int main (){
	float a,b;
	int choice;
	float result;
	cout<<"\n\t\tW E L C O M E\n";
	cout<<"Enter 2 number you want to calculate:\n";
	cout<<"a: ";cin>>a;cout<<"b: ";cin>>b;
	do{
	cout<<"\n\n1.Addition\n";
	cout<<"2.Subtraction\n";
	cout<<"3.Multiplication\n";
	cout<<"4.Division\n";
	cout<<"5.Exit\n";
	cout<<"\nEnter your choice(1-5): ";
	cin>>choice;

	switch(choice){
		case 1:
		result = a + b;
			cout<<"Addition: "<<result;
			break;
			case 2:	
				result = a - b;
				cout<<"Subtraction: "<<result;
				break;
				case 3:
					result = a * b;
					cout<<"Multiplication: "<<result;
					break;
					case 4:
						if(a==0||b==0){
							cout<<"cant divide by zero 0: ";
						}else{
							result = a/b;
							cout<<"Divide: "<<result;
							break;
						}
						case 5:
							cout<<"exiting";
							break;
						
		default:
		cout<<"wrong number";
	}
}while(choice!=5);{
	cout<<"exiting";	
}
	return 0;
}