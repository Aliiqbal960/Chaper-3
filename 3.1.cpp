//program 3.9
#include<iostream>
using namespace std;
class Customer_Bank{
  
private:
    int a,b,c;
public:
    
    void input_Amount(){
    cout<<"Enter the Amount to Deposit :";
    cin>>a;
    }
    void withdraw_Amount(){
        cout<<"Enter the Withdraw Amount:";
        cin>>b;
    }
   void condition(){
		if(b>a)
    	{
	        cout<<"Withdrawal amount exceeded the Account Balance!"<<endl<<endl;    
    	}
    else if(b<a) {
        c=a-b;
        cout<<"\nYour Remaining Amount is "<<c<<endl<<endl;
        cout<<"Thanks for using Our Bank"<<endl<<endl;       
    }
    else {
    	cout<<"Your balance is : "<<a-b;
	}
}
};
int main()
{	
	int a;
    cout<<"Welcome in Bank!"<<endl<<endl;
    cout<<a;
    Customer_Bank obj;
    obj.input_Amount();
    obj.withdraw_Amount();
    obj.condition();
    
    return 0;
}
