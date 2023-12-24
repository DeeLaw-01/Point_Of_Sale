#include <iostream>
#include <fstream>
#include <istream>
#include "FileHandling.h"
using namespace std;

string FileHandling:: GetData() {
	ifstream DataFile("C:\\Uni Stuff\\Third Semester\\After Mids\\Data Structures and Algorithms\\Final Project\\Data\\Data.txt", ios::app);
    
    if (!DataFile.is_open()) {
        std::cerr << "Error opening the file!" << std::endl;
        return; // Exit with an error code
    }
   

}