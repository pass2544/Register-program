#include<iostream>
#include<string>
using namespace std;
int main()
{
	char ch;
	string id,pw;
	do {
		cout << "/////////////MENU/////////////\n";
		cout << "1.Register\n";
		cout << "2.Login\n";
		cout << "Q.Exit Program\n";
		cout << "______________________________\n";
		cout << "Enter menu : ";
		cin >> ch;
		if(ch=='1')
		{
			cout << "Input username : ";
			cin >> id;
			cout << "Input password : ";
			cin >> pw;
		}
		else if(ch=='2')
		{
			string id1,pw1;
			cout << "*************LOGIN************\n";
			cout << "Input username : ";
			cin >> id1;
			cout << "Input password : ";
			cin >> pw1;
			if(id == id1 && pw == pw1)
			{
				cout << "Username or Password Correct ^__^\n";
			}
			else 
			{
				cout << "!!!!Username or Password incorrect Please try again!!!!\n";
			}
		}
	}
	while(ch != 'q' && ch != 'Q');
	cout << "Exit program......\n";
}
