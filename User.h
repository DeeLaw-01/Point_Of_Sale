#pragma once
using namespace System;
ref class User
{
private:
	System::String^ username;
	System::String^ password;
public:
	String^ GetUsername();
	void SetUsername(String^ username);
	String^ GetPassword();
	void SetPassword(String^ password);
};



