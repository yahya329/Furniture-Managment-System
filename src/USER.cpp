#include <iostream>
#include "USER.h"

using namespace std; 

user customer;

bool login(user users)
{
	string user_name;
	string user_pass;

	cout << "input your user name : \t\t\t";

	cin >> user_name;

	cout << "input your password :  \t\t\t";

	cin >> user_pass;

	if (user_name == users.name && user_pass == users.password)
	{
		cout << "login success ! \n" << "welcome " << users.name;

		return true;
	}
	else
	{
		cout << "error !\n try again \n";

		return false;
	}


}

void sign_up()
{

	user us;

	us.id = 1;

	
	cout << "input your name : \n";

	cin >> us.name;

	cout << "input your phone number  : \n";

	cin >> us.phone;
	 
	cout << "input your location :  \n";

	cin >> us.location;

	cout << "create your password :   \n";

	cin >> us.password;

	
	cout << "\n account created successfully :)";

}

void user_interface()
{
	cout << "***---------- welcome to our system :) ----------***  \n";

	int choose;

	cout << "1.login \n 2.sign up \n";

	cin >> choose;

	if (choose == 1)
	{
		//login();
	}
	else if (choose==2)
	{
		sign_up();
	}
	else
	{
		cout << "invalid input :(";
	}
}

void edit_info()
{
}
