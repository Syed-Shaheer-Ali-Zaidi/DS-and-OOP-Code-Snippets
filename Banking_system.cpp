#include<iostream>
using namespace std;
class Bank
{
	protected:
		float balance;
	public:
		Bank()
		{
			balance=0.0;
		}
		float getBalance()
		{
			return balance;
		}
		setBalance(float balance)
		{
			this->balance+=balance;
		}
		float checkBalance(float amount)
		{
			if(amount>balance)
			{
				cout<<"Error, Insufficient Funds";
			}
			else 
			{
				cout<<"\nAmount has been withdrawn";
			}
		}
};
class BankA : public Bank
{
	public:
		BankA(float balance)
		{
			this->balance=balance;
		}
		float getBalance()
		{
			return balance;
		}
			setBalance(float balance)
		{
			this->balance+=balance;
		}
			float checkBalance(float amount)
		{
			if(amount>balance)
			{
				cout<<"Error, Insufficient Funds";
			}
			else 
			{
				cout<<"\nAmount has been withdrawn";
			}
		}
};
class BankB : public Bank
{
	public:
		BankB(float balance)
		{
			this->balance=balance;
		}
		float getBalance()
		{
			return balance;
		}
			setBalance(float balance)
		{
			this->balance+=balance;
		}
			float checkBalance(float amount)
		{
			if(amount>balance)
			{
				cout<<"Error, Insufficient Funds";
			}
			else 
			{
				cout<<"\nAmount has been withdrawn";
			}
		}
};
class BankC : public Bank
{
	public:
		BankC(float balance)
		{
			this->balance=balance;
		}
		float getBalance()
		{
			return balance;
		}
			setBalance(float balance)
		{
			this->balance+=balance;
		}
			float checkBalance(float amount)
		{
			if(amount>balance)
			{
				cout<<"Error, Insufficient Funds";
			}
			else 
			{
				cout<<"\nAmount has been withdrawn";
			}
		}
};
main()
{
	float amount;
	int choice;
	Bank b;
	BankA b1(1000);
	BankB b2(1500);
	BankC b3(2000);
	cout<<endl<<"Bank A  "<<b1.getBalance();
	cout<<endl<<"Bank B  "<<b2.getBalance();
	cout<<endl<<"Bank C  "<<b3.getBalance()<<endl;
	
	while(1)
	{
	cout<<"Choose a bank"<<endl<<"1:Bank A"<<endl<<"2:Bank B"<<endl<<"3:Bank C"<<endl<<"Choice: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			
			cout<<"1:Deposit money"<<endl<<"2:Withdraw money";
			cin>>choice;
			if(choice==1)
			{
				cout<<"Enter the deposit amount: ";
				cin>>amount;
				b1.setBalance(amount);
				cout<<"Amount successfully deposited";
			}
			else
			{
				cout<<"Enter withdrawal amount: ";
				cin>>amount;
				b1.checkBalance(amount);
			}
			break;
			
		case 2:
			
			cout<<"1:Deposit money"<<endl<<"2:Withdraw money";
			cin>>choice;
			if(choice==1)
			{
				cout<<"Enter the deposit amount: ";
				cin>>amount;
				b2.setBalance(amount);
				cout<<"Amount successfully deposited";
			}
			else
			{
				cout<<"Enter withdrawal amount: ";
				cin>>amount;
				b2.checkBalance(amount);
			}
			break;
			
		case 3:
			
			cout<<"1:Deposit money"<<endl<<"2:Withdraw money";
			cin>>choice;
			if(choice==1)
			{
				cout<<"Enter the deposit amount: ";
				cin>>amount;
				b3.setBalance(amount);
				cout<<"Amount successfully deposited";
			}
			else
			{
				cout<<"Enter withdrawal amount: ";
				cin>>amount;
				b3.checkBalance(amount);
			}
			break;
		default:
			
			cout<<"Wrong Choice";
			exit(1);
	}
	}
}
