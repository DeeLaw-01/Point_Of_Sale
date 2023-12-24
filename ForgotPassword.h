#pragma once
#include "AuthenticateUser.h"
#include "TermsAndConditions.h"
bool ForgotPass_AgreeToTerms = false;
namespace POS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ForgotPassword
	/// </summary>
	public ref class ForgotPassword : public System::Windows::Forms::Form
	{
	public:
		ForgotPassword(void)
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
		~ForgotPassword()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ RecPass_Panel_Center;
	protected:

	protected:



	private: System::Windows::Forms::Label^ RecPass_L_Description;
	private: System::Windows::Forms::Label^ RecPass_L_PasswordReocvery;





	private: System::Windows::Forms::PictureBox^ log_P_Logo;
	private: System::Windows::Forms::Button^ RecPass_btn_Next;
	private: System::Windows::Forms::TextBox^ RecPass_TB_AdminPassword;



	private: System::Windows::Forms::Label^ RecPass_L_AdminPassword;
	private: System::Windows::Forms::TextBox^ RecPass_TB_AdminUsername;




	private: System::Windows::Forms::Label^ RecPass_L_AdminUsername;




	private: System::Windows::Forms::TextBox^ RecPass_TB_EmployeeUsername;
	private: System::Windows::Forms::Label^ RecPass_L_EmployeeUsername;
	private: System::Windows::Forms::Panel^ ChPass_Panel_ChangePassword;
	private: System::Windows::Forms::LinkLabel^ Ch_LL_TermsAndConditions;
	private: System::Windows::Forms::CheckBox^ ChPass_CB_IAgreeTo;


	private: System::Windows::Forms::TextBox^ ChPass_TB_NewEmployeePassword;
	private: System::Windows::Forms::Label^ ChPass_L_EmployeePassword;
	private: System::Windows::Forms::Button^ ChPass_BTN_ChangePassword;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ ChPass_L_PasswordRecovery;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ForgotPassword::typeid));
			this->RecPass_Panel_Center = (gcnew System::Windows::Forms::Panel());
			this->RecPass_TB_EmployeeUsername = (gcnew System::Windows::Forms::TextBox());
			this->RecPass_L_EmployeeUsername = (gcnew System::Windows::Forms::Label());
			this->RecPass_btn_Next = (gcnew System::Windows::Forms::Button());
			this->RecPass_TB_AdminPassword = (gcnew System::Windows::Forms::TextBox());
			this->RecPass_L_AdminPassword = (gcnew System::Windows::Forms::Label());
			this->RecPass_TB_AdminUsername = (gcnew System::Windows::Forms::TextBox());
			this->RecPass_L_AdminUsername = (gcnew System::Windows::Forms::Label());
			this->RecPass_L_Description = (gcnew System::Windows::Forms::Label());
			this->RecPass_L_PasswordReocvery = (gcnew System::Windows::Forms::Label());
			this->log_P_Logo = (gcnew System::Windows::Forms::PictureBox());
			this->ChPass_Panel_ChangePassword = (gcnew System::Windows::Forms::Panel());
			this->Ch_LL_TermsAndConditions = (gcnew System::Windows::Forms::LinkLabel());
			this->ChPass_CB_IAgreeTo = (gcnew System::Windows::Forms::CheckBox());
			this->ChPass_TB_NewEmployeePassword = (gcnew System::Windows::Forms::TextBox());
			this->ChPass_L_EmployeePassword = (gcnew System::Windows::Forms::Label());
			this->ChPass_BTN_ChangePassword = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ChPass_L_PasswordRecovery = (gcnew System::Windows::Forms::Label());
			this->RecPass_Panel_Center->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->log_P_Logo))->BeginInit();
			this->ChPass_Panel_ChangePassword->SuspendLayout();
			this->SuspendLayout();
			// 
			// RecPass_Panel_Center
			// 
			this->RecPass_Panel_Center->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->RecPass_Panel_Center->BackColor = System::Drawing::Color::PapayaWhip;
			this->RecPass_Panel_Center->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->RecPass_Panel_Center->Controls->Add(this->RecPass_TB_EmployeeUsername);
			this->RecPass_Panel_Center->Controls->Add(this->RecPass_L_EmployeeUsername);
			this->RecPass_Panel_Center->Controls->Add(this->RecPass_btn_Next);
			this->RecPass_Panel_Center->Controls->Add(this->RecPass_TB_AdminPassword);
			this->RecPass_Panel_Center->Controls->Add(this->RecPass_L_AdminPassword);
			this->RecPass_Panel_Center->Controls->Add(this->RecPass_TB_AdminUsername);
			this->RecPass_Panel_Center->Controls->Add(this->RecPass_L_AdminUsername);
			this->RecPass_Panel_Center->Controls->Add(this->RecPass_L_Description);
			this->RecPass_Panel_Center->Controls->Add(this->RecPass_L_PasswordReocvery);
			this->RecPass_Panel_Center->Location = System::Drawing::Point(96, 27);
			this->RecPass_Panel_Center->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->RecPass_Panel_Center->Name = L"RecPass_Panel_Center";
			this->RecPass_Panel_Center->Size = System::Drawing::Size(385, 448);
			this->RecPass_Panel_Center->TabIndex = 7;
			// 
			// RecPass_TB_EmployeeUsername
			// 
			this->RecPass_TB_EmployeeUsername->Location = System::Drawing::Point(39, 304);
			this->RecPass_TB_EmployeeUsername->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->RecPass_TB_EmployeeUsername->Name = L"RecPass_TB_EmployeeUsername";
			this->RecPass_TB_EmployeeUsername->Size = System::Drawing::Size(313, 22);
			this->RecPass_TB_EmployeeUsername->TabIndex = 14;
			// 
			// RecPass_L_EmployeeUsername
			// 
			this->RecPass_L_EmployeeUsername->AutoSize = true;
			this->RecPass_L_EmployeeUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RecPass_L_EmployeeUsername->ForeColor = System::Drawing::Color::OrangeRed;
			this->RecPass_L_EmployeeUsername->Location = System::Drawing::Point(35, 284);
			this->RecPass_L_EmployeeUsername->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->RecPass_L_EmployeeUsername->Name = L"RecPass_L_EmployeeUsername";
			this->RecPass_L_EmployeeUsername->Size = System::Drawing::Size(135, 16);
			this->RecPass_L_EmployeeUsername->TabIndex = 13;
			this->RecPass_L_EmployeeUsername->Text = L"Employee Username";
			// 
			// RecPass_btn_Next
			// 
			this->RecPass_btn_Next->Location = System::Drawing::Point(269, 380);
			this->RecPass_btn_Next->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->RecPass_btn_Next->Name = L"RecPass_btn_Next";
			this->RecPass_btn_Next->Size = System::Drawing::Size(84, 26);
			this->RecPass_btn_Next->TabIndex = 12;
			this->RecPass_btn_Next->Text = L"Continue";
			this->RecPass_btn_Next->UseVisualStyleBackColor = true;
			this->RecPass_btn_Next->Click += gcnew System::EventHandler(this, &ForgotPassword::RecPass_btn_Next_Click);
			// 
			// RecPass_TB_AdminPassword
			// 
			this->RecPass_TB_AdminPassword->Location = System::Drawing::Point(39, 229);
			this->RecPass_TB_AdminPassword->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->RecPass_TB_AdminPassword->Name = L"RecPass_TB_AdminPassword";
			this->RecPass_TB_AdminPassword->PasswordChar = '*';
			this->RecPass_TB_AdminPassword->Size = System::Drawing::Size(313, 22);
			this->RecPass_TB_AdminPassword->TabIndex = 11;
			// 
			// RecPass_L_AdminPassword
			// 
			this->RecPass_L_AdminPassword->AutoSize = true;
			this->RecPass_L_AdminPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RecPass_L_AdminPassword->ForeColor = System::Drawing::Color::OrangeRed;
			this->RecPass_L_AdminPassword->Location = System::Drawing::Point(35, 209);
			this->RecPass_L_AdminPassword->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->RecPass_L_AdminPassword->Name = L"RecPass_L_AdminPassword";
			this->RecPass_L_AdminPassword->Size = System::Drawing::Size(108, 16);
			this->RecPass_L_AdminPassword->TabIndex = 10;
			this->RecPass_L_AdminPassword->Text = L"Admin Password";
			// 
			// RecPass_TB_AdminUsername
			// 
			this->RecPass_TB_AdminUsername->Location = System::Drawing::Point(39, 153);
			this->RecPass_TB_AdminUsername->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->RecPass_TB_AdminUsername->Name = L"RecPass_TB_AdminUsername";
			this->RecPass_TB_AdminUsername->Size = System::Drawing::Size(313, 22);
			this->RecPass_TB_AdminUsername->TabIndex = 9;
			// 
			// RecPass_L_AdminUsername
			// 
			this->RecPass_L_AdminUsername->AutoSize = true;
			this->RecPass_L_AdminUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RecPass_L_AdminUsername->ForeColor = System::Drawing::Color::OrangeRed;
			this->RecPass_L_AdminUsername->Location = System::Drawing::Point(35, 133);
			this->RecPass_L_AdminUsername->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->RecPass_L_AdminUsername->Name = L"RecPass_L_AdminUsername";
			this->RecPass_L_AdminUsername->Size = System::Drawing::Size(111, 16);
			this->RecPass_L_AdminUsername->TabIndex = 8;
			this->RecPass_L_AdminUsername->Text = L"Admin Username";
			// 
			// RecPass_L_Description
			// 
			this->RecPass_L_Description->AutoSize = true;
			this->RecPass_L_Description->ForeColor = System::Drawing::Color::Red;
			this->RecPass_L_Description->Location = System::Drawing::Point(16, 64);
			this->RecPass_L_Description->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->RecPass_L_Description->Name = L"RecPass_L_Description";
			this->RecPass_L_Description->Size = System::Drawing::Size(336, 16);
			this->RecPass_L_Description->TabIndex = 7;
			this->RecPass_L_Description->Text = L"Please contact an Admin to reset your password for you";
			// 
			// RecPass_L_PasswordReocvery
			// 
			this->RecPass_L_PasswordReocvery->AutoSize = true;
			this->RecPass_L_PasswordReocvery->BackColor = System::Drawing::Color::Transparent;
			this->RecPass_L_PasswordReocvery->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RecPass_L_PasswordReocvery->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 17.8F, System::Drawing::FontStyle::Bold));
			this->RecPass_L_PasswordReocvery->ForeColor = System::Drawing::Color::OrangeRed;
			this->RecPass_L_PasswordReocvery->Location = System::Drawing::Point(12, 14);
			this->RecPass_L_PasswordReocvery->Margin = System::Windows::Forms::Padding(0);
			this->RecPass_L_PasswordReocvery->Name = L"RecPass_L_PasswordReocvery";
			this->RecPass_L_PasswordReocvery->Size = System::Drawing::Size(335, 41);
			this->RecPass_L_PasswordReocvery->TabIndex = 1;
			this->RecPass_L_PasswordReocvery->Text = L"PASSWORD RECOVERY";
			this->RecPass_L_PasswordReocvery->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// log_P_Logo
			// 
			this->log_P_Logo->BackColor = System::Drawing::Color::Transparent;
			this->log_P_Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"log_P_Logo.Image")));
			this->log_P_Logo->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"log_P_Logo.InitialImage")));
			this->log_P_Logo->Location = System::Drawing::Point(1, 1);
			this->log_P_Logo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->log_P_Logo->Name = L"log_P_Logo";
			this->log_P_Logo->Size = System::Drawing::Size(48, 42);
			this->log_P_Logo->TabIndex = 11;
			this->log_P_Logo->TabStop = false;
			// 
			// ChPass_Panel_ChangePassword
			// 
			this->ChPass_Panel_ChangePassword->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ChPass_Panel_ChangePassword->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->ChPass_Panel_ChangePassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ChPass_Panel_ChangePassword->Controls->Add(this->Ch_LL_TermsAndConditions);
			this->ChPass_Panel_ChangePassword->Controls->Add(this->ChPass_CB_IAgreeTo);
			this->ChPass_Panel_ChangePassword->Controls->Add(this->ChPass_TB_NewEmployeePassword);
			this->ChPass_Panel_ChangePassword->Controls->Add(this->ChPass_L_EmployeePassword);
			this->ChPass_Panel_ChangePassword->Controls->Add(this->ChPass_BTN_ChangePassword);
			this->ChPass_Panel_ChangePassword->Controls->Add(this->label4);
			this->ChPass_Panel_ChangePassword->Controls->Add(this->ChPass_L_PasswordRecovery);
			this->ChPass_Panel_ChangePassword->Location = System::Drawing::Point(96, 26);
			this->ChPass_Panel_ChangePassword->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->ChPass_Panel_ChangePassword->Name = L"ChPass_Panel_ChangePassword";
			this->ChPass_Panel_ChangePassword->Size = System::Drawing::Size(385, 448);
			this->ChPass_Panel_ChangePassword->TabIndex = 12;
			this->ChPass_Panel_ChangePassword->Visible = false;
			// 
			// Ch_LL_TermsAndConditions
			// 
			this->Ch_LL_TermsAndConditions->AutoSize = true;
			this->Ch_LL_TermsAndConditions->BackColor = System::Drawing::Color::Transparent;
			this->Ch_LL_TermsAndConditions->LinkColor = System::Drawing::Color::Crimson;
			this->Ch_LL_TermsAndConditions->Location = System::Drawing::Point(124, 194);
			this->Ch_LL_TermsAndConditions->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Ch_LL_TermsAndConditions->Name = L"Ch_LL_TermsAndConditions";
			this->Ch_LL_TermsAndConditions->Size = System::Drawing::Size(138, 16);
			this->Ch_LL_TermsAndConditions->TabIndex = 16;
			this->Ch_LL_TermsAndConditions->TabStop = true;
			this->Ch_LL_TermsAndConditions->Text = L"Terms and Conditions";
			this->Ch_LL_TermsAndConditions->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &ForgotPassword::Ch_LL_TermsAndConditions_LinkClicked);
			// 
			// ChPass_CB_IAgreeTo
			// 
			this->ChPass_CB_IAgreeTo->AutoSize = true;
			this->ChPass_CB_IAgreeTo->BackColor = System::Drawing::Color::Transparent;
			this->ChPass_CB_IAgreeTo->Location = System::Drawing::Point(40, 193);
			this->ChPass_CB_IAgreeTo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->ChPass_CB_IAgreeTo->Name = L"ChPass_CB_IAgreeTo";
			this->ChPass_CB_IAgreeTo->Size = System::Drawing::Size(85, 20);
			this->ChPass_CB_IAgreeTo->TabIndex = 15;
			this->ChPass_CB_IAgreeTo->Text = L"I agree to";
			this->ChPass_CB_IAgreeTo->UseVisualStyleBackColor = false;
			this->ChPass_CB_IAgreeTo->CheckedChanged += gcnew System::EventHandler(this, &ForgotPassword::ChPass_CB_IAgreeTo_CheckedChanged);
			// 
			// ChPass_TB_NewEmployeePassword
			// 
			this->ChPass_TB_NewEmployeePassword->Location = System::Drawing::Point(39, 154);
			this->ChPass_TB_NewEmployeePassword->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->ChPass_TB_NewEmployeePassword->Name = L"ChPass_TB_NewEmployeePassword";
			this->ChPass_TB_NewEmployeePassword->Size = System::Drawing::Size(313, 22);
			this->ChPass_TB_NewEmployeePassword->TabIndex = 14;
			// 
			// ChPass_L_EmployeePassword
			// 
			this->ChPass_L_EmployeePassword->AutoSize = true;
			this->ChPass_L_EmployeePassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ChPass_L_EmployeePassword->ForeColor = System::Drawing::Color::OrangeRed;
			this->ChPass_L_EmployeePassword->Location = System::Drawing::Point(35, 134);
			this->ChPass_L_EmployeePassword->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ChPass_L_EmployeePassword->Name = L"ChPass_L_EmployeePassword";
			this->ChPass_L_EmployeePassword->Size = System::Drawing::Size(162, 16);
			this->ChPass_L_EmployeePassword->TabIndex = 13;
			this->ChPass_L_EmployeePassword->Text = L"New Employee Password";
			// 
			// ChPass_BTN_ChangePassword
			// 
			this->ChPass_BTN_ChangePassword->Location = System::Drawing::Point(120, 230);
			this->ChPass_BTN_ChangePassword->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->ChPass_BTN_ChangePassword->Name = L"ChPass_BTN_ChangePassword";
			this->ChPass_BTN_ChangePassword->Size = System::Drawing::Size(141, 26);
			this->ChPass_BTN_ChangePassword->TabIndex = 12;
			this->ChPass_BTN_ChangePassword->Text = L"Change Password";
			this->ChPass_BTN_ChangePassword->UseVisualStyleBackColor = true;
			this->ChPass_BTN_ChangePassword->Click += gcnew System::EventHandler(this, &ForgotPassword::ChPass_BTN_ChangePassword_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(124, 65);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Enter new password";
			// 
			// ChPass_L_PasswordRecovery
			// 
			this->ChPass_L_PasswordRecovery->AutoSize = true;
			this->ChPass_L_PasswordRecovery->BackColor = System::Drawing::Color::Transparent;
			this->ChPass_L_PasswordRecovery->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChPass_L_PasswordRecovery->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 17.8F, System::Drawing::FontStyle::Bold));
			this->ChPass_L_PasswordRecovery->ForeColor = System::Drawing::Color::OrangeRed;
			this->ChPass_L_PasswordRecovery->Location = System::Drawing::Point(20, 16);
			this->ChPass_L_PasswordRecovery->Margin = System::Windows::Forms::Padding(0);
			this->ChPass_L_PasswordRecovery->Name = L"ChPass_L_PasswordRecovery";
			this->ChPass_L_PasswordRecovery->Size = System::Drawing::Size(335, 41);
			this->ChPass_L_PasswordRecovery->TabIndex = 1;
			this->ChPass_L_PasswordRecovery->Text = L"PASSWORD RECOVERY";
			this->ChPass_L_PasswordRecovery->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ForgotPassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(577, 501);
			this->Controls->Add(this->log_P_Logo);
			this->Controls->Add(this->ChPass_Panel_ChangePassword);
			this->Controls->Add(this->RecPass_Panel_Center);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximizeBox = false;
			this->Name = L"ForgotPassword";
			this->Text = L"ForgotPassword";
			this->RecPass_Panel_Center->ResumeLayout(false);
			this->RecPass_Panel_Center->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->log_P_Logo))->EndInit();
			this->ChPass_Panel_ChangePassword->ResumeLayout(false);
			this->ChPass_Panel_ChangePassword->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion 


private: System::Void RecPass_btn_Next_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Username = "";
	AuthenticateUser^ authuser = gcnew AuthenticateUser;
	if (String::IsNullOrEmpty(this->RecPass_TB_EmployeeUsername->Text) || String::IsNullOrEmpty(this->RecPass_TB_AdminUsername->Text) || String::IsNullOrEmpty(this->RecPass_TB_AdminPassword->Text)) {
		MessageBox::Show("Please fill all boxes!", "Warning.", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}
	if(!authuser->MatchesDatabase(this->RecPass_TB_EmployeeUsername->Text,false)){
		MessageBox::Show("The user "+ this->RecPass_TB_EmployeeUsername->Text +" does not exist in our systems!", "Warning.", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}
	if (!authuser->Login(this->RecPass_TB_AdminUsername->Text, this->RecPass_TB_AdminPassword->Text, 1)) {
		// If Admin info Doesn't match:
		MessageBox::Show("Admin Login or Password is Incorrect!", "Warning.", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}
	// If matches Admin Username and Password AND No fields are empty AND the User EXISTS in the system
	Username = this->RecPass_TB_AdminUsername->Text; // Keeps a copy of the username.
	ChPass_Panel_ChangePassword->Visible = true;
	RecPass_Panel_Center->Visible = false;
}
//
/// On checking I Agree to terms and conditions:
//
private: System::Void ChPass_CB_IAgreeTo_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!ForgotPass_AgreeToTerms) {
		ForgotPass_AgreeToTerms = true;
		return;
	}
	ForgotPass_AgreeToTerms = false;
}
//
/// On clicking Terms and Conditions:
//
private: System::Void Ch_LL_TermsAndConditions_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	TermsAndConditions^ TAS = gcnew TermsAndConditions;
	TAS->ShowDialog();
}
//
/// On ChangePassword Button:
//
private: System::Void ChPass_BTN_ChangePassword_Click(System::Object^ sender, System::EventArgs^ e) {
	// If password is empty:
	if (String::IsNullOrEmpty(this->ChPass_TB_NewEmployeePassword->Text)) {
		MessageBox::Show("The Password cannot be empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	// If password is same as username:
	if (this->ChPass_TB_NewEmployeePassword->Text == this->RecPass_TB_EmployeeUsername->Text) {
		MessageBox::Show("The Password and Username cannot be same","Error" ,MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	//Warning and return if not agreed to the terms
	if (!ForgotPass_AgreeToTerms) {
		MessageBox::Show("It is necessay to agree to the Terms and Conditions", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	AuthenticateUser^ authUser = gcnew AuthenticateUser;
	authUser->UpdatePassword(this->RecPass_TB_EmployeeUsername->Text, this->ChPass_TB_NewEmployeePassword->Text);
	MessageBox::Show("Password Successfully updated", "Password Updated", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
};
}
