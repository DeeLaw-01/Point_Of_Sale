#pragma once
#include "AuthenticateUser.h"

using namespace System;

bool AuthenticateUser::Login(String^ username, String^ password, bool isAdmin)
{
    // Convert managed strings to native std::string
    std::string usernameStr = msclr::interop::marshal_as<std::string>(username);
    std::string passwordStr = msclr::interop::marshal_as<std::string>(password);
    String^ filePath = "";
    EncryptPassword(password);
    if (isAdmin == false) {
        // Read account information from the file
        filePath = "C:\\Uni Stuff\\Third Semester\\After Mids\\Data Structures and Algorithms\\Final Project\\Data\\EmployeeLogin.txt";
    }
    else if (isAdmin == true) {
        filePath = "C:\\Uni Stuff\\Third Semester\\After Mids\\Data Structures and Algorithms\\Final Project\\Data\\AdminLogin.txt";
    }

    if (!File::Exists(filePath)) {
        // Handle file not found error
        return false;
    }
    // Iterates over all username and passwords in the file path to check if input username and password matches with an existing username and password
    array<String^>^ lines = File::ReadAllLines(filePath);

    for each (String ^ line in lines) {
        // Split the line into username and password
        array<String^>^ parts = line->Split(' ');
        if (parts->Length == 2 && parts[0] == username && parts[1] == password) {
            // Username and password match
            return true;
        }
    }
    // User not found:
    return false;
}

bool AuthenticateUser::Register(String^ username, String^ password)
{
    // Use a relative path or read the file path from a configuration file
    String^ filePath = "C:\\Uni Stuff\\Third Semester\\After Mids\\Data Structures and Algorithms\\Final Project\\Data\\EmployeeLogin.txt";
    EncryptPassword(password);
    // Open the file in append mode (Creates or adds to the end of the filepath)
    std::ofstream userFile(msclr::interop::marshal_as<std::string>(filePath), std::ios::app);
    // If file is not open, throws error and returns false
    if (!userFile.is_open()) {
        MessageBox::Show("Could not open file at location " + filePath, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return false;
    }
    // Write Username space then password to the filepath
    userFile << "\n" << msclr::interop::marshal_as<std::string>(username) << " " << msclr::interop::marshal_as<std::string>(password);
    return true;

}
///Returns if hit on username for both admin and employee
bool AuthenticateUser::MatchesDatabase(String^ username, bool isAdmin) {
    std::string usernameStr = msclr::interop::marshal_as<std::string>(username);
    String^ filePath = "";

    if (isAdmin == false) {
        // Read account information from the file
        filePath = "C:\\Uni Stuff\\Third Semester\\After Mids\\Data Structures and Algorithms\\Final Project\\Data\\EmployeeLogin.txt";
    }
    else if (isAdmin == true) {
        filePath = "C:\\Uni Stuff\\Third Semester\\After Mids\\Data Structures and Algorithms\\Final Project\\Data\\AdminLogin.txt";
    }

    if (!File::Exists(filePath)) {
        // Handle file not found error
        return false;
    }
    // Iterates over all username and passwords in the file path to check if input username and password matches with an existing username and password
    array<String^>^ lines = File::ReadAllLines(filePath);

    for each (String ^ line in lines) {
        // Split the line into username and password
        array<String^>^ parts = line->Split(' ');

        if (parts->Length == 2 && parts[0] == username) {
            // Username  match
            return true;
        }
    }
    return false;
}

//inline bool AuthenticateUser::AutenticatePassword(String^ username, String^ password)
//{   
//    std::string passwordStr = msclr::interop::marshal_as<std::string>(password);
//    std::string usernameStr = msclr::interop::marshal_as<std::string>(username);
//
//    for (char currentChar : passwordStr) {
//       // if(currentChar != NULL && currentChar != )
//    }
//    return false;
//}

inline bool AuthenticateUser::UpdatePassword(String^ username, String^ newpassword)
{
    String^ filePath = "C:\\Uni Stuff\\Third Semester\\After Mids\\Data Structures and Algorithms\\Final Project\\Data\\EmployeeLogin.txt";
    EncryptPassword(newpassword);
    // Read all lines from the file
    array<String^>^ lines = File::ReadAllLines(filePath);

    // Iterate over each line in the file
    for (int i = 0; i < lines->Length; ++i) {
        // Split the line into parts using space as a delimiter
        array<String^>^ parts = lines[i]->Split(' ');

        // Check if the line has the correct number of parts and the username matches
        if (parts->Length == 2 && parts[0] == username) {
            // Override the password with the new password
            parts[1] = newpassword;

            // Reconstruct the line with the updated password
            lines[i] = String::Format("{0} {1}", parts[0], parts[1]);

            // Output a message or log the change
            Console::WriteLine("Password for {0} has been overridden with: {1}", username, newpassword);
            // Break out of the loop since we found the matching line
            break;
        }
    }

    // Write the modified content back to the file
    File::WriteAllLines(filePath, lines);
    return true;
}

inline String^ AuthenticateUser::EncryptPassword(String^ password)
{
    std::string Spassword = msclr::interop::marshal_as<std::string>(password);
    for (int i = 0; i < Spassword.length(); ++i) {
        Spassword[i] = static_cast<char>(Spassword[i] + 3);
    }
    return msclr::interop::marshal_as<String^>(Spassword);
}

inline void AuthenticateUser::Loguser(String^ username)
{
    // This variable stores the current date and time 
    DateTime^ currentTime = DateTime::Now;
    String^ logFilePath = "C:\\Uni Stuff\\Third Semester\\After Mids\\Data Structures and Algorithms\\Final Project\\Data\\LoginLog.txt";
    // Open the log file in append mode
    StreamWriter^ sw = gcnew StreamWriter(logFilePath, true);

    // Write the log entry to the file
    sw->WriteLine("Username: {0}, Login Time: {1} \n", username, currentTime);

    // Close the StreamWriter
    sw->Close();



}