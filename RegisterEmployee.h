#pragma once
#include "AuthenticateUser.h"
#include "TermsAndConditions.h"
bool Reg_AgreeToTerms = false;
namespace POS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegisterEmployee
	/// </summary>
	public ref class RegisterEmployee : public System::Windows::Forms::Form
	{
	public:
		RegisterEmployee(void)
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
		~RegisterEmployee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ RegEmp_Panel_CenterPanel;
	protected:

	private: System::Windows::Forms::LinkLabel^ RegEmp_LL_TermsAndConditions;
	protected:

	private: System::Windows::Forms::CheckBox^ RegEmp_CB_IAgreeTo;

	private: System::Windows::Forms::TextBox^ RegEmp_TB_EmployeeUsername;

	private: System::Windows::Forms::Label^ RegEmp_EmployeeUsername;
	private: System::Windows::Forms::Button^ RegEmp_BTN_RegisterEmployee;



	private: System::Windows::Forms::Label^ RegEmp_L_EmployeeRegiteration;

	private: System::Windows::Forms::Label^ RegEmp_L_RegisterEmployee;
	private: System::Windows::Forms::TextBox^ RegEmp_TB_EmployeePassword;
	private: System::Windows::Forms::Label^ RegEmp_L_EmployeePassword;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterEmployee::typeid));
			this->RegEmp_Panel_CenterPanel = (gcnew System::Windows::Forms::Panel());
			this->RegEmp_TB_EmployeePassword = (gcnew System::Windows::Forms::TextBox());
			this->RegEmp_L_EmployeePassword = (gcnew System::Windows::Forms::Label());
			this->RegEmp_LL_TermsAndConditions = (gcnew System::Windows::Forms::LinkLabel());
			this->RegEmp_CB_IAgreeTo = (gcnew System::Windows::Forms::CheckBox());
			this->RegEmp_TB_EmployeeUsername = (gcnew System::Windows::Forms::TextBox());
			this->RegEmp_EmployeeUsername = (gcnew System::Windows::Forms::Label());
			this->RegEmp_BTN_RegisterEmployee = (gcnew System::Windows::Forms::Button());
			this->RegEmp_L_EmployeeRegiteration = (gcnew System::Windows::Forms::Label());
			this->RegEmp_L_RegisterEmployee = (gcnew System::Windows::Forms::Label());
			this->RegEmp_Panel_CenterPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// RegEmp_Panel_CenterPanel
			// 
			this->RegEmp_Panel_CenterPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->RegEmp_Panel_CenterPanel->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->RegEmp_Panel_CenterPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->RegEmp_TB_EmployeePassword);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->RegEmp_L_EmployeePassword);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->RegEmp_LL_TermsAndConditions);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->RegEmp_CB_IAgreeTo);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->RegEmp_TB_EmployeeUsername);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->RegEmp_EmployeeUsername);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->RegEmp_BTN_RegisterEmployee);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->RegEmp_L_EmployeeRegiteration);
			this->RegEmp_Panel_CenterPanel->Controls->Add(this->RegEmp_L_RegisterEmployee);
			this->RegEmp_Panel_CenterPanel->Location = System::Drawing::Point(96, 26);
			this->RegEmp_Panel_CenterPanel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->RegEmp_Panel_CenterPanel->Name = L"RegEmp_Panel_CenterPanel";
			this->RegEmp_Panel_CenterPanel->Size = System::Drawing::Size(385, 448);
			this->RegEmp_Panel_CenterPanel->TabIndex = 13;
			// 
			// RegEmp_TB_EmployeePassword
			// 
			this->RegEmp_TB_EmployeePassword->Location = System::Drawing::Point(37, 222);
			this->RegEmp_TB_EmployeePassword->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->RegEmp_TB_EmployeePassword->Name = L"RegEmp_TB_EmployeePassword";
			this->RegEmp_TB_EmployeePassword->Size = System::Drawing::Size(313, 22);
			this->RegEmp_TB_EmployeePassword->TabIndex = 18;
			// 
			// RegEmp_L_EmployeePassword
			// 
			this->RegEmp_L_EmployeePassword->AutoSize = true;
			this->RegEmp_L_EmployeePassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegEmp_L_EmployeePassword->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->RegEmp_L_EmployeePassword->Location = System::Drawing::Point(33, 202);
			this->RegEmp_L_EmployeePassword->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->RegEmp_L_EmployeePassword->Name = L"RegEmp_L_EmployeePassword";
			this->RegEmp_L_EmployeePassword->Size = System::Drawing::Size(132, 16);
			this->RegEmp_L_EmployeePassword->TabIndex = 17;
			this->RegEmp_L_EmployeePassword->Text = L"Employee Password";
			// 
			// RegEmp_LL_TermsAndConditions
			// 
			this->RegEmp_LL_TermsAndConditions->AutoSize = true;
			this->RegEmp_LL_TermsAndConditions->BackColor = System::Drawing::Color::Transparent;
			this->RegEmp_LL_TermsAndConditions->LinkColor = System::Drawing::Color::Crimson;
			this->RegEmp_LL_TermsAndConditions->Location = System::Drawing::Point(124, 303);
			this->RegEmp_LL_TermsAndConditions->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->RegEmp_LL_TermsAndConditions->Name = L"RegEmp_LL_TermsAndConditions";
			this->RegEmp_LL_TermsAndConditions->Size = System::Drawing::Size(138, 16);
			this->RegEmp_LL_TermsAndConditions->TabIndex = 16;
			this->RegEmp_LL_TermsAndConditions->TabStop = true;
			this->RegEmp_LL_TermsAndConditions->Text = L"Terms and Conditions";
			this->RegEmp_LL_TermsAndConditions->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterEmployee::RegEmp_LL_TermsAndConditions_LinkClicked);
			// 
			// RegEmp_CB_IAgreeTo
			// 
			this->RegEmp_CB_IAgreeTo->AutoSize = true;
			this->RegEmp_CB_IAgreeTo->BackColor = System::Drawing::Color::Transparent;
			this->RegEmp_CB_IAgreeTo->Location = System::Drawing::Point(40, 302);
			this->RegEmp_CB_IAgreeTo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->RegEmp_CB_IAgreeTo->Name = L"RegEmp_CB_IAgreeTo";
			this->RegEmp_CB_IAgreeTo->Size = System::Drawing::Size(85, 20);
			this->RegEmp_CB_IAgreeTo->TabIndex = 15;
			this->RegEmp_CB_IAgreeTo->Text = L"I agree to";
			this->RegEmp_CB_IAgreeTo->UseVisualStyleBackColor = false;
			this->RegEmp_CB_IAgreeTo->CheckedChanged += gcnew System::EventHandler(this, &RegisterEmployee::RegEmp_CB_IAgreeTo_CheckedChanged);
			// 
			// RegEmp_TB_EmployeeUsername
			// 
			this->RegEmp_TB_EmployeeUsername->Location = System::Drawing::Point(39, 154);
			this->RegEmp_TB_EmployeeUsername->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->RegEmp_TB_EmployeeUsername->Name = L"RegEmp_TB_EmployeeUsername";
			this->RegEmp_TB_EmployeeUsername->Size = System::Drawing::Size(313, 22);
			this->RegEmp_TB_EmployeeUsername->TabIndex = 14;
			// 
			// RegEmp_EmployeeUsername
			// 
			this->RegEmp_EmployeeUsername->AutoSize = true;
			this->RegEmp_EmployeeUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegEmp_EmployeeUsername->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->RegEmp_EmployeeUsername->Location = System::Drawing::Point(35, 134);
			this->RegEmp_EmployeeUsername->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->RegEmp_EmployeeUsername->Name = L"RegEmp_EmployeeUsername";
			this->RegEmp_EmployeeUsername->Size = System::Drawing::Size(135, 16);
			this->RegEmp_EmployeeUsername->TabIndex = 13;
			this->RegEmp_EmployeeUsername->Text = L"Employee Username";
			// 
			// RegEmp_BTN_RegisterEmployee
			// 
			this->RegEmp_BTN_RegisterEmployee->Location = System::Drawing::Point(211, 361);
			this->RegEmp_BTN_RegisterEmployee->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->RegEmp_BTN_RegisterEmployee->Name = L"RegEmp_BTN_RegisterEmployee";
			this->RegEmp_BTN_RegisterEmployee->Size = System::Drawing::Size(141, 26);
			this->RegEmp_BTN_RegisterEmployee->TabIndex = 12;
			this->RegEmp_BTN_RegisterEmployee->Text = L"Register";
			this->RegEmp_BTN_RegisterEmployee->UseVisualStyleBackColor = true;
			this->RegEmp_BTN_RegisterEmployee->Click += gcnew System::EventHandler(this, &RegisterEmployee::RegEmp_BTN_RegisterEmployee_Click);
			// 
			// RegEmp_L_EmployeeRegiteration
			// 
			this->RegEmp_L_EmployeeRegiteration->AutoSize = true;
			this->RegEmp_L_EmployeeRegiteration->ForeColor = System::Drawing::Color::Red;
			this->RegEmp_L_EmployeeRegiteration->Location = System::Drawing::Point(124, 65);
			this->RegEmp_L_EmployeeRegiteration->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->RegEmp_L_EmployeeRegiteration->Name = L"RegEmp_L_EmployeeRegiteration";
			this->RegEmp_L_EmployeeRegiteration->Size = System::Drawing::Size(152, 16);
			this->RegEmp_L_EmployeeRegiteration->TabIndex = 7;
			this->RegEmp_L_EmployeeRegiteration->Text = L"Employee Registeration";
			// 
			// RegEmp_L_RegisterEmployee
			// 
			this->RegEmp_L_RegisterEmployee->AutoSize = true;
			this->RegEmp_L_RegisterEmployee->BackColor = System::Drawing::Color::Transparent;
			this->RegEmp_L_RegisterEmployee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RegEmp_L_RegisterEmployee->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 17.8F, System::Drawing::FontStyle::Bold));
			this->RegEmp_L_RegisterEmployee->ForeColor = System::Drawing::Color::OrangeRed;
			this->RegEmp_L_RegisterEmployee->Location = System::Drawing::Point(63, 25);
			this->RegEmp_L_RegisterEmployee->Margin = System::Windows::Forms::Padding(0);
			this->RegEmp_L_RegisterEmployee->Name = L"RegEmp_L_RegisterEmployee";
			this->RegEmp_L_RegisterEmployee->Size = System::Drawing::Size(272, 41);
			this->RegEmp_L_RegisterEmployee->TabIndex = 1;
			this->RegEmp_L_RegisterEmployee->Text = L"Register Employee";
			this->RegEmp_L_RegisterEmployee->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// RegisterEmployee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(577, 501);
			this->Controls->Add(this->RegEmp_Panel_CenterPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"RegisterEmployee";
			this->Text = L"RegisterEmployee";
			this->RegEmp_Panel_CenterPanel->ResumeLayout(false);
			this->RegEmp_Panel_CenterPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void RegEmp_BTN_RegisterEmployee_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(this->RegEmp_TB_EmployeeUsername->Text) || String::IsNullOrEmpty(this->RegEmp_TB_EmployeePassword->Text)) {
			MessageBox::Show("Username or password cannot be empty.", "Invalid Username or Password.", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return;
		}
		//Check if accepted T&C:
		if (!Reg_AgreeToTerms) {
			MessageBox::Show("It is necessay to agree to the Terms and Conditions", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		
		AuthenticateUser^ authUser = gcnew AuthenticateUser;
		// If Registeration fails:
		if (!authUser->Register(this->RegEmp_TB_EmployeeUsername->Text, this->RegEmp_TB_EmployeePassword->Text)) {
			//Not writing a Message box here since the register function has inbuild error propmpts
			return;
		}
		//If Registeration succeeds:
		MessageBox::Show("User " +this->RegEmp_TB_EmployeeUsername->Text +" has been successfully registered!", "User Registered!.", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
private: System::Void RegEmp_CB_IAgreeTo_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Reg_AgreeToTerms = !Reg_AgreeToTerms;
}
private: System::Void RegEmp_LL_TermsAndConditions_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	TermsAndConditions^ tas = gcnew TermsAndConditions;
	tas->ShowDialog();
	
}
};
}
