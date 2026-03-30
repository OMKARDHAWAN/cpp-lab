#include <iostream>
using namespace std;

//Q.3. Create a menu-driven program.
//Menu:
//1.Check Balance
//2. Deposit Money
//3. Withdraw Money
//4. Exit

class Menu {
	int balance,Amount;
public:
	Menu(){
	 balance = 1000;
	};

    public:	
	void checkbalance(){
		cout << "Balance is :"<< "\n";
		cout << balance << "\n";
	};

	void Deposit(){
		cout << "Enter Amount for Deposit : " <<"\n";
		cin >> Amount;
		balance = balance + Amount;
		cout << "Balance after Depositing money is:"<<"\n";
		cout <<  balance << "\n";
		
	};


	void Withdraw(){
		cout << "Enter Amount for Deposit : " <<"\n";
		cin >> Amount;
		if(Amount > balance){
			cout <<"Insuffient Balance!!!"; 
		}else{
		balance = balance - Amount;
		cout << "Balance after Depositing money is:"<<"\n";
		cout << balance << "\n";
		}
	};
 
	void Exit(){
		cout << "Thank You !!!!" << "\n";
    };	


	
	
	
};

	

int main(){
    int option;
	
	Menu M;
	
	cout<< "Choose Following Option :" <<"\n";
	cout << "Enter 1 to check Balance :" << "\n";
	cout << "Enter 2 to Deposit Money : " << "\n";
    cout << "Enter 3 to Withdraw Money : " << "\n";
	cout << "Choose 4 for Exit"<< "\n";
	cin >> option;
	
	switch(option){
	 case 1: 
	 M.checkbalance();
     break;
	 
	 case 2 : 
	 M.Deposit();
	 break;
	 case 3:
	 M.Withdraw();
	 break;

     default : 
     M.Exit();
	 break;
	 
	}
	
	
	
	return 0 ; 
}