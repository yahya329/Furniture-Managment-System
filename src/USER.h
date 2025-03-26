#pragma once

#include <iostream>

using namespace std;

struct user 
{
	int id;
	string name;
	string password;
	string location;

	int phone;

};

void user_interface();

bool login(user users) ;

void sign_up();