#include "ManageMenu.h"
#include <fstream>
#include <msclr\marshal_cppstd.h> 
using namespace System::IO; // For file input and output
using namespace System::Windows::Forms;

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

bool ManageMenu::WriteItemToFile(ManageMenu^ newItem)
{

    // Define the file path
    String^ filePath = "C:\\Uni Stuff\\Third Semester\\After Mids\\Data Structures and Algorithms\\Final Project\\Data\\Menu.txt";

    // Convert the managed strings to native std::string
    std::string filePathStr = msclr::interop::marshal_as<std::string>(filePath);

    // Convert the managed strings of the new item to native std::string
	std::string itemNumberStr = msclr::interop::marshal_as<std::string>(newItem->ItemNumber.ToString());
	std::string displayNameStr = msclr::interop::marshal_as<std::string>(newItem->DisplayName->ToString());
	std::string itemCostStr = msclr::interop::marshal_as<std::string>(newItem->ItemCost.ToString());
	std::string itemDescriptionStr = msclr::interop::marshal_as<std::string>(newItem->ItemDescription->ToString());
	std::string imageLocationStr = msclr::interop::marshal_as<std::string>(newItem->ImageLocation->ToString());

    // Open the file in append mode
    std::ofstream menuFile(filePathStr, std::ios::app);

    // Check if the file is open
    if (!menuFile.is_open())
    {
        // Handle the case where the file cannot be opened
        return false;
    }

    // Write the new item's information to the file
    menuFile << "\n" << "\"" << itemNumberStr << "\" "
        << "\"" << displayNameStr << "\" "
        << "\"" << itemCostStr << "\" "
        << "\"" << itemDescriptionStr << "\" "
        << "\"" << imageLocationStr << "\"";

    // Close the file
    menuFile.close();

    // Return true to indicate success
    return true;

}

bool ManageMenu::LogBill(List<Label^>^ labelList, Label^totalLabel)
{
    static int SaleNo = 0;
    // This variable stores the current date and time 
    DateTime^ currentTime = DateTime::Now;

 
    // Specify the file path where you want to log the bill
    String^ filePath = "C:\\Uni Stuff\\Third Semester\\After Mids\\Data Structures and Algorithms\\Final Project\\Data\\BillLog.txt";
    StreamWriter^ sw = gcnew StreamWriter(filePath, true);
    sw->WriteLine("Sale: {0} at {1}\n----------------------------\n\n", ++SaleNo, currentTime);
    sw->Close();
    // Open the file in append mode
    std::ofstream billFile(msclr::interop::marshal_as<std::string>(filePath), std::ios::app);

    // Check if the file is successfully opened
    if (!billFile.is_open())
    {
        // Handle error, e.g., display a message or throw an exception
        return false;
    }
    // Iterate through the list of labels and write their text to the file
    for each (Label ^ label in labelList)
    {
        String^ labelText = label->Text;
        billFile << msclr::interop::marshal_as<std::string>(labelText) << std::endl;
    }

    // Write the total label text to the file
    String^ totalLabelText = totalLabel->Text;
    billFile << "Total: " << msclr::interop::marshal_as<std::string>(totalLabelText) << std::endl;
    billFile << "\n----------------------------\n\n" ;


    // Close the file
    billFile.close();
	return true;
}
