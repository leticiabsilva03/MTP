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
	private: System::Windows::Forms::Button^  btnNao;
	protected: 

	private: System::Windows::Forms::TextBox^  txtUsuario;
	private: System::Windows::Forms::CheckBox^  chkNome;
	private: System::Windows::Forms::CheckBox^  chkIdade;
	protected: 



	private: System::Windows::Forms::Label^  lblMensagem;


	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::GroupBox^  cmbCor;

	private: System::Windows::Forms::RadioButton^  rbdCinza;

	private: System::Windows::Forms::RadioButton^  rdbPreto;


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::RadioButton^  rdbMarrom;


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
			this->btnNao = (gcnew System::Windows::Forms::Button());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->chkNome = (gcnew System::Windows::Forms::CheckBox());
			this->chkIdade = (gcnew System::Windows::Forms::CheckBox());
			this->lblMensagem = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->cmbCor = (gcnew System::Windows::Forms::GroupBox());
			this->rdbPreto = (gcnew System::Windows::Forms::RadioButton());
			this->rbdCinza = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->rdbMarrom = (gcnew System::Windows::Forms::RadioButton());
			this->cmbCor->SuspendLayout();
			
			this->SuspendLayout();
			// 
			// btnNao
			// 
			this->btnNao->Location = System::Drawing::Point(299, 54);
			this->btnNao->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->btnNao->Name = L"btnNao";
			this->btnNao->Size = System::Drawing::Size(89, 29);
			this->btnNao->TabIndex = 0;
			this->btnNao->Text = L"Não aperte";
			this->btnNao->UseVisualStyleBackColor = true;
			this->btnNao->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txtUsuario
			// 
			this->txtUsuario->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtUsuario->Location = System::Drawing::Point(5, 12);
			this->txtUsuario->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(401, 27);
			this->txtUsuario->TabIndex = 1;
		
			// 
			// chkNome
			// 
			this->chkNome->AutoSize = true;
			this->chkNome->Location = System::Drawing::Point(197, 49);
			this->chkNome->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->chkNome->Name = L"chkNome";
			this->chkNome->Size = System::Drawing::Size(61, 20);
			this->chkNome->TabIndex = 2;
			this->chkNome->Text = L"Nome";
			this->chkNome->UseVisualStyleBackColor = true;
			this->chkNome->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// chkIdade
			// 
			this->chkIdade->AutoSize = true;
			this->chkIdade->Location = System::Drawing::Point(197, 75);
			this->chkIdade->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->chkIdade->Name = L"chkIdade";
			this->chkIdade->Size = System::Drawing::Size(58, 20);
			this->chkIdade->TabIndex = 3;
			this->chkIdade->Text = L"Idade";
			this->chkIdade->UseVisualStyleBackColor = true;
			// 
			// lblMensagem
			// 
			this->lblMensagem->Font = (gcnew System::Drawing::Font(L"Gabriola", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblMensagem->Location = System::Drawing::Point(12, 37);
			this->lblMensagem->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lblMensagem->Name = L"lblMensagem";
			this->lblMensagem->Size = System::Drawing::Size(142, 46);
			this->lblMensagem->TabIndex = 4;
			this->lblMensagem->Text = L" MTP";
			this->lblMensagem->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Ração", L"Carne", L"Coco", L"Grama"});
			this->comboBox1->Location = System::Drawing::Point(12, 103);
			this->comboBox1->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(139, 24);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->Text = L"Selecione...";
			// 
			// cmbCor
			// 
			this->cmbCor->Controls->Add(this->rdbMarrom);
			this->cmbCor->Controls->Add(this->rbdCinza);
			this->cmbCor->Controls->Add(this->rdbPreto);
			this->cmbCor->Location = System::Drawing::Point(12, 133);
			this->cmbCor->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->cmbCor->Name = L"cmbCor";
			this->cmbCor->Padding = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->cmbCor->Size = System::Drawing::Size(142, 157);
			this->cmbCor->TabIndex = 6;
			this->cmbCor->TabStop = false;
			this->cmbCor->Text = L"Cor";
			// 
			// rdbPreto
			// 
			this->rdbPreto->AutoSize = true;
			this->rdbPreto->Location = System::Drawing::Point(9, 37);
			this->rdbPreto->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->rdbPreto->Name = L"rdbPreto";
			this->rdbPreto->Size = System::Drawing::Size(57, 20);
			this->rdbPreto->TabIndex = 0;
			this->rdbPreto->TabStop = true;
			this->rdbPreto->Text = L"Preto";
			this->rdbPreto->UseVisualStyleBackColor = true;
			// 
			// rbdCinza
			// 
			this->rbdCinza->AutoSize = true;
			this->rbdCinza->Location = System::Drawing::Point(5, 85);
			this->rbdCinza->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->rbdCinza->Name = L"rbdCinza";
			this->rbdCinza->Size = System::Drawing::Size(59, 20);
			this->rbdCinza->TabIndex = 1;
			this->rbdCinza->TabStop = true;
			this->rbdCinza->Text = L"Cinza";
			this->rbdCinza->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(159, 103);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(229, 178);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			//
			// rdbMarrom
			// 
			this->rdbMarrom->AutoSize = true;
			this->rdbMarrom->Location = System::Drawing::Point(5, 128);
			this->rdbMarrom->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->rdbMarrom->Name = L"rdbMarrom";
			this->rdbMarrom->Size = System::Drawing::Size(70, 20);
			this->rdbMarrom->TabIndex = 2;
			this->rdbMarrom->TabStop = true;
			this->rdbMarrom->Text = L"Marrom";
			this->rdbMarrom->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(410, 308);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->cmbCor);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->lblMensagem);
			this->Controls->Add(this->chkIdade);
			this->Controls->Add(this->chkNome);
			this->Controls->Add(this->txtUsuario);
			this->Controls->Add(this->btnNao);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->Name = L"Form1";
			this->Text = L"MTP";
			this->cmbCor->ResumeLayout(false);
			this->cmbCor->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 lblMensagem->Text = "Meu cachorro, ";
					if (chkNome->Checked)
						lblMensagem->Text = lblMensagem->Text +"Bruce,";
					if (chkIdade->Checked)
						lblMensagem->Text = lblMensagem->Text+ "4 anos";}


			 };
			 }


