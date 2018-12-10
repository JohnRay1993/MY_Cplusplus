#pragma once

namespace CLRtestPROJ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO;

	using namespace System::Threading;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		int fileCounter = 0;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Timer^  timer4;
	 

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



	private: System::Windows::Forms::Panel^  panel1;
	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(514, 20);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(532, 11);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Open/Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->SelectedPath = L"F:\\SECH\\test_f";
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->AutoScroll = true;
			this->panel1->Location = System::Drawing::Point(12, 40);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(676, 420);
			this->panel1->TabIndex = 5;
			this->panel1->SizeChanged += gcnew System::EventHandler(this, &MyForm::panel1_SizeChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 111);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(676, 202);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::LoadPic);
			// 
			// timer3
			// 
			this->timer3->Enabled = true;
			this->timer3->Interval = 1;
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::LoadPic);
			// 
			// timer4
			// 
			this->timer4->Enabled = true;
			this->timer4->Interval = 1;
			this->timer4->Tick += gcnew System::EventHandler(this, &MyForm::LoadPic);
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(613, 12);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(56, 17);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Follow";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 470);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		static Queue^ Files = gcnew Queue();
		Thread^ SearchThread = gcnew Thread(gcnew ParameterizedThreadStart(Searcher));
		static DateTime start, stop;
		PictureBox^ prev_PB;

		static Mutex^ myMutex = gcnew Mutex();

		int last_Y = 5;

	private:
		String^ GetFileName()
		{
			if (Files->Count > 0)
			{
				myMutex->WaitOne();
				String^ res = Files->Dequeue()->ToString();
				myMutex->ReleaseMutex();
				return res;
			}
			return "";
		}

		static void AddFileName(String^ s)
		{
			myMutex->WaitOne();
			Files->Enqueue(s);
			myMutex->ReleaseMutex();
		}

	private: static void Searcher(Object^ path)
	{
		WIN32_FIND_DATA fd;
		HANDLE hFind = FindFirstFile(CString(path + "/*.*"), &fd);

		if (hFind != INVALID_HANDLE_VALUE) {
			do {
				if (!(fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
				{
					//File
					String^ temp_s = gcnew String(fd.cFileName);

					if (temp_s->Split('.')[0] != temp_s)
						if (temp_s->Split('.')[temp_s->Split('.')->Length - 1] == "png" && temp_s->Split('.')[0] != "")
						{
							AddFileName(path + "\\" + temp_s);
						}
				}
				else
				{
					//dir
					String^ temp_s = gcnew String(fd.cFileName);
					if (temp_s[0] != '.')
					{
						Searcher(path + "\\" + gcnew String(fd.cFileName));
					}
				}
			} while (::FindNextFile(hFind, &fd));
			::FindClose(hFind);
		}
		stop = DateTime::Now;
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		// if Thread not finished - Suspend him
		if (SearchThread->ThreadState != ThreadState::Stopped && SearchThread->ThreadState != ThreadState::Unstarted)
			SearchThread->Suspend();

		//Open Folder Dialog
		if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			textBox1->Text = folderBrowserDialog1->SelectedPath;

			fileCounter = 0;
			panel1->Controls->Clear();
			last_Y = 5;
			prev_PB = nullptr;

			Files->Clear();

			SearchThread = gcnew Thread(gcnew ParameterizedThreadStart(Searcher));
			SearchThread->Start(textBox1->Text);

			start = DateTime::Now;
		}


	}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	// for debug - uncomment
	//this->Text = Files->Count.ToString() + " " + SearchThread->ThreadState.ToString() + " " + (stop - start);
}

// Load finded pics on form
private: Void LoadPic(System::Object^  sender, System::EventArgs^  e)
{
	if (Files->Count > 0)
	{
		PictureBox^ temp_PB = gcnew PictureBox();
		try
		{
			temp_PB->Load(GetFileName());
		}
		catch (const System::ArgumentException^ ae) //const std::exception&)
		{

		}
		if (temp_PB->Image != nullptr && temp_PB->Image->Size.Height != 0)
		{
			if (prev_PB != nullptr)
				if ((prev_PB->Location.Y + prev_PB->Height + 5) == last_Y)
					temp_PB->Location = System::Drawing::Point(0, last_Y);
				else
					temp_PB->Location = System::Drawing::Point(0, prev_PB->Location.Y + prev_PB->Height + 5);
			else
				temp_PB->Location = System::Drawing::Point(0, 5);

			temp_PB->SizeMode = PictureBoxSizeMode::Zoom;
			temp_PB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));

			if (temp_PB->Image->Size.Width > panel1->Size.Width)
			{
				double diff = (double)panel1->Size.Width / (double)temp_PB->Image->Size.Width;
				temp_PB->Size = System::Drawing::Size(panel1->Size.Width, temp_PB->Image->Size.Height * diff);
			}
			else
			{
				temp_PB->Size = System::Drawing::Size(panel1->Size.Width, temp_PB->Image->Size.Height);
			}

			prev_PB = temp_PB;

			last_Y = temp_PB->Location.Y + temp_PB->Height + 5;

			panel1->Controls->Add(temp_PB);

			// follow the filling
			if (checkBox1->Checked)
				panel1->ScrollControlIntoView(temp_PB);
		}
	}
}
// if user resize form - resize loaded pics
private: System::Void panel1_SizeChanged(System::Object^  sender, System::EventArgs^  e) {
	panel1->VerticalScroll->Value = 0;
	PictureBox^ prev_im;
	for each (PictureBox^ im in panel1->Controls)
	{
		if (prev_im != nullptr)
			im->Location = System::Drawing::Point(0, prev_im->Location.Y + prev_im->Height + 5);
		else
			im->Location = System::Drawing::Point(0, 5);
		if (im->Image->Size.Width > panel1->Width)
		{
			double diff = (double)panel1->Size.Width / (double)im->Image->Size.Width;
			im->Height = im->Image->Size.Height * diff;
		}
		prev_im = im;
	}
}
private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	if (SearchThread->ThreadState != ThreadState::Stopped && SearchThread->ThreadState != ThreadState::Unstarted)
		SearchThread->Suspend();
}
};
}
