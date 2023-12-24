#include "ManageMenu.h"

using namespace System::IO; // For file input and output

List<ManageMenu^>^ ManageMenu::ReadMenuFromFile()
{
	// Create a (Managed) linked list
	List<ManageMenu^>^ MenuList = gcnew List<ManageMenu^>;
	String^ filelocation = "C:\\Uni Stuff\\Third Semester\\After Mids\\Data Structures and Algorithms\\Final Project\\Data\\Menu.txt";	
	array<String^>^ lines = File::ReadAllLines(filelocation);
	if (!File::Exists(filelocation))
	{
		Console::WriteLine("Error: File does not exist at {0}", filelocation);
		return MenuList; // Return an empty list if the file doesn't exist
	}

	for each (String ^ line in lines) {
		array<String^>^ parts = line->Split('"');
		//Create new object with current items information
		// All skipped array elements have empty spaces. There is probably a better way to do 
		// this but  I don't have the time or patientce to figure that out right now.
		ManageMenu^ menuItem = gcnew ManageMenu( 
			Convert::ToInt32(parts[1]),
			parts[3],
			Convert::ToDouble(parts[5]),
			parts[7],
			parts[9]
		);
		//Add item to the linked list
		MenuList->Add(menuItem);
	}
		return MenuList;

}
