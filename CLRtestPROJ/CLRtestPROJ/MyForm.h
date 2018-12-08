#pragma once

namespace CLRtestPROJ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO;

	cTimer ctimer;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		int fileCounter = 0;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
			 int last_Y = 5;

	public:
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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(18, 18);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(890, 26);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(920, 17);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->SelectedPath = L"F:\\SECH\\test_f";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(18, 58);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->Size = System::Drawing::Size(1012, 644);
			this->textBox2->TabIndex = 2;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(18, 58);
			this->listBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(948, 564);
			this->listBox1->TabIndex = 3;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(486, 383);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(546, 322);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->WaitOnLoad = true;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Location = System::Drawing::Point(18, 58);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1014, 646);
			this->panel1->TabIndex = 5;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(588, 160);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(360, 317);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1050, 723);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			ctimer.start_timer();

			textBox1->Text = "";
			textBox2->Text = "";

			textBox1->Text = folderBrowserDialog1->SelectedPath;
			fileCounter = 0;
			panel1->Controls->Clear();
			last_Y = 5;
			FileFinder(textBox1->Text);






			//array<String^>^ files = Directory::GetFiles(textBox1->Text, "*.*", System::IO::SearchOption::AllDirectories);
			//for (int i = 0; i < files->Length; i++)
				//textBox2->AppendText(files[i] + "\r\n");
			//textBox2->AppendText(files->Length.ToString() + " " + ctimer.elapsed_time().ToString());

					   			 


			/*
			System::String ^str = "Hello World";

			IntPtr ptr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(str);

			HANDLE hFind = FindFirstFile((LPCSTR)ptr.ToPointer(), data);

			System::Runtime::InteropServices::Marshal::FreeHGlobal(ptr);
			*/
		}
	}
	private: System::Void FileFinder(String^ path)
	{
		WIN32_FIND_DATA fd;
		HANDLE hFind = FindFirstFile(CString(path + "/*.*"), &fd);

		if (hFind != INVALID_HANDLE_VALUE) {
			do {
				// read all (real) files in current folder
				// , delete '!' read other 2 default folder . and ..
				//if ((fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))//(!(fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
				if (!(fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))// && fileCounter < 100)
				{
					//textBox2->AppendText(gcnew String(fd.cFileName) + "\r\n");
					
					//listBox1->Items->Add(gcnew String(fd.cFileName));
					//names.push_back(fd.cFileName);

					String^ temp_s = gcnew String(fd.cFileName);

					//int l = temp_s->Length;
					//if (l > 4)
					//if (temp_s[l - 4] == '.' && temp_s[l - 3] == 'p' && temp_s[l - 2] == 'n' && temp_s[l - 1] == 'g')
					int asd = temp_s->Split('.')->Length;
					if (temp_s->Split('.')[0] != temp_s)
					if (temp_s->Split('.')[temp_s->Split('.')->Length - 1] == "png" && temp_s->Split('.')[0] != "")
					{
						listBox1->Items->Add(path + "\\" + temp_s);
						PictureBox^ temp_PB = gcnew PictureBox();
						try
						{
							temp_PB->Load(path + "\\" + temp_s);
							//temp_PB->Image->FromFile(path + "\\" + temp_s);
						}
						catch (const System::ArgumentException^ ae) //const std::exception&)
						{

						}
						if (temp_PB->Image != nullptr)
						{
							temp_PB->Size = temp_PB->Image->Size;
							if (temp_PB->Image->Size.Width > panel1->Size.Width)
							{
								double diff = (double)panel1->Size.Width / (double)temp_PB->Image->Size.Width;
								//temp_PB->Image
								int r = 50;
								temp_PB->Size = System::Drawing::Size(temp_PB->Image->Size.Width * diff - r, temp_PB->Image->Size.Height * diff - r);
								temp_PB->SizeMode = PictureBoxSizeMode::StretchImage;

								//temp_PB->Size.Width = 500;// (double)temp_PB->Size.Width * diff;
								//temp_PB->Size.Height *= diff;

								temp_PB->Location = System::Drawing::Point(0, last_Y);
							}
							else
							{
								int center = (panel1->Width - temp_PB->Width) / 2;
								if (center < 0) center = 0;
								temp_PB->Location = System::Drawing::Point(center, last_Y);
							}


							last_Y += temp_PB->Size.Height + 5;

							panel1->Controls->Add(temp_PB);
							fileCounter++;
						}
					}
				}
				else
				{
					String^ temp_s = gcnew String(fd.cFileName);
					if (temp_s[0] != '.')
						FileFinder(path + "\\" + gcnew String(fd.cFileName));
					//else
						//listBox1->Items->Add(gcnew String(fd.cFileName));
				}
			} while (::FindNextFile(hFind, &fd));
			::FindClose(hFind);
		}
		this->Text = fileCounter.ToString();
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		//MessageBox::Show(textBox1->Text + "\\" + listBox1->Text);
		/*if (listBox1->Text[0] != '.')
		{
			textBox1->Text += "\\" + listBox1->Text;
		}
		else
		{
			int i = textBox1->Text->Length - 1;
			while (i >= 0 && textBox1->Text[i] != '\\')
			{
				i--;
			}
			String^ temp_s = "";
			for (int j = 0; j < i; j++)
			{
				temp_s += textBox1->Text[j];
			}
			textBox1->Text = temp_s;
		}


		listBox1->Items->Clear();
		FileFinder(textBox1->Text);*/
		pictureBox1->Load(listBox1->Text);
		//pictureBox1->Image->FromFile("F:\\SECH\\GitHub\\Animation\\Assets\\ְספאכüע.jpg");
		//pictureBox1->Load("F:\\SECH\\GitHub\\Animation\\Assets\\ְספאכüע.jpg");
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	//pictureBox1->Image = gcnew PictureBox::Image("");
	//pictureBox1->Image->FromFile()
		//(cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
}
};
}
