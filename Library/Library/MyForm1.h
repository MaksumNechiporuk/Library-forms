#pragma once

#include<ctime>
#include<iomanip>
#include<string>



class book
{
	std::string name;
	//Data d;
	int number;
	std::string genre;//enum  
	bool status;

	void Fill_book()
	{
		std::string names[10] = { " На Західному фронті без змін","Улісс","Оповідання, романи, листи, щоденники","Гамлет","Портрет Доріана Грея","Кохання під час холери","Українські повісті"," Пригоди бравого вояка Швейка","Вигадані історії","1984" };
		name = names[rand() % 10];
		int a = rand() % 10;
		if (a == 0)
		{
			number = 0;
			status = false;
		}
		else
		{
			number = 1 + rand() % 100;
			status = true;
		}
		std::string genres[6] = { "Детективний","Духовний","Історичний","Пригодницький","Науково-фантастичний","Роман" };
		genre = genres[rand() % 6];
		//d.Fill_data(1960, 2018);
	}
};
namespace Library {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(961, 505);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	};
}

