#pragma once
#include "ManageMenu.h"
#include "ModifyMenu.h"
namespace POS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminHomeScreen
	/// </summary>
	public ref class AdminHomeScreen : public System::Windows::Forms::Form
	{
	public:
		AdminHomeScreen(void)
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
		~AdminHomeScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ AHS_Panel_Parent;

	protected:

	private: System::Windows::Forms::Panel^ AHS_Panel_Controls;
	private: System::Windows::Forms::Panel^ AHS_Panel_UsernamePanel;
	private: System::Windows::Forms::PictureBox^ AHS_PB_UserImage;
	private: System::Windows::Forms::Label^ AHS_L_Username;
	private: System::Windows::Forms::Button^ AHS_BTN_ModifyMenu;
	private: System::Windows::Forms::Button^ AHS_BTN_ModifyUser;


	private: System::Windows::Forms::FlowLayoutPanel^ AHS_Panel_Bill;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Windows::Forms::FlowLayoutPanel^ AHS_Panel_InnerModifyMenu;
	private: System::Windows::Forms::Panel^ AHS_Panel_OuterModifyMenu;
	private: System::Windows::Forms::Label^ AHS_L_ModifyMenu;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminHomeScreen::typeid));
			this->AHS_Panel_Parent = (gcnew System::Windows::Forms::Panel());
			this->AHS_Panel_Bill = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->AHS_Panel_Controls = (gcnew System::Windows::Forms::Panel());
			this->AHS_Panel_UsernamePanel = (gcnew System::Windows::Forms::Panel());
			this->AHS_PB_UserImage = (gcnew System::Windows::Forms::PictureBox());
			this->AHS_L_Username = (gcnew System::Windows::Forms::Label());
			this->AHS_BTN_ModifyMenu = (gcnew System::Windows::Forms::Button());
			this->AHS_BTN_ModifyUser = (gcnew System::Windows::Forms::Button());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->AHS_Panel_InnerModifyMenu = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->AHS_Panel_OuterModifyMenu = (gcnew System::Windows::Forms::Panel());
			this->AHS_L_ModifyMenu = (gcnew System::Windows::Forms::Label());
			this->AHS_Panel_Parent->SuspendLayout();
			this->AHS_Panel_Controls->SuspendLayout();
			this->AHS_Panel_UsernamePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AHS_PB_UserImage))->BeginInit();
			this->AHS_Panel_InnerModifyMenu->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->AHS_Panel_OuterModifyMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// AHS_Panel_Parent
			// 
			this->AHS_Panel_Parent->BackColor = System::Drawing::Color::Transparent;
			this->AHS_Panel_Parent->Controls->Add(this->AHS_Panel_Bill);
			this->AHS_Panel_Parent->Controls->Add(this->AHS_Panel_Controls);
			this->AHS_Panel_Parent->Location = System::Drawing::Point(-2, -3);
			this->AHS_Panel_Parent->Name = L"AHS_Panel_Parent";
			this->AHS_Panel_Parent->Size = System::Drawing::Size(927, 555);
			this->AHS_Panel_Parent->TabIndex = 0;
			// 
			// AHS_Panel_Bill
			// 
			this->AHS_Panel_Bill->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->AHS_Panel_Bill->Location = System::Drawing::Point(724, 3);
			this->AHS_Panel_Bill->Name = L"AHS_Panel_Bill";
			this->AHS_Panel_Bill->Size = System::Drawing::Size(200, 537);
			this->AHS_Panel_Bill->TabIndex = 5;
			// 
			// AHS_Panel_Controls
			// 
			this->AHS_Panel_Controls->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->AHS_Panel_Controls->Controls->Add(this->AHS_Panel_UsernamePanel);
			this->AHS_Panel_Controls->Controls->Add(this->AHS_BTN_ModifyMenu);
			this->AHS_Panel_Controls->Controls->Add(this->AHS_BTN_ModifyUser);
			this->AHS_Panel_Controls->Location = System::Drawing::Point(2, 75);
			this->AHS_Panel_Controls->Margin = System::Windows::Forms::Padding(2);
			this->AHS_Panel_Controls->Name = L"AHS_Panel_Controls";
			this->AHS_Panel_Controls->Size = System::Drawing::Size(163, 396);
			this->AHS_Panel_Controls->TabIndex = 3;
			// 
			// AHS_Panel_UsernamePanel
			// 
			this->AHS_Panel_UsernamePanel->Controls->Add(this->AHS_PB_UserImage);
			this->AHS_Panel_UsernamePanel->Controls->Add(this->AHS_L_Username);
			this->AHS_Panel_UsernamePanel->Location = System::Drawing::Point(6, 262);
			this->AHS_Panel_UsernamePanel->Margin = System::Windows::Forms::Padding(2);
			this->AHS_Panel_UsernamePanel->Name = L"AHS_Panel_UsernamePanel";
			this->AHS_Panel_UsernamePanel->Size = System::Drawing::Size(150, 80);
			this->AHS_Panel_UsernamePanel->TabIndex = 10;
			// 
			// AHS_PB_UserImage
			// 
			this->AHS_PB_UserImage->Location = System::Drawing::Point(0, 27);
			this->AHS_PB_UserImage->Margin = System::Windows::Forms::Padding(2);
			this->AHS_PB_UserImage->Name = L"AHS_PB_UserImage";
			this->AHS_PB_UserImage->Size = System::Drawing::Size(65, 51);
			this->AHS_PB_UserImage->TabIndex = 10;
			this->AHS_PB_UserImage->TabStop = false;
			// 
			// AHS_L_Username
			// 
			this->AHS_L_Username->AutoSize = true;
			this->AHS_L_Username->Location = System::Drawing::Point(70, 45);
			this->AHS_L_Username->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->AHS_L_Username->Name = L"AHS_L_Username";
			this->AHS_L_Username->Size = System::Drawing::Size(55, 13);
			this->AHS_L_Username->TabIndex = 9;
			this->AHS_L_Username->Text = L"Username";
			// 
			// AHS_BTN_ModifyMenu
			// 
			this->AHS_BTN_ModifyMenu->BackColor = System::Drawing::Color::Transparent;
			this->AHS_BTN_ModifyMenu->Location = System::Drawing::Point(8, 187);
			this->AHS_BTN_ModifyMenu->Margin = System::Windows::Forms::Padding(2);
			this->AHS_BTN_ModifyMenu->Name = L"AHS_BTN_ModifyMenu";
			this->AHS_BTN_ModifyMenu->Size = System::Drawing::Size(148, 38);
			this->AHS_BTN_ModifyMenu->TabIndex = 3;
			this->AHS_BTN_ModifyMenu->Text = L"Modify Menu";
			this->AHS_BTN_ModifyMenu->UseVisualStyleBackColor = false;
			this->AHS_BTN_ModifyMenu->Click += gcnew System::EventHandler(this, &AdminHomeScreen::AHS_BTN_ModifyMenu_Click);
			// 
			// AHS_BTN_ModifyUser
			// 
			this->AHS_BTN_ModifyUser->BackColor = System::Drawing::Color::Transparent;
			this->AHS_BTN_ModifyUser->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AHS_BTN_ModifyUser->Location = System::Drawing::Point(8, 137);
			this->AHS_BTN_ModifyUser->Margin = System::Windows::Forms::Padding(2);
			this->AHS_BTN_ModifyUser->Name = L"AHS_BTN_ModifyUser";
			this->AHS_BTN_ModifyUser->Size = System::Drawing::Size(148, 37);
			this->AHS_BTN_ModifyUser->TabIndex = 7;
			this->AHS_BTN_ModifyUser->Text = L"Modify User";
			this->AHS_BTN_ModifyUser->UseVisualStyleBackColor = false;
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// AHS_Panel_InnerModifyMenu
			// 
			this->AHS_Panel_InnerModifyMenu->AutoScroll = true;
			this->AHS_Panel_InnerModifyMenu->BackColor = System::Drawing::Color::WhiteSmoke;
			this->AHS_Panel_InnerModifyMenu->Controls->Add(this->panel1);
			this->AHS_Panel_InnerModifyMenu->Location = System::Drawing::Point(0, 72);
			this->AHS_Panel_InnerModifyMenu->Name = L"AHS_Panel_InnerModifyMenu";
			this->AHS_Panel_InnerModifyMenu->Size = System::Drawing::Size(548, 462);
			this->AHS_Panel_InnerModifyMenu->TabIndex = 4;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::IndianRed;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(255, 199);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(12, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(230, 37);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Add New Item";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(248, 192);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &AdminHomeScreen::pictureBox1_Click);
			// 
			// AHS_Panel_OuterModifyMenu
			// 
			this->AHS_Panel_OuterModifyMenu->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->AHS_Panel_OuterModifyMenu->Controls->Add(this->AHS_L_ModifyMenu);
			this->AHS_Panel_OuterModifyMenu->Controls->Add(this->AHS_Panel_InnerModifyMenu);
			this->AHS_Panel_OuterModifyMenu->Location = System::Drawing::Point(168, 0);
			this->AHS_Panel_OuterModifyMenu->Name = L"AHS_Panel_OuterModifyMenu";
			this->AHS_Panel_OuterModifyMenu->Size = System::Drawing::Size(548, 534);
			this->AHS_Panel_OuterModifyMenu->TabIndex = 6;
			// 
			// AHS_L_ModifyMenu
			// 
			this->AHS_L_ModifyMenu->AutoSize = true;
			this->AHS_L_ModifyMenu->BackColor = System::Drawing::Color::Transparent;
			this->AHS_L_ModifyMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AHS_L_ModifyMenu->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AHS_L_ModifyMenu->ForeColor = System::Drawing::Color::OrangeRed;
			this->AHS_L_ModifyMenu->Location = System::Drawing::Point(99, 0);
			this->AHS_L_ModifyMenu->Name = L"AHS_L_ModifyMenu";
			this->AHS_L_ModifyMenu->Size = System::Drawing::Size(357, 69);
			this->AHS_L_ModifyMenu->TabIndex = 5;
			this->AHS_L_ModifyMenu->Text = L"MODIFY MENU";
			this->AHS_L_ModifyMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AdminHomeScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(924, 549);
			this->Controls->Add(this->AHS_Panel_OuterModifyMenu);
			this->Controls->Add(this->AHS_Panel_Parent);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"AdminHomeScreen";
			this->Text = L"AdminHomeScreen";
			this->AHS_Panel_Parent->ResumeLayout(false);
			this->AHS_Panel_Controls->ResumeLayout(false);
			this->AHS_Panel_UsernamePanel->ResumeLayout(false);
			this->AHS_Panel_UsernamePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AHS_PB_UserImage))->EndInit();
			this->AHS_Panel_InnerModifyMenu->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->AHS_Panel_OuterModifyMenu->ResumeLayout(false);
			this->AHS_Panel_OuterModifyMenu->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void AHS_BTN_ModifyMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	// Set Visibility to true
	AHS_Panel_OuterModifyMenu->Visible = true;
	int CheckforChange = 0;
	List<ManageMenu^>^ MenuList = gcnew List<ManageMenu^>;
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
		int i = 0;
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
		ItemName->Name = L"Label"+i;
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
		AddButton->Name = L"AddButton";
		AddButton->Size = System::Drawing::Size(23, 23);
		AddButton->TabIndex = 4;
		AddButton->Text = L"+";
		AddButton->UseVisualStyleBackColor = true;
		AddButton->Visible = true;
		ParentPanel->Controls->Add(AddButton);

		// Remove Button
		Button^ RemoveButton = gcnew Button;
		RemoveButton->Location = System::Drawing::Point(229, 33);
		RemoveButton->Name = L"RemoveButton";
		RemoveButton->Size = System::Drawing::Size(23, 23);
		RemoveButton->TabIndex = 5;
		RemoveButton->Text = L"-";
		RemoveButton->UseVisualStyleBackColor = true;
		RemoveButton->Visible = true;
		ParentPanel->Controls->Add(RemoveButton);

		//Picture Box
		PictureBox^ MenuItemPicture = gcnew PictureBox;
		MenuItemPicture->Location = System::Drawing::Point(3, 3);
		MenuItemPicture->Name = L"MenuItemPicture"+i;
		MenuItemPicture->Size = System::Drawing::Size(248, 117);
		MenuItemPicture->TabIndex = 3;
		MenuItemPicture->TabStop = false;
		MenuItemPicture->ImageLocation = MenuItem->ImageLocation;
		// Ensures the same function is called when cursor enters the image (Shows Add and Remove Buttons)
		
		ParentPanel->Controls->Add(MenuItemPicture);


		

		// Add Parent Panel to  InnerModifyMenu
		this->AHS_Panel_InnerModifyMenu->Controls->Add(ParentPanel);
	}
}
// Add new Menu item
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	ModifyMenu^ modifymenu = gcnew ModifyMenu;
	modifymenu->ShowDialog();
}
};
}
