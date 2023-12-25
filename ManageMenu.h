#pragma once
#include <list>
#include <msclr\marshal_cppstd.h> 
#include <iostream>
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
ref class ManageMenu
{
public:
    int ItemNumber;
    String^ DisplayName;
    double ItemCost;
    String^ ItemDescription;
    String^ ImageLocation;
    ManageMenu() {
    
    }
    ManageMenu(int itemNumber, String^ displayName, double itemCost, String^ itemDescription, String^ imageLocation) {
        ItemNumber = itemNumber;
        DisplayName = displayName;
        ItemCost = itemCost;
        ItemDescription = itemDescription;
        ImageLocation = imageLocation;
    }
public:
    static List<ManageMenu^>^ ReadMenuFromFile(); // function returns a linked list of objects
    static bool WriteItemToFile(ManageMenu^);
    static bool LogBill(List<Label^>^, Label^);
};
