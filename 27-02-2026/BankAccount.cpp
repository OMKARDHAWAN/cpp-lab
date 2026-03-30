#include <iostream>
using namespace std;
class BankAction{
 int accno , balance;
 public: 
 
 void accept(){
  cout << "Enter Account no: \n";
  cin >> accno;
  cout << "Enter Balance : \n";
  cin >> balance;
 }
 
 void Display(){
 cout << "Accout no is : " << accno << "\n" << "balance is : " << balance <<"\n";
 }
 
 void Withdraw(int money){
   if(balance > money){
   balance = balance - money;
   cout << "Remaing balance is : " << balance << "\n";
   }else{
   cout << "Insuffient balance ,Please Deposit money\n" ;
   }
 }
 
 void Deposit(int money){
    balance += money;
	
    cout << "Money deposited SuceessFully!!!\n";
    cout << "Balance is : " << balance;	
 } 
  
  
 };

int main(){
 BankAction A1;
 A1.accept();
 A1.Display();
 A1.Withdraw(500);
 A1.Deposit(1000); 
 return 0; 
}