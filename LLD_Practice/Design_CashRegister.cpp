#include <iostream>
using namespace std;

class CashRegister{
private:
    string Name;
    int Total_Cash;
    int Amount_Last_Transaction;
    int Total_Transactions;
    
public:
    CashRegister(string name, int total_cash,int last_transaction,int total_transaction)
    {
        Name = name;
        Total_Cash = total_cash;
        Amount_Last_Transaction = last_transaction;
        Total_Transactions = total_transaction;
    }
    void Transact(int money){
        Total_Cash+=money;
        Total_Transactions++;
        Amount_Last_Transaction = money;
    }
    void Make_Changes(){
        Total_Transactions++;
    }
    void Empty_Out(){
        Total_Cash =0;
        Amount_Last_Transaction=0;
    }
    int Show_Last_Transaction(){
        return Amount_Last_Transaction;
    }
    void Clear_History(){
        Total_Cash =0;
        Amount_Last_Transaction=0;
        Total_Transactions=0;
    }


};
int main(){
    CashRegister obj1 = CashRegister("Register1",0,0,0);
    CashRegister obj2 = CashRegister("Register2",0,0,0);
    obj1.Transact(250);
    cout<<obj1.Show_Last_Transaction()<<endl;
    obj2.Transact(500);
    cout<<obj2.Show_Last_Transaction()<<endl;
}