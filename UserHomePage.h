#pragma once
#include "ManageMenu.h"
#include "list"
#include <map>
#include "User.h"
namespace POS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for UserHomePage
	/// </summary>
	public ref class UserHomePage : public System::Windows::Forms::Form
	{
	public:
		UserHomePage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserHomePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ UHS_Panel_ItemMenu;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::FlowLayoutPanel^ UHP_Panel_Bill;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ RegEmp_L_RegisterEmployee;







	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::Label^ UHP_L_Price;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ UHP_Panel_CheckOutPage;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ RegEmp_L_EmployeeRegiteration;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ Employeename;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ Finish;
	private: System::Windows::Forms::Button^ PrintButton;
	private: System::Windows::Forms::Panel^ panel3;







	protected:








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserHomePage::typeid));
			this->UHS_Panel_ItemMenu = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->UHP_L_Price = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->UHP_Panel_Bill = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->RegEmp_L_RegisterEmployee = (gcnew System::Windows::Forms::Label());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->UHP_Panel_CheckOutPage = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Finish = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->PrintButton = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Employeename = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->RegEmp_L_EmployeeRegiteration = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->UHP_Panel_CheckOutPage->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// UHS_Panel_ItemMenu
			// 
			this->UHS_Panel_ItemMenu->AutoScroll = true;
			this->UHS_Panel_ItemMenu->BackColor = System::Drawing::Color::WhiteSmoke;
			this->UHS_Panel_ItemMenu->Location = System::Drawing::Point(3, 68);
			this->UHS_Panel_ItemMenu->Name = L"UHS_Panel_ItemMenu";
			this->UHS_Panel_ItemMenu->Size = System::Drawing::Size(800, 503);
			this->UHS_Panel_ItemMenu->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(178, 523);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Check Out";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UserHomePage::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->UHP_L_Price);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->UHP_Panel_Bill);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(824, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(292, 588);
			this->panel1->TabIndex = 8;
			// 
			// UHP_L_Price
			// 
			this->UHP_L_Price->AutoSize = true;
			this->UHP_L_Price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UHP_L_Price->Location = System::Drawing::Point(65, 520);
			this->UHP_L_Price->Name = L"UHP_L_Price";
			this->UHP_L_Price->Size = System::Drawing::Size(20, 24);
			this->UHP_L_Price->TabIndex = 8;
			this->UHP_L_Price->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 520);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 24);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Total:";
			// 
			// UHP_Panel_Bill
			// 
			this->UHP_Panel_Bill->AutoScroll = true;
			this->UHP_Panel_Bill->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->UHP_Panel_Bill->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->UHP_Panel_Bill->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->UHP_Panel_Bill->Location = System::Drawing::Point(6, 15);
			this->UHP_Panel_Bill->Name = L"UHP_Panel_Bill";
			this->UHP_Panel_Bill->Size = System::Drawing::Size(267, 488);
			this->UHP_Panel_Bill->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->RegEmp_L_RegisterEmployee);
			this->panel2->Controls->Add(this->UHS_Panel_ItemMenu);
			this->panel2->Location = System::Drawing::Point(12, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(806, 588);
			this->panel2->TabIndex = 9;
			// 
			// RegEmp_L_RegisterEmployee
			// 
			this->RegEmp_L_RegisterEmployee->AutoSize = true;
			this->RegEmp_L_RegisterEmployee->BackColor = System::Drawing::Color::Transparent;
			this->RegEmp_L_RegisterEmployee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RegEmp_L_RegisterEmployee->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegEmp_L_RegisterEmployee->ForeColor = System::Drawing::Color::OrangeRed;
			this->RegEmp_L_RegisterEmployee->Location = System::Drawing::Point(306, 15);
			this->RegEmp_L_RegisterEmployee->Margin = System::Windows::Forms::Padding(0);
			this->RegEmp_L_RegisterEmployee->Name = L"RegEmp_L_RegisterEmployee";
			this->RegEmp_L_RegisterEmployee->Size = System::Drawing::Size(225, 47);
			this->RegEmp_L_RegisterEmployee->TabIndex = 2;
			this->RegEmp_L_RegisterEmployee->Text = L"Point Of Sale";
			this->RegEmp_L_RegisterEmployee->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &UserHomePage::printDocument1_PrintPage);
			// 
			// UHP_Panel_CheckOutPage
			// 
			this->UHP_Panel_CheckOutPage->Controls->Add(this->panel3);
			this->UHP_Panel_CheckOutPage->Controls->Add(this->RegEmp_L_EmployeeRegiteration);
			this->UHP_Panel_CheckOutPage->Controls->Add(this->label3);
			this->UHP_Panel_CheckOutPage->Location = System::Drawing::Point(12, 12);
			this->UHP_Panel_CheckOutPage->Name = L"UHP_Panel_CheckOutPage";
			this->UHP_Panel_CheckOutPage->Size = System::Drawing::Size(1104, 591);
			this->UHP_Panel_CheckOutPage->TabIndex = 11;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->flowLayoutPanel1);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->Finish);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->PrintButton);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->Employeename);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Location = System::Drawing::Point(50, 65);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1014, 506);
			this->panel3->TabIndex = 19;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(15, 70);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(359, 416);
			this->flowLayoutPanel1->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(142, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Itemized Bill";
			// 
			// Finish
			// 
			this->Finish->Location = System::Drawing::Point(827, 434);
			this->Finish->Name = L"Finish";
			this->Finish->Size = System::Drawing::Size(156, 45);
			this->Finish->TabIndex = 18;
			this->Finish->Text = L"Finish";
			this->Finish->UseVisualStyleBackColor = true;
			this->Finish->Click += gcnew System::EventHandler(this, &UserHomePage::Finish_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(407, 97);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Grand Total:";
			// 
			// PrintButton
			// 
			this->PrintButton->Location = System::Drawing::Point(656, 434);
			this->PrintButton->Name = L"PrintButton";
			this->PrintButton->Size = System::Drawing::Size(156, 45);
			this->PrintButton->TabIndex = 17;
			this->PrintButton->Text = L"Print Bill";
			this->PrintButton->UseVisualStyleBackColor = true;
			this->PrintButton->Click += gcnew System::EventHandler(this, &UserHomePage::PrintButton_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(510, 97);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 17);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Grand Total:";
			// 
			// Employeename
			// 
			this->Employeename->AutoSize = true;
			this->Employeename->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Employeename->Location = System::Drawing::Point(510, 181);
			this->Employeename->Name = L"Employeename";
			this->Employeename->Size = System::Drawing::Size(67, 17);
			this->Employeename->TabIndex = 14;
			this->Employeename->Text = L"Employee";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(407, 181);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 17);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Catered By:";
			// 
			// RegEmp_L_EmployeeRegiteration
			// 
			this->RegEmp_L_EmployeeRegiteration->AutoSize = true;
			this->RegEmp_L_EmployeeRegiteration->ForeColor = System::Drawing::Color::Red;
			this->RegEmp_L_EmployeeRegiteration->Location = System::Drawing::Point(525, 49);
			this->RegEmp_L_EmployeeRegiteration->Name = L"RegEmp_L_EmployeeRegiteration";
			this->RegEmp_L_EmployeeRegiteration->Size = System::Drawing::Size(91, 13);
			this->RegEmp_L_EmployeeRegiteration->TabIndex = 9;
			this->RegEmp_L_EmployeeRegiteration->Text = L"Finalize Checkout";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::OrangeRed;
			this->label3->Location = System::Drawing::Point(413, 0);
			this->label3->Margin = System::Windows::Forms::Padding(0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(324, 50);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Check-Out Screen";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// UserHomePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1130, 614);
			this->Controls->Add(this->UHP_Panel_CheckOutPage);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"UserHomePage";
			this->Text = L"UserHomePage";
			this->Load += gcnew System::EventHandler(this, &UserHomePage::UserHomePage_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->UHP_Panel_CheckOutPage->ResumeLayout(false);
			this->UHP_Panel_CheckOutPage->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
	public: 
		int CheckforChange = 0;
		int i = 0;
		List<ManageMenu^>^ MenuList = gcnew List<ManageMenu^>;
		// Create a list of items added to the final bill
		List<Label^>^ ItemsAdded = gcnew List<Label^>;
	
		
#pragma endregion
	private: System::Void UserHomePage_Load(System::Object^ sender, System::EventArgs^ e) {
		panel1->Visible = true;
		panel2->Visible = true;
		UHP_Panel_CheckOutPage->Visible = false;
		//List<ManageMenu^>^ MenuList = gcnew List<ManageMenu^>;
		//Get a list of all items in the menu
		// Calling Static function without creating an instance variable.. Optimization goes so hard
		MenuList = ManageMenu::ReadMenuFromFile();
		// The Condition on top checks if there have been any changes to the Menu.txt file. If there are no 
		// changes, the function doesn't re-render all the image files.
		if (CheckforChange == MenuList->Count) {
			return;
		}
		CheckforChange = MenuList->Count;
		// If MenuList has nothing, show empty list error.
		if (MenuList->Count == 0) {
			MessageBox::Show("Empty List");
		}
		//Iterate over each item in the list and add to the panel
		for each (ManageMenu ^ MenuItem in MenuList) {
			// Panel
			Panel^ ParentPanel = gcnew Panel(); // Create a new Panel
			ParentPanel->BackColor = System::Drawing::Color::IndianRed;
			ParentPanel->Location = System::Drawing::Point(4, 4);
			ParentPanel->Margin = System::Windows::Forms::Padding(4);
			ParentPanel->Name = L"ParentPanel";
			ParentPanel->Size = System::Drawing::Size(255, 199);
			ParentPanel->TabIndex = 2;
			// Label
			Label^ ItemName = gcnew Label; //Create new Label for menu itme name
			ItemName->Text = MenuItem->DisplayName; //Give it a name
			ItemName->AutoSize = true;
			ItemName->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			ItemName->Location = System::Drawing::Point(5, 123);
			ItemName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			ItemName->Name = L"Label" + i;
			ItemName->Size = System::Drawing::Size(72, 16);
			ItemName->TabIndex = 1;
			ItemName->Text = MenuItem->DisplayName;
			ParentPanel->Controls->Add(ItemName);

			//Rich Text Box
			RichTextBox^ ItemDescription = gcnew RichTextBox;
			ItemDescription->Text = MenuItem->ItemDescription;
			ItemDescription->Cursor = System::Windows::Forms::Cursors::Default;
			ItemDescription->Location = System::Drawing::Point(4, 139);
			ItemDescription->Margin = System::Windows::Forms::Padding(4);
			ItemDescription->Name = L"RTB_ItemDescription";
			ItemDescription->ReadOnly = true;
			ItemDescription->Size = System::Drawing::Size(248, 51);
			ItemDescription->TabIndex = 2;
			ItemDescription->Text = MenuItem->ItemDescription;
			ParentPanel->Controls->Add(ItemDescription);

			// Add Button
			Button^ AddButton = gcnew Button;
			AddButton->Location = System::Drawing::Point(229, 4);
			AddButton->Size = System::Drawing::Size(23, 23);
			AddButton->TabIndex = 4;
			AddButton->Text = L"+";
			/// Storing a reference to current menuitem in the button tag property
			AddButton->Tag = MenuItem;
			AddButton->UseVisualStyleBackColor = true;

			// Register event handler for MouseEnter
			//AddButton->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &POS::UserHomePage::OnMouseClick);
			AddButton->Click += gcnew System::EventHandler(this, &UserHomePage::AddButton_Click);
			ParentPanel->Controls->Add(AddButton);

			// Remove Button
			Button^ RemoveButton = gcnew Button;
			RemoveButton->Location = System::Drawing::Point(229, 33);
			RemoveButton->Size = System::Drawing::Size(23, 23);
			RemoveButton->TabIndex = 5;
			RemoveButton->Text = L"-";
			/// Storing a reference to current menuitem in the button tag property
			RemoveButton->Tag = MenuItem;
			RemoveButton->UseVisualStyleBackColor = true;

			// Register event handler for MouseEnter
			RemoveButton->Click += gcnew System::EventHandler(this, &UserHomePage::RemoveButton_Click);
			//RemoveButton->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &POS::UserHomePage::OnMouseClick);
			ParentPanel->Controls->Add(RemoveButton);

			//Picture Box
			PictureBox^ MenuItemPicture = gcnew PictureBox;
			MenuItemPicture->Location = System::Drawing::Point(3, 3);
			MenuItemPicture->Name = L"MenuItemPicture" + i;
			MenuItemPicture->Size = System::Drawing::Size(248, 117);
			MenuItemPicture->TabIndex = 3;
			MenuItemPicture->TabStop = false;
			MenuItemPicture->ImageLocation = MenuItem->ImageLocation;
			// Ensures the same function is called when cursor enters the image (Shows Add and Remove Buttons)

			ParentPanel->Controls->Add(MenuItemPicture);




			// Add Parent Panel to  InnerModifyMenu
			this->UHS_Panel_ItemMenu->Controls->Add(ParentPanel);
		
		}
		
	}

private: System::Void RemoveButton_Click(System::Object^ sender, System::EventArgs^ e) {
	// Cast the sending object back to button to access its tag
	Button^ btn = dynamic_cast<Button^>(sender);
	if (btn != nullptr) {
		// Get Button tag
		ManageMenu^ menuItem = dynamic_cast<ManageMenu^>(btn->Tag);
			// Iterate through the controls in UHP_Panel_Bill
			for each (Control ^ control in UHP_Panel_Bill->Controls) {
				// Check if the control is a Label
				Label^ label = dynamic_cast<Label^>(control);
				if (label != nullptr) {
					// Check if the label's text matches the display name
					if (label->Text == menuItem->DisplayName) {
						// Remove the label from UHP_Panel_Bill
						UHP_Panel_Bill->Controls->Remove(label);
						break;  // Exit the loop since we found and removed the label
					}
				}
			}
			if ((System::Convert::ToDouble(UHP_L_Price->Text) - (menuItem->ItemCost)) < 0) {
				return;
			}
			// Update the total price
			UHP_L_Price->Text = (System::Convert::ToDouble(UHP_L_Price->Text) - (menuItem->ItemCost)).ToString();
	
	}
}


	private: System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = dynamic_cast<Button^>(sender);
		if (btn != nullptr) {
			// Get Button tag
			ManageMenu^ menuItem = dynamic_cast<ManageMenu^>(btn->Tag);
			if (menuItem != nullptr) {
				Label^ DisplayName = gcnew Label;
				DisplayName->Text = menuItem->DisplayName;
				Label^ ItemPrice = gcnew Label;
				UHP_Panel_Bill->Controls->Add(DisplayName);
			}
				UHP_L_Price->Text = (System::Convert::ToDouble(UHP_L_Price->Text) + (menuItem->ItemCost)).ToString();

		}
	}
		   // Checkout Screen
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	for each (Control ^ item in UHP_Panel_Bill->Controls) {
		ItemsAdded->Add(dynamic_cast<Label^> (item));
		flowLayoutPanel1->Controls->Add(item);
		
	}
	User^ CurrUser = gcnew User;
	UHP_Panel_CheckOutPage->Visible = true;
	panel1->Visible = false;
	panel2->Visible = false;
	//MessageBox::Show(CurrUser->GetUsername());
	Employeename->Text = CurrUser->GetUsername();
	label6->Text = UHP_L_Price->Text;
	UHP_Panel_CheckOutPage->Visible = true;


}
	   // Print Helper function
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	// Draw the captured bitmap onto the print page
	e->Graphics->DrawImage(bitmap, 0, 0);
}
	   // On pressing finish
private: System::Void Finish_Click(System::Object^ sender, System::EventArgs^ e) {
	bool logged = ManageMenu::LogBill(ItemsAdded,label6);
	this->Close();
}
	   // On pressing print bill
	   System::Drawing::Bitmap^ bitmap; // Creating a bitmap

private: System::Void PrintButton_Click(System::Object^ sender, System::EventArgs^ e) {
	// Get the client size of the panel3
	System::Drawing::Size panelSize = panel3->ClientSize;

	// Create a bitmap with the specified width and height
	bitmap = gcnew System::Drawing::Bitmap(panelSize.Width, panelSize.Height);

	// Create a Graphics object from the bitmap for drawing operations
	Graphics^ bitmapGraphics = Graphics::FromImage(bitmap);

	// Capture the content of the panel3 to the bitmap
	panel3->DrawToBitmap(bitmap, System::Drawing::Rectangle(0, 0, panelSize.Width, panelSize.Height));

	// Dispose of the Graphics object
	delete bitmapGraphics;

	// Show the print preview dialog
	printPreviewDialog1->Document = printDocument1;
	printPreviewDialog1->ShowDialog();
}

};
}
