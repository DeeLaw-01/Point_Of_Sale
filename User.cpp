#pragma once
#include "User.h"
using namespace System;

String^ User::GetUsername()
{
    return username;
}
void User::SetUsername(String^ newUsername)
{
    username = newUsername;
}
String^ User::GetPassword()
{
    return password;
}
void User::SetPassword(String^ newPassword)
{
    password = newPassword;
}

