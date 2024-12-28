#include <iostream>
using namespace std;
int main (){
	int marks;
	int total_marks = 0;
		cout<<"(0) for total marks\n";
		do{
	cout<<"\nEnter your grade. (1-100).\n";
	cin>>marks;
	total_marks += marks;
		if(marks>= 90 && marks<=100){
			cout<<"\tyour grade is 'A'\n";
		}if (marks>= 80 && marks<=89){
			cout<<"\tyour grade is 'B'\n";
		}if (marks>=70 && marks<=79){
			cout<<"\tyour grade is 'C'\n";
		}if (marks>=60 && marks<=69){
			cout<<"\tyour grade is 'D'\n";
		}else if (marks<60 && marks>1){
			cout<<"\tyour grade is 'F'\n";
		}else if(marks>0 && marks>100){
			cout<<"incorrect grade";
		}
	}while(marks!=0);{
		cout<<"Total marks for all grade: "<<total_marks;
	}
	
	return 0;
}