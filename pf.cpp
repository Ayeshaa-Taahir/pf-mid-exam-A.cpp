#include<iostream>
using namespace std;
int main()
{
	double balance = 5000;
	double ammount = 0;
    int choice;
    
    while(true){
    cout<<"bank account balance and transaction"<<endl;
    cout<<"1. to check balance"<<endl;
    cout<<"2. to deposit money"<<endl;
    cout<<"3. to withdraw money"<<endl;
    cout<<"4. exit"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    
    switch(choice){
    	case 1:
    		cout<<"you current balance is $"<< balance<<endl;
    		break;
    	case 2:
    		cout<<"enter money to deposit"<<endl;
    		cin>>ammount;
    		if(ammount<= 0){
    			cout<<"enter a positive value"<<endl;
    			
			}else{
				balance += ammount;
				cout<<"new balance is $"<<balance<<endl;
			}
			break;
		case 3:
			cout<<"enter money to withdraw"<<endl;
			cin>>ammount;
			if(ammount>balance){
				cout<<"invalid balance re-enter the withdraw ammount"<<endl;
			}else if(ammount<=0){
				cout<<"enter a positive no"<<endl;
			}else{
				balance -= ammount;
				cout<<"your current balance is $"<<balance<<endl;
			}
			break;
			
		case 4 :
			cout<<"Thankyou for checking"<<endl;
			return 0;
			default :
				cout<<"enter invalid choice"<<endl;
				break;
	}
    continue;

}
return 0;
}
