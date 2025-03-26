#include <iostream>
#include "USER.h"

using namespace std; 

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
	}


}

void sign_up()
{
	int userCount = 1;



	user us;

	userCount++;

	us.id = 1;

	us.id++;
	

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
	cout << "***---------- welcome to out system :) ----------***  \n";

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