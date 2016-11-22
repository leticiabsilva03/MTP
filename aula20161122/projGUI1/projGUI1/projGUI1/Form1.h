#pragma once

namespace projGUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnCheck;
	protected: 

	private: System::Windows::Forms::CheckBox^  chkNome;
	protected: 

	private: System::Windows::Forms::CheckBox^  chbIdade;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::GroupBox^  gpbCor;
	private: System::Windows::Forms::RadioButton^  rdbCaramelo;
	private: System::Windows::Forms::RadioButton^  rdbMarrom;
	private: System::Windows::Forms::RadioButton^  rbdPreto;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txbMensagem;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btnCheck = (gcnew System::Windows::Forms::Button());
			this->chkNome = (gcnew System::Windows::Forms::CheckBox());
			this->chbIdade = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->gpbCor = (gcnew System::Windows::Forms::GroupBox());
			this->rdbCaramelo = (gcnew System::Windows::Forms::RadioButton());
			this->rdbMarrom = (gcnew System::Windows::Forms::RadioButton());
			this->rbdPreto = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txbMensagem = (gcnew System::Windows::Forms::TextBox());
			this->gpbCor->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnCheck
			// 
			this->btnCheck->Location = System::Drawing::Point(12, 59);
			this->btnCheck->Name = L"btnCheck";
			this->btnCheck->Size = System::Drawing::Size(75, 23);
			this->btnCheck->TabIndex = 0;
			this->btnCheck->Text = L"Não aperte";
			this->btnCheck->UseVisualStyleBackColor = true;
			this->btnCheck->Click += gcnew System::EventHandler(this, &Form1::btnCheck_Click);
			// 
			// chkNome
			// 
			this->chkNome->AutoSize = true;
			this->chkNome->Location = System::Drawing::Point(13, 101);
			this->chkNome->Name = L"chkNome";
			this->chkNome->Size = System::Drawing::Size(54, 17);
			this->chkNome->TabIndex = 1;
			this->chkNome->Text = L"Nome";
			this->chkNome->UseVisualStyleBackColor = true;
			this->chkNome->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// chbIdade
			// 
			this->chbIdade->AutoSize = true;
			this->chbIdade->Location = System::Drawing::Point(13, 125);
			this->chbIdade->Name = L"chbIdade";
			this->chbIdade->Size = System::Drawing::Size(53, 17);
			this->chbIdade->TabIndex = 2;
			this->chbIdade->Text = L"Idade";
			this->chbIdade->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Ração", L"Carne", L"Coco", L"Grama"});
			this->comboBox1->Location = System::Drawing::Point(12, 165);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->Text = L"Selecione";
			// 
			// gpbCor
			// 
			this->gpbCor->Controls->Add(this->rdbCaramelo);
			this->gpbCor->Controls->Add(this->rdbMarrom);
			this->gpbCor->Controls->Add(this->rbdPreto);
			this->gpbCor->Location = System::Drawing::Point(13, 192);
			this->gpbCor->Name = L"gpbCor";
			this->gpbCor->Size = System::Drawing::Size(120, 118);
			this->gpbCor->TabIndex = 4;
			this->gpbCor->TabStop = false;
			this->gpbCor->Text = L"Cor";
			// 
			// rdbCaramelo
			// 
			this->rdbCaramelo->AutoSize = true;
			this->rdbCaramelo->Location = System::Drawing::Point(7, 76);
			this->rdbCaramelo->Name = L"rdbCaramelo";
			this->rdbCaramelo->Size = System::Drawing::Size(69, 17);
			this->rdbCaramelo->TabIndex = 2;
			this->rdbCaramelo->TabStop = true;
			this->rdbCaramelo->Text = L"Caramelo";
			this->rdbCaramelo->UseVisualStyleBackColor = true;
			// 
			// rdbMarrom
			// 
			this->rdbMarrom->AutoSize = true;
			this->rdbMarrom->Location = System::Drawing::Point(7, 52);
			this->rdbMarrom->Name = L"rdbMarrom";
			this->rdbMarrom->Size = System::Drawing::Size(60, 17);
			this->rdbMarrom->TabIndex = 1;
			this->rdbMarrom->TabStop = true;
			this->rdbMarrom->Text = L"Marrom";
			this->rdbMarrom->UseVisualStyleBackColor = true;
			// 
			// rbdPreto
			// 
			this->rbdPreto->AutoSize = true;
			this->rbdPreto->Location = System::Drawing::Point(7, 29);
			this->rbdPreto->Name = L"rbdPreto";
			this->rbdPreto->Size = System::Drawing::Size(50, 17);
			this->rbdPreto->TabIndex = 0;
			this->rbdPreto->TabStop = true;
			this->rbdPreto->Text = L"Preto";
			this->rbdPreto->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(139, 59);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(216, 197);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Aguardando...";
			// 
			// txbMensagem
			// 
			this->txbMensagem->Location = System::Drawing::Point(13, 30);
			this->txbMensagem->Name = L"txbMensagem";
			this->txbMensagem->Size = System::Drawing::Size(321, 20);
			this->txbMensagem->TabIndex = 7;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(372, 347);
			this->Controls->Add(this->txbMensagem);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->gpbCor);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->chbIdade);
			this->Controls->Add(this->chkNome);
			this->Controls->Add(this->btnCheck);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"MTP";
			this->gpbCor->ResumeLayout(false);
			this->gpbCor->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void btnCheck_Click(System::Object^  sender, System::EventArgs^  e) {
		lblMensagem->Text= "O cachorro ";
		if (chkNome->Checked)
			lblMensagem->Text= lblMensagem->Text + "Bruce, ";
		if (chkIdade->Checked)
			lblMensagem->Text= lblMensagem->Text + "tem 4 anos ";


		 }
};
}

