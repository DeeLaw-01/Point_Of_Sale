#pragma once
#include "TermsAndConditions.h"

bool AcceptedTOS = false;
namespace POS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ModifyMenu
	/// </summary>
	public ref class ModifyMenu : public System::Windows::Forms::Form
	{
	public:
		ModifyMenu(void)
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
		~ModifyMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ MM_TB_ItemPrice;
	protected:

	protected:
	private: System::Windows::Forms::Label^ RegEmp_L_EmployeePassword;
	private: System::Windows::Forms::LinkLabel^ RegEmp_LL_TermsAndConditions;
	private: System::Windows::Forms::CheckBox^ RegEmp_CB_IAgreeTo;
	private: System::Windows::Forms::TextBox^ MM_TB_ItemNumber;

	private: System::Windows::Forms::Label^ MM_L_ItemNumber;


	private: System::Windows::Forms::Button^ RegEmp_BTN_RegisterEmployee;
	private: System::Windows::Forms::Label^ RegEmp_L_EmployeeRegiteration;
	private: System::Windows::Forms::Label^ RegEmp_L_RegisterEmployee;
	private: System::Windows::Forms::Panel^ RegEmp_Panel_CenterPanel;
	private: System::Windows::Forms::Button^ MM_BTN_ChooseImage;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ MM_TB_ItemName;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

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
			this->MM_TB_ItemPrice = (gcnew System::Windows::Forms::TextBox());
			this->RegEmp_L_EmployeePassword = (gcnew System::Windows::Forms::Label());
			this->RegEmp_LL_TermsAndConditions = (gcnew System::Windows::Forms::LinkLabel());
			this->RegEmp_CB_IAgreeTo = (gcnew System::Windows::Forms::CheckBox());
			this->MM_TB_ItemNumber = (gcnew System::Windows::Forms::TextBox());
			this->MM_L_ItemNumber = (gcnew System::Windows::Forms::Label());
			this->RegEmp_BTN_RegisterEmployee = (gcnew System::Windows::Forms::Button());
			this->RegEmp_L_EmployeeRegiteration = (gcnew System::Windows::Forms::Label());
			this->RegEmp_L_RegisterEmployee = (gcnew System::Windows::Forms::Label());
			this->RegEmp_Panel_CenterPanel = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->MM_BTN_ChooseImage = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->MM_TB_ItemName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->RegEmp_Panel_CenterPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// MM_TB_ItemPrice
			// 
			this->MM_TB_ItemPrice->Location = System::Drawing::Point(36, 182);
			this->MM_TB_ItemPrice->Margin = System::Windows::Forms::Padding(4);
			this->MM_TB_ItemPrice->Name = L"MM_TB_ItemPrice";
			this->MM_TB_ItemPrice->Size = System::Drawing::Size(248, 22);
			this->MM_TB_ItemPrice->TabIndex = 18;
			// 
			// RegEmp_L_EmployeePassword
			// 
			this->RegEmp_L_EmployeePassword->AutoSize = true;
			this->RegEmp_L_EmployeePassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegEmp_L_EmployeePassword->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->RegEmp_L_EmployeePassword->Location = System::Drawing::Point(303, 114);
			this->RegEmp_L_EmployeePassword->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->RegEmp_L_EmployeePassword->Name = L"RegEmp_L_EmployeePassword";
			this->RegEmp_L_EmployeePassword->Size = System::Drawing::Size(72, 16);
			this->RegEmp_L_EmployeePassword->TabIndex = 17;
			this->RegEmp_L_EmployeePassword->Text = L"Item Name";
			// 
			// RegEmp_LL_TermsAndConditions
			// 
			this->RegEmp_LL_TermsAndConditions->AutoSize = true;
			this->RegEmp_LL_TermsAndConditions->BackColor = System::Drawing::Color::Transparent;
			this->RegEmp_LL_TermsAndConditions->LinkColor = System::Drawing::Color::Crimson;
			this->RegEmp_LL_TermsAndConditions->Location = System::Drawing::Point(119, 373);
			this->RegEmp_LL_TermsAndConditions->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->RegEmp_LL_TermsAndConditions->Name = L"RegEmp_LL_TermsAndConditions";
			this->RegEmp_LL_TermsAndConditions->Size = System::Drawing::Size(138, 16);
			this->RegEmp_LL_TermsAndConditions->TabIndex = 16;
			this->RegEmp_LL_TermsAndConditions->TabStop = true;
			this->RegEmp_LL_TermsAndConditions->Text = L"Terms and Conditions";
			this->RegEmp_LL_TermsAndConditions->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &ModifyMenu::RegEmp_LL_TermsAndConditions_LinkClicked);
			// 
			// RegEmp_CB_IAgreeTo
			// 
			this->RegEmp_CB_IAgreeTo->AutoSize = true;
			this->RegEmp_CB_IAgreeTo->BackColor = System::Drawing::Color::Transparent;
			this->RegEmp_CB_IAgreeTo->Location = System::Drawing::Point(37, 372);
			this->RegEmp_CB_IAgreeTo->Margin = System::Windows::Forms::Padding(4);
			this->RegEmp_CB_IAgreeTo->Name = L"RegEmp_CB_IAgreeTo";
			this->RegEmp_CB_IAgreeTo->Size = System::Drawing::Size(85, 20);
			this->RegEmp_CB_IAgreeTo->TabIndex = 15;
			this->RegEmp_CB_IAgreeTo->Text = L"I agree to";
			this->RegEmp_CB_IAgreeTo->UseVisualStyleBackColor = false;
			this->RegEmp_CB_IAgreeTo->CheckedChanged += gcnew System::EventHandler(this, &ModifyMenu::RegEmp_CB_IAgreeTo_CheckedChanged);
			// 
			// MM_TB_ItemNumber
			// 
			this->MM_TB_ItemNumber->Location = System::Drawing::Point(37, 134);
			this->MM_TB_ItemNumber->Margin = System::Windows::Forms::Padding(4);
			this->MM_TB_ItemNumber->Name = L"MM_TB_ItemNumber";
			this->MM_TB_ItemNumber->Size = System::Drawing::Size(246, 22);
			this->MM_TB_ItemNumber->TabIndex = 14;
			// 
			// MM_L_ItemNumber
			// 
			this->MM_L_ItemNumber->AutoSize = true;
			this->MM_L_ItemNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MM_L_ItemNumber->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MM_L_ItemNumber->Location = System::Drawing::Point(33, 114);
			this->MM_L_ItemNumber->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->MM_L_ItemNumber->Name = L"MM_L_ItemNumber";
			this->MM_L_ItemNumber->Size = System::Drawing::Size(83, 16);
			this->MM_L_ItemNumber->TabIndex = 13;
			this->MM_L_ItemNumber->Text = L"Item Number";
			// 
			// RegEmp_BTN_RegisterEmployee
			// 
			this->RegEmp_BTN_RegisterEmployee->Location = System::Drawing::Point(411, 372);
			this->RegEmp_BTN_RegisterEmployee->Margin = System::Windows::Forms::Padding(4);
			this->RegEmp_BTN_RegisterEmployee->Name = L"RegEmp_BTN_RegisterEmployee";
			this->RegEmp_BTN_RegisterEmployee->Size = System::Drawing::Size(141, 26);
			this->RegEmp_BTN_RegisterEmployee->TabIndex = 12;
			this->RegEmp_BTN_RegisterEmployee->Text = L"Add Item";
			this->RegEmp_BTN_RegisterEmployee->UseVisualStyleBackColor = true;
			this->RegEmp_BTN_RegisterEmployee->Click += gcnew System::EventHandler(this, &ModifyMenu::RegEmp_BTN_RegisterEmployee_Click);
			// 
			// RegEmp_L_EmployeeRegiteration
			// 
			this->RegEmp_L_EmployeeRegiteration->AutoSize = true;
			this->RegEmp_L_EmployeeRegiteration->ForeColor = System::Drawing::Color::Red;
			this->RegEmp_L_EmployeeRegiteration->Location = System::Drawing::Point(244, 68);
			this->RegEmp_L_EmployeeRegiteration->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->RegEmp_L_EmployeeRegiteration->Name = L"RegEmp_L_EmployeeRegiteration";
			this->RegEmp_L_EmployeeRegiteration->Size = System::Drawing::Size(90, 16);
			this->RegEmp_L_EmployeeRegiteration->TabIndex = 7;
			this->RegEmp_L_EmployeeRegiteration->Text = L"Add New Item";
			// 
			// RegEmp_L_RegisterEmployee
			// 
			this->RegEmp_L_RegisterEmployee->AutoSize = true;
			this->RegEmp_L_RegisterEmployee->BackColor = System::Drawing::Color::Transparent;
			this->RegEmp_L_RegisterEmployee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RegEmp_L_RegisterEmployee->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegEmp_L_RegisterEmployee->ForeColor = System::Drawing::Color::OrangeRed;
			this->RegEmp_L_RegisterEmployee->Location = System::Drawing::Point(146, 8);
			this->RegEmp_L_RegisterEmployee->Margin = System::Windows::Forms::Padding(0);
			this->RegEmp_L_RegisterEmployee->Name = L"RegEmp_L_RegisterEmployee";
			this->RegEmp_L_RegisterEmployee->Size = System::Drawing::Size(290, 59);
			this->RegEmp_L_RegisterEmployee->TabIndex = 1;
			this->RegEmp_L_RegisterEmployee->Text = L"Modify Menu";
			this->RegEmp_L_RegisterEmployee->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// RegEmp_Panel_CenterPanel
			// 
			this->RegEmp_Panel_CenterPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->RegEmp_Panel_CenterPanel->BackColor = System::Drawing::Color::Bisque;
			this->RegEmp_Panel_CenterPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->label3);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->richTextBox1);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->MM_BTN_ChooseImage);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->label2);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->MM_TB_ItemName);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->label1);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->MM_TB_ItemPrice);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->RegEmp_L_EmployeePassword);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->RegEmp_LL_TermsAndConditions);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->RegEmp_CB_IAgreeTo);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->MM_TB_ItemNumber);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->MM_L_ItemNumber);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->RegEmp_BTN_RegisterEmployee);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->RegEmp_L_EmployeeRegiteration);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->RegEmp_L_RegisterEmployee);
			this->RegEmp_Panel_CenterPanel->Location = System::Drawing::Point(37, 30);
			this->RegEmp_Panel_CenterPanel->Margin = System::Windows::Forms::Padding(4);
			this->RegEmp_Panel_CenterPanel->Name = L"RegEmp_Panel_CenterPanel";
			this->RegEmp_Panel_CenterPanel->Size = System::Drawing::Size(577, 440);
			this->RegEmp_Panel_CenterPanel->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(34, 229);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 16);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Item Description";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Location = System::Drawing::Point(36, 248);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(516, 104);
			this->richTextBox1->TabIndex = 23;
			this->richTextBox1->Text = L"";
			// 
			// MM_BTN_ChooseImage
			// 
			this->MM_BTN_ChooseImage->Location = System::Drawing::Point(306, 181);
			this->MM_BTN_ChooseImage->Name = L"MM_BTN_ChooseImage";
			this->MM_BTN_ChooseImage->Size = System::Drawing::Size(123, 23);
			this->MM_BTN_ChooseImage->TabIndex = 22;
			this->MM_BTN_ChooseImage->Text = L"Choose Image";
			this->MM_BTN_ChooseImage->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(303, 162);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 16);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Item Price";
			this->label2->Click += gcnew System::EventHandler(this, &ModifyMenu::label2_Click);
			// 
			// MM_TB_ItemName
			// 
			this->MM_TB_ItemName->Location = System::Drawing::Point(306, 134);
			this->MM_TB_ItemName->Margin = System::Windows::Forms::Padding(4);
			this->MM_TB_ItemName->Name = L"MM_TB_ItemName";
			this->MM_TB_ItemName->Size = System::Drawing::Size(246, 22);
			this->MM_TB_ItemName->TabIndex = 20;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(33, 162);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 16);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Item Price";
			// 
			// ModifyMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->ClientSize = System::Drawing::Size(659, 508);
			this->Controls->Add(this->RegEmp_Panel_CenterPanel);
			this->Name = L"ModifyMenu";
			this->Text = L"ModifyMenu";
			this->RegEmp_Panel_CenterPanel->ResumeLayout(false);
			this->RegEmp_Panel_CenterPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void RegEmp_LL_TermsAndConditions_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	TermsAndConditions^ tas = gcnew TermsAndConditions;
	tas->ShowDialog();
}
private: System::Void RegEmp_CB_IAgreeTo_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	AcceptedTOS = !AcceptedTOS;
}
private: System::Void RegEmp_BTN_RegisterEmployee_Click(System::Object^ sender, System::EventArgs^ e) {
	// If any text box is not filled
	if (String::IsNullOrEmpty(this->MM_TB_ItemName->Text) || String::IsNullOrEmpty(this->MM_TB_ItemPrice->Text) || String::IsNullOrEmpty(this->MM_TB_ItemNumber->Text)) {

	}
}
};
}
