#pragma once
#include "AuthenticateUser.h"
#include "AdminHomeScreen.h"
#include "RegisterEmployee.h"
#include "ForgotPassword.h"
#include "User.h"


// temp variable
bool isAdmin = false;
bool showPassword[2] = {false,false};

namespace POS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		// Create a static instance of the user identity so it can be accessed without having to create another instance of this class
		static User^ CurrUser = gcnew User;
		 
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ Log_Panel_L_Background;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::Label^ Log_L_NotAnEmployee;
	private: System::Windows::Forms::CheckBox^ Log_CB_NotAnAdmin;


	private: System::Windows::Forms::LinkLabel^ Log_LL_ForgotPassword;
	private: System::Windows::Forms::Button^ Log_btn_Login;
	protected:




	private: System::Windows::Forms::TextBox^ Log_TB_Password;



	private: System::Windows::Forms::Label^ Log_L_Pssword;

	private: System::Windows::Forms::TextBox^ Log_TB_Username;


	private: System::Windows::Forms::Label^ Log_L_Username;

	private: System::Windows::Forms::Label^ Log_L_EmployeeLogin;
	private: System::Windows::Forms::Panel^ Log_Panel_R_Background;





	private: System::Windows::Forms::PictureBox^ log_P_Logo;
	private: System::Windows::Forms::Label^ Log_L_Mr;
	private: System::Windows::Forms::Label^ Log_L_CopyUsername;





	private: System::Windows::Forms::LinkLabel^ Log_LL_RegisterNow;

	private: System::Windows::Forms::Label^ Log_L_NotAlreadyAMember;


	private: System::Windows::Forms::Label^ Log_L_WelcomeBack;



	private: System::Windows::Forms::Panel^ LoginPanel;
	private: System::Windows::Forms::Panel^ RegisterPanel;
	private: System::Windows::Forms::Panel^ Reg_Panel_R_Background;
	private: System::Windows::Forms::Button^ Reg_BTN_Login;



	private: System::Windows::Forms::TextBox^ Reg_TB_Password;

	private: System::Windows::Forms::Label^ Reg_L_Password;

	private: System::Windows::Forms::TextBox^ Reg_TB_Username;

	private: System::Windows::Forms::Label^ Reg_L_Username;

	private: System::Windows::Forms::Label^ Reg_L_EmployeeRegisteration;

	private: System::Windows::Forms::Panel^ Reg_Panel_L_Background;


	private: System::Windows::Forms::PictureBox^ Reg_P_Icon;

	private: System::Windows::Forms::Label^ Reg_L_Mr;
	private: System::Windows::Forms::Label^ Reg_L_CopyUsername;


	private: System::Windows::Forms::LinkLabel^ Reg_LL_Login;

	private: System::Windows::Forms::Label^ Reg_L_AlreadyAMember;

	private: System::Windows::Forms::Label^ Reg_L_GladToSeeYouJoin;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ Reg_CB_ShowPassword;
	private: System::Windows::Forms::Label^ RecPass_L_Description;



















	protected:


















	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Log_Panel_L_Background = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->Log_L_NotAnEmployee = (gcnew System::Windows::Forms::Label());
			this->Log_CB_NotAnAdmin = (gcnew System::Windows::Forms::CheckBox());
			this->Log_LL_ForgotPassword = (gcnew System::Windows::Forms::LinkLabel());
			this->Log_btn_Login = (gcnew System::Windows::Forms::Button());
			this->Log_TB_Password = (gcnew System::Windows::Forms::TextBox());
			this->Log_L_Pssword = (gcnew System::Windows::Forms::Label());
			this->Log_TB_Username = (gcnew System::Windows::Forms::TextBox());
			this->Log_L_Username = (gcnew System::Windows::Forms::Label());
			this->Log_L_EmployeeLogin = (gcnew System::Windows::Forms::Label());
			this->Log_Panel_R_Background = (gcnew System::Windows::Forms::Panel());
			this->Log_L_Mr = (gcnew System::Windows::Forms::Label());
			this->Log_L_CopyUsername = (gcnew System::Windows::Forms::Label());
			this->Log_LL_RegisterNow = (gcnew System::Windows::Forms::LinkLabel());
			this->Log_L_NotAlreadyAMember = (gcnew System::Windows::Forms::Label());
			this->Log_L_WelcomeBack = (gcnew System::Windows::Forms::Label());
			this->log_P_Logo = (gcnew System::Windows::Forms::PictureBox());
			this->LoginPanel = (gcnew System::Windows::Forms::Panel());
			this->RegisterPanel = (gcnew System::Windows::Forms::Panel());
			this->Reg_P_Icon = (gcnew System::Windows::Forms::PictureBox());
			this->Reg_Panel_R_Background = (gcnew System::Windows::Forms::Panel());
			this->RecPass_L_Description = (gcnew System::Windows::Forms::Label());
			this->Reg_CB_ShowPassword = (gcnew System::Windows::Forms::CheckBox());
			this->Reg_BTN_Login = (gcnew System::Windows::Forms::Button());
			this->Reg_TB_Password = (gcnew System::Windows::Forms::TextBox());
			this->Reg_L_Password = (gcnew System::Windows::Forms::Label());
			this->Reg_TB_Username = (gcnew System::Windows::Forms::TextBox());
			this->Reg_L_Username = (gcnew System::Windows::Forms::Label());
			this->Reg_L_EmployeeRegisteration = (gcnew System::Windows::Forms::Label());
			this->Reg_Panel_L_Background = (gcnew System::Windows::Forms::Panel());
			this->Reg_L_Mr = (gcnew System::Windows::Forms::Label());
			this->Reg_L_CopyUsername = (gcnew System::Windows::Forms::Label());
			this->Reg_LL_Login = (gcnew System::Windows::Forms::LinkLabel());
			this->Reg_L_AlreadyAMember = (gcnew System::Windows::Forms::Label());
			this->Reg_L_GladToSeeYouJoin = (gcnew System::Windows::Forms::Label());
			this->Log_Panel_L_Background->SuspendLayout();
			this->Log_Panel_R_Background->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->log_P_Logo))->BeginInit();
			this->LoginPanel->SuspendLayout();
			this->RegisterPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Reg_P_Icon))->BeginInit();
			this->Reg_Panel_R_Background->SuspendLayout();
			this->Reg_Panel_L_Background->SuspendLayout();
			this->SuspendLayout();
			// 
			// Log_Panel_L_Background
			// 
			this->Log_Panel_L_Background->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Log_Panel_L_Background->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Log_Panel_L_Background->Controls->Add(this->checkBox1);
			this->Log_Panel_L_Background->Controls->Add(this->Log_L_NotAnEmployee);
			this->Log_Panel_L_Background->Controls->Add(this->Log_CB_NotAnAdmin);
			this->Log_Panel_L_Background->Controls->Add(this->Log_LL_ForgotPassword);
			this->Log_Panel_L_Background->Controls->Add(this->Log_btn_Login);
			this->Log_Panel_L_Background->Controls->Add(this->Log_TB_Password);
			this->Log_Panel_L_Background->Controls->Add(this->Log_L_Pssword);
			this->Log_Panel_L_Background->Controls->Add(this->Log_TB_Username);
			this->Log_Panel_L_Background->Controls->Add(this->Log_L_Username);
			this->Log_Panel_L_Background->Controls->Add(this->Log_L_EmployeeLogin);
			this->Log_Panel_L_Background->Location = System::Drawing::Point(21, 38);
			this->Log_Panel_L_Background->Name = L"Log_Panel_L_Background";
			this->Log_Panel_L_Background->Size = System::Drawing::Size(555, 406);
			this->Log_Panel_L_Background->TabIndex = 7;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(95, 238);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(125, 20);
			this->checkBox1->TabIndex = 11;
			this->checkBox1->Text = L"Show Password";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// Log_L_NotAnEmployee
			// 
			this->Log_L_NotAnEmployee->AutoSize = true;
			this->Log_L_NotAnEmployee->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Log_L_NotAnEmployee->Location = System::Drawing::Point(322, 353);
			this->Log_L_NotAnEmployee->Name = L"Log_L_NotAnEmployee";
			this->Log_L_NotAnEmployee->Size = System::Drawing::Size(118, 16);
			this->Log_L_NotAnEmployee->TabIndex = 9;
			this->Log_L_NotAnEmployee->Text = L"Not an Employee\?";
			// 
			// Log_CB_NotAnAdmin
			// 
			this->Log_CB_NotAnAdmin->AutoSize = true;
			this->Log_CB_NotAnAdmin->Location = System::Drawing::Point(422, 353);
			this->Log_CB_NotAnAdmin->Name = L"Log_CB_NotAnAdmin";
			this->Log_CB_NotAnAdmin->Size = System::Drawing::Size(103, 20);
			this->Log_CB_NotAnAdmin->TabIndex = 10;
			this->Log_CB_NotAnAdmin->Text = L"Admin Login";
			this->Log_CB_NotAnAdmin->UseVisualStyleBackColor = true;
			this->Log_CB_NotAnAdmin->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Log_CB_NotAnAdmin_CheckedChanged);
			// 
			// Log_LL_ForgotPassword
			// 
			this->Log_LL_ForgotPassword->AutoSize = true;
			this->Log_LL_ForgotPassword->LinkColor = System::Drawing::Color::Crimson;
			this->Log_LL_ForgotPassword->Location = System::Drawing::Point(268, 259);
			this->Log_LL_ForgotPassword->Name = L"Log_LL_ForgotPassword";
			this->Log_LL_ForgotPassword->Size = System::Drawing::Size(116, 16);
			this->Log_LL_ForgotPassword->TabIndex = 9;
			this->Log_LL_ForgotPassword->TabStop = true;
			this->Log_LL_ForgotPassword->Text = L"Forgot Password\?";
			this->Log_LL_ForgotPassword->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Log_LL_ForgotPassword->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::Log_LL_ForgotPassword_LinkClicked);
			// 
			// Log_btn_Login
			// 
			this->Log_btn_Login->Location = System::Drawing::Point(369, 250);
			this->Log_btn_Login->Name = L"Log_btn_Login";
			this->Log_btn_Login->Size = System::Drawing::Size(95, 31);
			this->Log_btn_Login->TabIndex = 7;
			this->Log_btn_Login->Text = L"Login";
			this->Log_btn_Login->UseVisualStyleBackColor = true;
			this->Log_btn_Login->Click += gcnew System::EventHandler(this, &MyForm::Log_btn_Login_Click);
			// 
			// Log_TB_Password
			// 
			this->Log_TB_Password->Location = System::Drawing::Point(95, 212);
			this->Log_TB_Password->Name = L"Log_TB_Password";
			this->Log_TB_Password->PasswordChar = '*';
			this->Log_TB_Password->Size = System::Drawing::Size(369, 22);
			this->Log_TB_Password->TabIndex = 6;
			// 
			// Log_L_Pssword
			// 
			this->Log_L_Pssword->AutoSize = true;
			this->Log_L_Pssword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Log_L_Pssword->ForeColor = System::Drawing::Color::Black;
			this->Log_L_Pssword->Location = System::Drawing::Point(92, 193);
			this->Log_L_Pssword->Name = L"Log_L_Pssword";
			this->Log_L_Pssword->Size = System::Drawing::Size(67, 16);
			this->Log_L_Pssword->TabIndex = 5;
			this->Log_L_Pssword->Text = L"Password";
			// 
			// Log_TB_Username
			// 
			this->Log_TB_Username->Location = System::Drawing::Point(95, 150);
			this->Log_TB_Username->Name = L"Log_TB_Username";
			this->Log_TB_Username->Size = System::Drawing::Size(369, 22);
			this->Log_TB_Username->TabIndex = 4;
			this->Log_TB_Username->TextChanged += gcnew System::EventHandler(this, &MyForm::Log_TB_Username_TextChanged);
			// 
			// Log_L_Username
			// 
			this->Log_L_Username->AutoSize = true;
			this->Log_L_Username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Log_L_Username->ForeColor = System::Drawing::Color::Black;
			this->Log_L_Username->Location = System::Drawing::Point(92, 131);
			this->Log_L_Username->Name = L"Log_L_Username";
			this->Log_L_Username->Size = System::Drawing::Size(70, 16);
			this->Log_L_Username->TabIndex = 3;
			this->Log_L_Username->Text = L"Username";
			// 
			// Log_L_EmployeeLogin
			// 
			this->Log_L_EmployeeLogin->AutoSize = true;
			this->Log_L_EmployeeLogin->BackColor = System::Drawing::Color::Transparent;
			this->Log_L_EmployeeLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Log_L_EmployeeLogin->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Log_L_EmployeeLogin->ForeColor = System::Drawing::Color::OrangeRed;
			this->Log_L_EmployeeLogin->Location = System::Drawing::Point(80, 16);
			this->Log_L_EmployeeLogin->Name = L"Log_L_EmployeeLogin";
			this->Log_L_EmployeeLogin->Size = System::Drawing::Size(530, 87);
			this->Log_L_EmployeeLogin->TabIndex = 2;
			this->Log_L_EmployeeLogin->Text = L"EMPLOYEE LOGIN";
			this->Log_L_EmployeeLogin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Log_Panel_R_Background
			// 
			this->Log_Panel_R_Background->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Log_Panel_R_Background->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Log_Panel_R_Background->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Log_Panel_R_Background->Controls->Add(this->Log_L_Mr);
			this->Log_Panel_R_Background->Controls->Add(this->Log_L_CopyUsername);
			this->Log_Panel_R_Background->Controls->Add(this->Log_LL_RegisterNow);
			this->Log_Panel_R_Background->Controls->Add(this->Log_L_NotAlreadyAMember);
			this->Log_Panel_R_Background->Controls->Add(this->Log_L_WelcomeBack);
			this->Log_Panel_R_Background->Location = System::Drawing::Point(606, 38);
			this->Log_Panel_R_Background->Name = L"Log_Panel_R_Background";
			this->Log_Panel_R_Background->Size = System::Drawing::Size(289, 406);
			this->Log_Panel_R_Background->TabIndex = 6;
			// 
			// Log_L_Mr
			// 
			this->Log_L_Mr->AutoSize = true;
			this->Log_L_Mr->BackColor = System::Drawing::Color::Transparent;
			this->Log_L_Mr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Log_L_Mr->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->Log_L_Mr->ForeColor = System::Drawing::Color::OrangeRed;
			this->Log_L_Mr->Location = System::Drawing::Point(85, 165);
			this->Log_L_Mr->MaximumSize = System::Drawing::Size(200, 200);
			this->Log_L_Mr->Name = L"Log_L_Mr";
			this->Log_L_Mr->Size = System::Drawing::Size(47, 31);
			this->Log_L_Mr->TabIndex = 10;
			this->Log_L_Mr->Text = L"MR.";
			this->Log_L_Mr->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Log_L_CopyUsername
			// 
			this->Log_L_CopyUsername->AutoSize = true;
			this->Log_L_CopyUsername->BackColor = System::Drawing::Color::Transparent;
			this->Log_L_CopyUsername->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Log_L_CopyUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->Log_L_CopyUsername->ForeColor = System::Drawing::Color::OrangeRed;
			this->Log_L_CopyUsername->Location = System::Drawing::Point(122, 165);
			this->Log_L_CopyUsername->MaximumSize = System::Drawing::Size(200, 200);
			this->Log_L_CopyUsername->Name = L"Log_L_CopyUsername";
			this->Log_L_CopyUsername->Size = System::Drawing::Size(0, 31);
			this->Log_L_CopyUsername->TabIndex = 9;
			this->Log_L_CopyUsername->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Log_LL_RegisterNow
			// 
			this->Log_LL_RegisterNow->AutoSize = true;
			this->Log_LL_RegisterNow->LinkColor = System::Drawing::Color::Crimson;
			this->Log_LL_RegisterNow->Location = System::Drawing::Point(170, 212);
			this->Log_LL_RegisterNow->Name = L"Log_LL_RegisterNow";
			this->Log_LL_RegisterNow->Size = System::Drawing::Size(91, 16);
			this->Log_LL_RegisterNow->TabIndex = 8;
			this->Log_LL_RegisterNow->TabStop = true;
			this->Log_LL_RegisterNow->Text = L"Register Now!";
			this->Log_LL_RegisterNow->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Log_LL_RegisterNow->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel2_LinkClicked_2);
			// 
			// Log_L_NotAlreadyAMember
			// 
			this->Log_L_NotAlreadyAMember->AutoSize = true;
			this->Log_L_NotAlreadyAMember->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Log_L_NotAlreadyAMember->Location = System::Drawing::Point(51, 212);
			this->Log_L_NotAlreadyAMember->Name = L"Log_L_NotAlreadyAMember";
			this->Log_L_NotAlreadyAMember->Size = System::Drawing::Size(156, 16);
			this->Log_L_NotAlreadyAMember->TabIndex = 7;
			this->Log_L_NotAlreadyAMember->Text = L"Not already a memeber\?";
			// 
			// Log_L_WelcomeBack
			// 
			this->Log_L_WelcomeBack->AutoSize = true;
			this->Log_L_WelcomeBack->BackColor = System::Drawing::Color::Transparent;
			this->Log_L_WelcomeBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Log_L_WelcomeBack->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Log_L_WelcomeBack->ForeColor = System::Drawing::Color::OrangeRed;
			this->Log_L_WelcomeBack->Location = System::Drawing::Point(38, 128);
			this->Log_L_WelcomeBack->Margin = System::Windows::Forms::Padding(0);
			this->Log_L_WelcomeBack->Name = L"Log_L_WelcomeBack";
			this->Log_L_WelcomeBack->Size = System::Drawing::Size(281, 45);
			this->Log_L_WelcomeBack->TabIndex = 1;
			this->Log_L_WelcomeBack->Text = L"WELCOME BACK!";
			this->Log_L_WelcomeBack->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// log_P_Logo
			// 
			this->log_P_Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"log_P_Logo.Image")));
			this->log_P_Logo->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"log_P_Logo.InitialImage")));
			this->log_P_Logo->Location = System::Drawing::Point(0, -2);
			this->log_P_Logo->Name = L"log_P_Logo";
			this->log_P_Logo->Size = System::Drawing::Size(36, 34);
			this->log_P_Logo->TabIndex = 11;
			this->log_P_Logo->TabStop = false;
			// 
			// LoginPanel
			// 
			this->LoginPanel->BackColor = System::Drawing::Color::Transparent;
			this->LoginPanel->Controls->Add(this->log_P_Logo);
			this->LoginPanel->Controls->Add(this->Log_Panel_R_Background);
			this->LoginPanel->Controls->Add(this->Log_Panel_L_Background);
			this->LoginPanel->Location = System::Drawing::Point(0, 0);
			this->LoginPanel->Name = L"LoginPanel";
			this->LoginPanel->Size = System::Drawing::Size(916, 486);
			this->LoginPanel->TabIndex = 14;
			// 
			// RegisterPanel
			// 
			this->RegisterPanel->BackColor = System::Drawing::Color::Transparent;
			this->RegisterPanel->Controls->Add(this->Reg_P_Icon);
			this->RegisterPanel->Controls->Add(this->Reg_Panel_R_Background);
			this->RegisterPanel->Controls->Add(this->Reg_Panel_L_Background);
			this->RegisterPanel->Location = System::Drawing::Point(0, 0);
			this->RegisterPanel->Name = L"RegisterPanel";
			this->RegisterPanel->Size = System::Drawing::Size(919, 486);
			this->RegisterPanel->TabIndex = 16;
			this->RegisterPanel->Visible = false;
			// 
			// Reg_P_Icon
			// 
			this->Reg_P_Icon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Reg_P_Icon.Image")));
			this->Reg_P_Icon->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Reg_P_Icon.InitialImage")));
			this->Reg_P_Icon->Location = System::Drawing::Point(0, 0);
			this->Reg_P_Icon->Name = L"Reg_P_Icon";
			this->Reg_P_Icon->Size = System::Drawing::Size(36, 34);
			this->Reg_P_Icon->TabIndex = 11;
			this->Reg_P_Icon->TabStop = false;
			// 
			// Reg_Panel_R_Background
			// 
			this->Reg_Panel_R_Background->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Reg_Panel_R_Background->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Reg_Panel_R_Background->Controls->Add(this->RecPass_L_Description);
			this->Reg_Panel_R_Background->Controls->Add(this->Reg_CB_ShowPassword);
			this->Reg_Panel_R_Background->Controls->Add(this->Reg_BTN_Login);
			this->Reg_Panel_R_Background->Controls->Add(this->Reg_TB_Password);
			this->Reg_Panel_R_Background->Controls->Add(this->Reg_L_Password);
			this->Reg_Panel_R_Background->Controls->Add(this->Reg_TB_Username);
			this->Reg_Panel_R_Background->Controls->Add(this->Reg_L_Username);
			this->Reg_Panel_R_Background->Controls->Add(this->Reg_L_EmployeeRegisteration);
			this->Reg_Panel_R_Background->Location = System::Drawing::Point(338, 40);
			this->Reg_Panel_R_Background->Name = L"Reg_Panel_R_Background";
			this->Reg_Panel_R_Background->Size = System::Drawing::Size(555, 406);
			this->Reg_Panel_R_Background->TabIndex = 9;
			// 
			// RecPass_L_Description
			// 
			this->RecPass_L_Description->AutoSize = true;
			this->RecPass_L_Description->ForeColor = System::Drawing::Color::Red;
			this->RecPass_L_Description->Location = System::Drawing::Point(144, 71);
			this->RecPass_L_Description->Name = L"RecPass_L_Description";
			this->RecPass_L_Description->Size = System::Drawing::Size(328, 16);
			this->RecPass_L_Description->TabIndex = 13;
			this->RecPass_L_Description->Text = L"Please contact an Admin to register an account for you";
			// 
			// Reg_CB_ShowPassword
			// 
			this->Reg_CB_ShowPassword->AutoSize = true;
			this->Reg_CB_ShowPassword->Location = System::Drawing::Point(95, 236);
			this->Reg_CB_ShowPassword->Name = L"Reg_CB_ShowPassword";
			this->Reg_CB_ShowPassword->Size = System::Drawing::Size(125, 20);
			this->Reg_CB_ShowPassword->TabIndex = 12;
			this->Reg_CB_ShowPassword->Text = L"Show Password";
			this->Reg_CB_ShowPassword->UseVisualStyleBackColor = true;
			this->Reg_CB_ShowPassword->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Reg_CB_ShowPassword_CheckedChanged);
			// 
			// Reg_BTN_Login
			// 
			this->Reg_BTN_Login->Location = System::Drawing::Point(379, 248);
			this->Reg_BTN_Login->Name = L"Reg_BTN_Login";
			this->Reg_BTN_Login->Size = System::Drawing::Size(95, 31);
			this->Reg_BTN_Login->TabIndex = 7;
			this->Reg_BTN_Login->Text = L"Continue";
			this->Reg_BTN_Login->UseVisualStyleBackColor = true;
			this->Reg_BTN_Login->Click += gcnew System::EventHandler(this, &MyForm::Reg_BTN_Login_Click);
			// 
			// Reg_TB_Password
			// 
			this->Reg_TB_Password->Location = System::Drawing::Point(95, 210);
			this->Reg_TB_Password->Name = L"Reg_TB_Password";
			this->Reg_TB_Password->PasswordChar = '*';
			this->Reg_TB_Password->Size = System::Drawing::Size(379, 22);
			this->Reg_TB_Password->TabIndex = 6;
			// 
			// Reg_L_Password
			// 
			this->Reg_L_Password->AutoSize = true;
			this->Reg_L_Password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Reg_L_Password->ForeColor = System::Drawing::Color::Black;
			this->Reg_L_Password->Location = System::Drawing::Point(92, 192);
			this->Reg_L_Password->Name = L"Reg_L_Password";
			this->Reg_L_Password->Size = System::Drawing::Size(108, 16);
			this->Reg_L_Password->TabIndex = 5;
			this->Reg_L_Password->Text = L"Admin Password";
			// 
			// Reg_TB_Username
			// 
			this->Reg_TB_Username->Location = System::Drawing::Point(95, 148);
			this->Reg_TB_Username->Name = L"Reg_TB_Username";
			this->Reg_TB_Username->Size = System::Drawing::Size(379, 22);
			this->Reg_TB_Username->TabIndex = 4;
			this->Reg_TB_Username->TextChanged += gcnew System::EventHandler(this, &MyForm::Reg_TB_Username_TextChanged);
			// 
			// Reg_L_Username
			// 
			this->Reg_L_Username->AutoSize = true;
			this->Reg_L_Username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Reg_L_Username->ForeColor = System::Drawing::Color::Black;
			this->Reg_L_Username->Location = System::Drawing::Point(92, 130);
			this->Reg_L_Username->Name = L"Reg_L_Username";
			this->Reg_L_Username->Size = System::Drawing::Size(111, 16);
			this->Reg_L_Username->TabIndex = 3;
			this->Reg_L_Username->Text = L"Admin Username";
			// 
			// Reg_L_EmployeeRegisteration
			// 
			this->Reg_L_EmployeeRegisteration->AutoSize = true;
			this->Reg_L_EmployeeRegisteration->BackColor = System::Drawing::Color::Transparent;
			this->Reg_L_EmployeeRegisteration->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Reg_L_EmployeeRegisteration->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 30, System::Drawing::FontStyle::Bold));
			this->Reg_L_EmployeeRegisteration->ForeColor = System::Drawing::Color::OrangeRed;
			this->Reg_L_EmployeeRegisteration->Location = System::Drawing::Point(24, 13);
			this->Reg_L_EmployeeRegisteration->Name = L"Reg_L_EmployeeRegisteration";
			this->Reg_L_EmployeeRegisteration->Size = System::Drawing::Size(645, 72);
			this->Reg_L_EmployeeRegisteration->TabIndex = 2;
			this->Reg_L_EmployeeRegisteration->Text = L"EMPLOYEE REGISTRATION";
			this->Reg_L_EmployeeRegisteration->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Reg_Panel_L_Background
			// 
			this->Reg_Panel_L_Background->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Reg_Panel_L_Background->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->Reg_Panel_L_Background->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Reg_Panel_L_Background->Controls->Add(this->Reg_L_Mr);
			this->Reg_Panel_L_Background->Controls->Add(this->Reg_L_CopyUsername);
			this->Reg_Panel_L_Background->Controls->Add(this->Reg_LL_Login);
			this->Reg_Panel_L_Background->Controls->Add(this->Reg_L_AlreadyAMember);
			this->Reg_Panel_L_Background->Controls->Add(this->Reg_L_GladToSeeYouJoin);
			this->Reg_Panel_L_Background->Location = System::Drawing::Point(25, 40);
			this->Reg_Panel_L_Background->Name = L"Reg_Panel_L_Background";
			this->Reg_Panel_L_Background->Size = System::Drawing::Size(289, 406);
			this->Reg_Panel_L_Background->TabIndex = 8;
			// 
			// Reg_L_Mr
			// 
			this->Reg_L_Mr->AutoSize = true;
			this->Reg_L_Mr->BackColor = System::Drawing::Color::Transparent;
			this->Reg_L_Mr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Reg_L_Mr->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->Reg_L_Mr->ForeColor = System::Drawing::Color::OrangeRed;
			this->Reg_L_Mr->Location = System::Drawing::Point(80, 171);
			this->Reg_L_Mr->MaximumSize = System::Drawing::Size(200, 200);
			this->Reg_L_Mr->Name = L"Reg_L_Mr";
			this->Reg_L_Mr->Size = System::Drawing::Size(47, 31);
			this->Reg_L_Mr->TabIndex = 10;
			this->Reg_L_Mr->Text = L"MR.";
			this->Reg_L_Mr->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Reg_L_CopyUsername
			// 
			this->Reg_L_CopyUsername->AutoSize = true;
			this->Reg_L_CopyUsername->BackColor = System::Drawing::Color::Transparent;
			this->Reg_L_CopyUsername->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Reg_L_CopyUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->Reg_L_CopyUsername->ForeColor = System::Drawing::Color::OrangeRed;
			this->Reg_L_CopyUsername->Location = System::Drawing::Point(115, 170);
			this->Reg_L_CopyUsername->MaximumSize = System::Drawing::Size(200, 200);
			this->Reg_L_CopyUsername->Name = L"Reg_L_CopyUsername";
			this->Reg_L_CopyUsername->Size = System::Drawing::Size(0, 31);
			this->Reg_L_CopyUsername->TabIndex = 9;
			this->Reg_L_CopyUsername->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Reg_LL_Login
			// 
			this->Reg_LL_Login->AutoSize = true;
			this->Reg_LL_Login->LinkColor = System::Drawing::Color::Crimson;
			this->Reg_LL_Login->Location = System::Drawing::Point(155, 202);
			this->Reg_LL_Login->Name = L"Reg_LL_Login";
			this->Reg_LL_Login->Size = System::Drawing::Size(43, 16);
			this->Reg_LL_Login->TabIndex = 8;
			this->Reg_LL_Login->TabStop = true;
			this->Reg_LL_Login->Text = L"Login!";
			this->Reg_LL_Login->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Reg_LL_Login->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// Reg_L_AlreadyAMember
			// 
			this->Reg_L_AlreadyAMember->AutoSize = true;
			this->Reg_L_AlreadyAMember->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Reg_L_AlreadyAMember->Location = System::Drawing::Point(62, 202);
			this->Reg_L_AlreadyAMember->Name = L"Reg_L_AlreadyAMember";
			this->Reg_L_AlreadyAMember->Size = System::Drawing::Size(125, 16);
			this->Reg_L_AlreadyAMember->TabIndex = 7;
			this->Reg_L_AlreadyAMember->Text = L"Already a member\?";
			// 
			// Reg_L_GladToSeeYouJoin
			// 
			this->Reg_L_GladToSeeYouJoin->AutoSize = true;
			this->Reg_L_GladToSeeYouJoin->BackColor = System::Drawing::Color::Transparent;
			this->Reg_L_GladToSeeYouJoin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Reg_L_GladToSeeYouJoin->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Reg_L_GladToSeeYouJoin->ForeColor = System::Drawing::Color::OrangeRed;
			this->Reg_L_GladToSeeYouJoin->Location = System::Drawing::Point(9, 133);
			this->Reg_L_GladToSeeYouJoin->Margin = System::Windows::Forms::Padding(0);
			this->Reg_L_GladToSeeYouJoin->Name = L"Reg_L_GladToSeeYouJoin";
			this->Reg_L_GladToSeeYouJoin->Size = System::Drawing::Size(330, 45);
			this->Reg_L_GladToSeeYouJoin->TabIndex = 1;
			this->Reg_L_GladToSeeYouJoin->Text = L"Glad to see you join!";
			this->Reg_L_GladToSeeYouJoin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(914, 483);
			this->Controls->Add(this->LoginPanel);
			this->Controls->Add(this->RegisterPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"POS SYSTEM";
			this->Log_Panel_L_Background->ResumeLayout(false);
			this->Log_Panel_L_Background->PerformLayout();
			this->Log_Panel_R_Background->ResumeLayout(false);
			this->Log_Panel_R_Background->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->log_P_Logo))->EndInit();
			this->LoginPanel->ResumeLayout(false);
			this->RegisterPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Reg_P_Icon))->EndInit();
			this->Reg_Panel_R_Background->ResumeLayout(false);
			this->Reg_Panel_R_Background->PerformLayout();
			this->Reg_Panel_L_Background->ResumeLayout(false);
			this->Reg_Panel_L_Background->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		//
		/// Click Login Button:
		//
	private: System::Void Log_btn_Login_Click(System::Object^ sender, System::EventArgs^ e) {

		System::String^ Username = Log_TB_Username->Text;
		System::String^ Password = Log_TB_Password->Text;

		// Checks if either text box is empty:
		if (String::IsNullOrEmpty(Username) || String::IsNullOrEmpty(Password)) {
			MessageBox::Show("Username or password cannot be empty.", "Invalid Username or Password.", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return;
		}
		// Create Authenticate User Object: 
		AuthenticateUser^ AuthUser = gcnew AuthenticateUser; // Like Class ObjectName = new Class; but for CLI .NET framework.
		//Check if Login Information is not correct:
		if (!AuthUser->Login(Username, Password, isAdmin)) {
			MessageBox::Show("Username or password incorrect.", "Invalid Username or Password.", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return;
		}
		// If matched:
		if (isAdmin) {
			CurrUser->SetUsername(Username);
			CurrUser->SetPassword(Password);
			// Log User to textfile
			AuthUser->Loguser(Log_TB_Username->Text);
			//ShowAdminScreen
			AdminHomeScreen^ adminHomeScreen = gcnew AdminHomeScreen;
			MessageBox::Show("Welcome Admin!", "Welcome!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			this->Hide();
			adminHomeScreen->ShowDialog();
			this->Show();
		}
		AuthUser->Loguser(Log_TB_Username->Text);
		//Show Employee Screen
		// Log user to file

	}
		   //
		   /// Click Forgot Password:
		   //
	private: System::Void Log_LL_ForgotPassword_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		if (MessageBox::Show("Are you sure you want to change your password?", "Change Password?", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			ForgotPassword^ forgotPass = gcnew ForgotPassword; // Create a managed object for forgotpassword window.
			forgotPass->ShowDialog(); // Show forgotpass window.
		}
	}
		   //
		   /// Check "Admin Login":
		   //
	private: System::Void Log_CB_NotAnAdmin_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		// Big brain (⌐▨_▨)
		isAdmin = !isAdmin;
	}
		   //
		   /// On changing Username text field
		   //
	private: System::Void Log_TB_Username_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		Log_L_CopyUsername->Text = Log_TB_Username->Text;
	}
		   //
		   /// On RegisterNow:
		   //
	private: System::Void linkLabel2_LinkClicked_2(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

		RegisterPanel->Visible = true;
		LoginPanel->Visible = false;
	}
		   //
		   /// On Login!:
		   //
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		LoginPanel->Visible = true;
		RegisterPanel->Visible = false;
	}
		   //
		   /// On RegUserNameTB Change:
		   //
	private: System::Void Reg_TB_Username_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		Reg_L_CopyUsername->Text = Reg_TB_Username->Text;
	}
		   //
		   /// On clicking Continue Button:
		   //
	private: System::Void Reg_BTN_Login_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(this->Reg_TB_Username->Text) || String::IsNullOrEmpty(this->Reg_TB_Password->Text)) {
			MessageBox::Show("Username or password cannot be empty.", "Invalid Username or Password.", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return;
		}
		AuthenticateUser^ AuthUser = gcnew AuthenticateUser;
		// If doesn't match admin username or password:
		if (!AuthUser->Login(this->Reg_TB_Username->Text, this->Reg_TB_Password->Text, true)) {
			MessageBox::Show("Username or password incorrect.", "Invalid Username or Password.", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			this->Reg_TB_Password->Text = "";
			showPassword[1] = false;
			return;
		}
		//If matches:
		
		RegisterEmployee^ RegEmp = gcnew RegisterEmployee;
		RegEmp->ShowDialog();
		

	}
		   //
		   /// Click Login Panel Show Password:
		   //
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (showPassword[0]) {
			this->Log_TB_Password->PasswordChar = '*';
			showPassword[0] = false;
			return;
		}
		this->Log_TB_Password->PasswordChar = '\0';
		showPassword[0] = true;
	}
	//
	/// Click Register Panel Show Password:
	//
	private: System::Void Reg_CB_ShowPassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (showPassword[1]) {
			this->Reg_TB_Password->PasswordChar = '*';
			showPassword[1] = false;
			return;
		}
		this->Reg_TB_Password->PasswordChar = '\0';
		showPassword[1] = true;
	}
	};
}

