#include <iostream>
using namespace std;
int main(){
	string operation;
	int number1;
	int number2;
	
cout<<"enter first number :";
cin>>number1;
	cout<<"enter operation";
	cin>>operation;
	cout<<"enter secend number :";
	cin>>number2;
	if (operation=="+"){
			cout<<number1+number2;
			
	}
	else if  (operation=="-"){
			cout<<number1-number2;
			
	}
	else if  (operation=="*"){
			cout<<number1*number2;
			
	}
	else if  (operation=="/"){
			cout<<number1/number2;
			
	}
	
	
	
	
	
	
	
	
	return 0;
	
	
}
