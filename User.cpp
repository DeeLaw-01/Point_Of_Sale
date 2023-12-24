#pragma once
#include "User.h"
using namespace System;

String^ User::GetUsername()
{
    return this->username;
}
void User::SetUsername(String^ username)
{
    this->username = username;
}
String^ User::GetPassword()
{
    return this->password;
}
void User::SetPassword(String^ passwor)
{
    this->password = password;
}

