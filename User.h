#pragma once
using namespace System;
ref class User
{
public:
	// Static so it can be accessed without creating an instance. This prevents a future circular dependancy.
	static System::String^ username;
	static System::String^ password;
	
public: 
	static String^ GetUsername();
	static void SetUsername(String^ newUsername);
	static String^ GetPassword();
	static void SetPassword(String^ newPassword);
	
};



