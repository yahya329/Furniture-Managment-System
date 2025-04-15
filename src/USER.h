// ============================
// TASK: USER.h - User Login & Registration
// ============================

/*
- Implement user login functionality:
  - Validate user credentials against stored data.
  - Display appropriate error messages for failed login attempts.
  - Handle incorrect username/password with retries.

- Implement user registration:
  - Collect username and password inputs from the user.
  - Store the username and securely hashed password in a file for persistence.
  - Ensure no duplicate usernames are allowed during registration.

- Implement password security features:
  - Use a simple hashing technique (e.g., SHA-256) to store passwords securely.

- Implement basic error handling:
  - Handle file access errors and invalid data inputs.
*/




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

	string role;

};

void user_interface();

void edit_info();

bool login(user users) ;

void sign_up();