#pragma once

namespace projGUI2 {

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
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	protected: 
	private: System::Windows::Forms::Button^  bttsev;
	private: System::Windows::Forms::Button^  btteig;
	private: System::Windows::Forms::Button^  bttnin;
	private: System::Windows::Forms::Button^  bttadd;
	private: System::Windows::Forms::Button^  bttce;
	private: System::Windows::Forms::Button^  bttfour;
	private: System::Windows::Forms::Button^  bttone;
	private: System::Windows::Forms::Button^  bttzero;
	private: System::Windows::Forms::Button^  bttigual;
	private: System::Windows::Forms::Button^  bttfive;
	private: System::Windows::Forms::Button^  btttwo;
	private: System::Windows::Forms::Button^  bttponto;
	private: System::Windows::Forms::Button^  bttsix;
	private: System::Windows::Forms::Button^  btttrh;
	private: System::Windows::Forms::Button^  btttroca;
	private: System::Windows::Forms::Button^  bttsub;
	private: System::Windows::Forms::Button^  bttmult;
	private: System::Windows::Forms::Button^  bttdiv;
	private: System::Windows::Forms::Button^  bttfat;
	private: System::Windows::Forms::Button^  bttpow;
	private: System::Windows::Forms::Button^  bttsqrt;

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
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->bttsev = (gcnew System::Windows::Forms::Button());
			this->btteig = (gcnew System::Windows::Forms::Button());
			this->bttnin = (gcnew System::Windows::Forms::Button());
			this->bttadd = (gcnew System::Windows::Forms::Button());
			this->bttce = (gcnew System::Windows::Forms::Button());
			this->bttfour = (gcnew System::Windows::Forms::Button());
			this->bttone = (gcnew System::Windows::Forms::Button());
			this->bttzero = (gcnew System::Windows::Forms::Button());
			this->bttigual = (gcnew System::Windows::Forms::Button());
			this->bttfive = (gcnew System::Windows::Forms::Button());
			this->btttwo = (gcnew System::Windows::Forms::Button());
			this->bttponto = (gcnew System::Windows::Forms::Button());
			this->bttsix = (gcnew System::Windows::Forms::Button());
			this->btttrh = (gcnew System::Windows::Forms::Button());
			this->btttroca = (gcnew System::Windows::Forms::Button());
			this->bttsub = (gcnew System::Windows::Forms::Button());
			this->bttmult = (gcnew System::Windows::Forms::Button());
			this->bttdiv = (gcnew System::Windows::Forms::Button());
			this->bttfat = (gcnew System::Windows::Forms::Button());
			this->bttpow = (gcnew System::Windows::Forms::Button());
			this->bttsqrt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::White;
			this->linkLabel1->BackColor = System::Drawing::Color::White;
			this->linkLabel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->linkLabel1->Location = System::Drawing::Point(13, 13);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(308, 29);
			this->linkLabel1->TabIndex = 0;
			this->linkLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// bttsev
			// 
			this->bttsev->BackColor = System::Drawing::Color::White;
			this->bttsev->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttsev->Location = System::Drawing::Point(13, 63);
			this->bttsev->Name = L"bttsev";
			this->bttsev->Size = System::Drawing::Size(57, 45);
			this->bttsev->TabIndex = 1;
			this->bttsev->Text = L"7";
			this->bttsev->UseVisualStyleBackColor = false;
			// 
			// btteig
			// 
			this->btteig->BackColor = System::Drawing::Color::White;
			this->btteig->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btteig->Location = System::Drawing::Point(76, 63);
			this->btteig->Name = L"btteig";
			this->btteig->Size = System::Drawing::Size(57, 45);
			this->btteig->TabIndex = 1;
			this->btteig->Text = L"8";
			this->btteig->UseVisualStyleBackColor = false;
			// 
			// bttnin
			// 
			this->bttnin->BackColor = System::Drawing::Color::White;
			this->bttnin->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttnin->Location = System::Drawing::Point(138, 63);
			this->bttnin->Name = L"bttnin";
			this->bttnin->Size = System::Drawing::Size(57, 45);
			this->bttnin->TabIndex = 1;
			this->bttnin->Text = L"9";
			this->bttnin->UseVisualStyleBackColor = false;
			// 
			// bttadd
			// 
			this->bttadd->BackColor = System::Drawing::Color::White;
			this->bttadd->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttadd->Location = System::Drawing::Point(201, 63);
			this->bttadd->Name = L"bttadd";
			this->bttadd->Size = System::Drawing::Size(57, 45);
			this->bttadd->TabIndex = 1;
			this->bttadd->Text = L"+";
			this->bttadd->UseVisualStyleBackColor = false;
			// 
			// bttce
			// 
			this->bttce->BackColor = System::Drawing::Color::White;
			this->bttce->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttce->Location = System::Drawing::Point(264, 63);
			this->bttce->Name = L"bttce";
			this->bttce->Size = System::Drawing::Size(57, 45);
			this->bttce->TabIndex = 1;
			this->bttce->Text = L"CE";
			this->bttce->UseVisualStyleBackColor = false;
			// 
			// bttfour
			// 
			this->bttfour->BackColor = System::Drawing::Color::White;
			this->bttfour->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttfour->Location = System::Drawing::Point(13, 114);
			this->bttfour->Name = L"bttfour";
			this->bttfour->Size = System::Drawing::Size(57, 45);
			this->bttfour->TabIndex = 1;
			this->bttfour->Text = L"4";
			this->bttfour->UseVisualStyleBackColor = false;
			// 
			// bttone
			// 
			this->bttone->BackColor = System::Drawing::Color::White;
			this->bttone->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttone->Location = System::Drawing::Point(13, 165);
			this->bttone->Name = L"bttone";
			this->bttone->Size = System::Drawing::Size(57, 45);
			this->bttone->TabIndex = 1;
			this->bttone->Text = L"1";
			this->bttone->UseVisualStyleBackColor = false;
			// 
			// bttzero
			// 
			this->bttzero->BackColor = System::Drawing::Color::White;
			this->bttzero->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttzero->Location = System::Drawing::Point(13, 216);
			this->bttzero->Name = L"bttzero";
			this->bttzero->Size = System::Drawing::Size(57, 45);
			this->bttzero->TabIndex = 1;
			this->bttzero->Text = L"0";
			this->bttzero->UseVisualStyleBackColor = false;
			// 
			// bttigual
			// 
			this->bttigual->BackColor = System::Drawing::Color::White;
			this->bttigual->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttigual->Location = System::Drawing::Point(76, 267);
			this->bttigual->Name = L"bttigual";
			this->bttigual->Size = System::Drawing::Size(182, 45);
			this->bttigual->TabIndex = 1;
			this->bttigual->Text = L"=";
			this->bttigual->UseVisualStyleBackColor = false;
			// 
			// bttfive
			// 
			this->bttfive->BackColor = System::Drawing::Color::White;
			this->bttfive->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttfive->Location = System::Drawing::Point(76, 114);
			this->bttfive->Name = L"bttfive";
			this->bttfive->Size = System::Drawing::Size(57, 45);
			this->bttfive->TabIndex = 1;
			this->bttfive->Text = L"5";
			this->bttfive->UseVisualStyleBackColor = false;
			// 
			// btttwo
			// 
			this->btttwo->BackColor = System::Drawing::Color::White;
			this->btttwo->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btttwo->Location = System::Drawing::Point(76, 165);
			this->btttwo->Name = L"btttwo";
			this->btttwo->Size = System::Drawing::Size(57, 45);
			this->btttwo->TabIndex = 1;
			this->btttwo->Text = L"2";
			this->btttwo->UseVisualStyleBackColor = false;
			// 
			// bttponto
			// 
			this->bttponto->BackColor = System::Drawing::Color::White;
			this->bttponto->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttponto->Location = System::Drawing::Point(76, 216);
			this->bttponto->Name = L"bttponto";
			this->bttponto->Size = System::Drawing::Size(57, 45);
			this->bttponto->TabIndex = 1;
			this->bttponto->Text = L".";
			this->bttponto->UseVisualStyleBackColor = false;
			// 
			// bttsix
			// 
			this->bttsix->BackColor = System::Drawing::Color::White;
			this->bttsix->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttsix->Location = System::Drawing::Point(138, 114);
			this->bttsix->Name = L"bttsix";
			this->bttsix->Size = System::Drawing::Size(57, 45);
			this->bttsix->TabIndex = 1;
			this->bttsix->Text = L"6";
			this->bttsix->UseVisualStyleBackColor = false;
			// 
			// btttrh
			// 
			this->btttrh->BackColor = System::Drawing::Color::White;
			this->btttrh->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btttrh->Location = System::Drawing::Point(138, 165);
			this->btttrh->Name = L"btttrh";
			this->btttrh->Size = System::Drawing::Size(57, 45);
			this->btttrh->TabIndex = 1;
			this->btttrh->Text = L"3";
			this->btttrh->UseVisualStyleBackColor = false;
			// 
			// btttroca
			// 
			this->btttroca->BackColor = System::Drawing::Color::White;
			this->btttroca->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btttroca->Location = System::Drawing::Point(138, 216);
			this->btttroca->Name = L"btttroca";
			this->btttroca->Size = System::Drawing::Size(57, 45);
			this->btttroca->TabIndex = 1;
			this->btttroca->Text = L"±";
			this->btttroca->UseVisualStyleBackColor = false;
			// 
			// bttsub
			// 
			this->bttsub->BackColor = System::Drawing::Color::White;
			this->bttsub->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttsub->Location = System::Drawing::Point(201, 114);
			this->bttsub->Name = L"bttsub";
			this->bttsub->Size = System::Drawing::Size(57, 45);
			this->bttsub->TabIndex = 1;
			this->bttsub->Text = L"-";
			this->bttsub->UseVisualStyleBackColor = false;
			// 
			// bttmult
			// 
			this->bttmult->BackColor = System::Drawing::Color::White;
			this->bttmult->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttmult->Location = System::Drawing::Point(201, 165);
			this->bttmult->Name = L"bttmult";
			this->bttmult->Size = System::Drawing::Size(57, 45);
			this->bttmult->TabIndex = 1;
			this->bttmult->Text = L"×";
			this->bttmult->UseVisualStyleBackColor = false;
			// 
			// bttdiv
			// 
			this->bttdiv->BackColor = System::Drawing::Color::White;
			this->bttdiv->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttdiv->Location = System::Drawing::Point(201, 216);
			this->bttdiv->Name = L"bttdiv";
			this->bttdiv->Size = System::Drawing::Size(57, 45);
			this->bttdiv->TabIndex = 1;
			this->bttdiv->Text = L"÷";
			this->bttdiv->UseVisualStyleBackColor = false;
			// 
			// bttfat
			// 
			this->bttfat->BackColor = System::Drawing::Color::White;
			this->bttfat->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttfat->Location = System::Drawing::Point(264, 114);
			this->bttfat->Name = L"bttfat";
			this->bttfat->Size = System::Drawing::Size(57, 45);
			this->bttfat->TabIndex = 1;
			this->bttfat->Text = L"n!";
			this->bttfat->UseVisualStyleBackColor = false;
			// 
			// bttpow
			// 
			this->bttpow->BackColor = System::Drawing::Color::White;
			this->bttpow->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttpow->Location = System::Drawing::Point(264, 165);
			this->bttpow->Name = L"bttpow";
			this->bttpow->Size = System::Drawing::Size(57, 45);
			this->bttpow->TabIndex = 1;
			this->bttpow->Text = L"x^y";
			this->bttpow->UseVisualStyleBackColor = false;
			// 
			// bttsqrt
			// 
			this->bttsqrt->BackColor = System::Drawing::Color::White;
			this->bttsqrt->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttsqrt->Location = System::Drawing::Point(264, 216);
			this->bttsqrt->Name = L"bttsqrt";
			this->bttsqrt->Size = System::Drawing::Size(57, 45);
			this->bttsqrt->TabIndex = 1;
			this->bttsqrt->Text = L"√¯ ";
			this->bttsqrt->UseVisualStyleBackColor = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::OldLace;
			this->ClientSize = System::Drawing::Size(333, 328);
			this->Controls->Add(this->bttsqrt);
			this->Controls->Add(this->bttpow);
			this->Controls->Add(this->bttfat);
			this->Controls->Add(this->bttce);
			this->Controls->Add(this->bttdiv);
			this->Controls->Add(this->bttmult);
			this->Controls->Add(this->bttsub);
			this->Controls->Add(this->bttadd);
			this->Controls->Add(this->btttroca);
			this->Controls->Add(this->btttrh);
			this->Controls->Add(this->bttsix);
			this->Controls->Add(this->bttnin);
			this->Controls->Add(this->bttponto);
			this->Controls->Add(this->btttwo);
			this->Controls->Add(this->bttfive);
			this->Controls->Add(this->btteig);
			this->Controls->Add(this->bttigual);
			this->Controls->Add(this->bttzero);
			this->Controls->Add(this->bttone);
			this->Controls->Add(this->bttfour);
			this->Controls->Add(this->bttsev);
			this->Controls->Add(this->linkLabel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Calculadora";
			this->ResumeLayout(false);

		}
#define MAXDIGITOS 21
		bool flagponto;
		double memoria;
		char operacao;
		void liberadisplay()
		{
			lbldisplay->Text = "0";
			flagponto = false;
			flagresultado = false;
		}
		bool flagresultado;
		double fat(double numero)
		{
			if(numero == 0)
				return 1;
			else
				return numero*fat(numero-1);
		}

#pragma endregion
	private: System::Void bttzero_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(lbldisplay->Text->Length < MAXDIGITOS) {
					if(lbldisplay->Text != "0")
						 lbldisplay->Text = lbldisplay->Text + "0";
					if(flagresultado)
					{
						lbldisplay->Text = "1";
						flagresultado = false;
					}
				}
			 }
	private: System::Void bttone_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				if(lbldisplay->Text->Length < MAXDIGITOS) 
				{
					if(lbldisplay->Text != "0" && !flagresultado)
						lbldisplay->Text = lbldisplay->Text + "1";
					else
					{
						lbldisplay->Text = "1";
						flagresultado = false;
					}
				}
			}

	private: System::Void btttwo_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(lbldisplay->Text->Length < MAXDIGITOS) 
				{
					if(lbldisplay->Text != "0" && !flagresultado)
						lbldisplay->Text = lbldisplay->Text + "2";
					else
					{
						lbldisplay->Text = "2";
						flagresultado = false;
					}
				}
				 
			 }
	private: System::Void bttce_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				lbldisplay->Text = "0";
				flagponto = false;
			 }
	private: System::Void bttponto_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				if(lbldisplay->Text->Length < MAXDIGITOS) {
					if(!flagponto)
					{
						lbldisplay->Text = lbldisplay->Text + ",";
						flagponto = true;
					}
				}
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				flagponto = false;
				flagresultado = false;
				memoria = 0,0;
				operacao = '\0';
			}
private: System::Void btttroca_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 //Versao 1
			 //double numero = System::Convert::ToDouble(lbldisplay->Text);
			 //lbldisplay->Text = System::Convert::ToString(numero*(-1));
			 //Versao 2
			 if(lbldisplay->Text->Substring(0,1) == "-")
				 lbldisplay->Text = lbldisplay->Text->Substring(1);
			 else
				 lbldisplay->Text = "-" + lbldisplay->Text;

		 }
private: System::Void bttsqrt_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 double numero = System::Convert::ToDouble(lbldisplay->Text);
			 lbldisplay->Text = System::Convert::ToString(sqrt(numero));
			 if(lbldisplay->Text->Length > MAXDIGITOS)
				lbldisplay->Text = lbldisplay->Text->Substring(0,MAXDIGITOS);
			 flagresultado = true;
		 }
private: System::Void bttadd_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 memoria = System::Convert::ToDouble(lbldisplay->Text);
			 operacao = '+';
			 liberadisplay();
		 }
private: System::Void bttigual_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 double numero = System::Convert::ToDouble(lbldisplay->Text);
			 switch(operacao)
			 {
				case '+': memoria += numero; break;
				case '-': memoria -= numero; break;
				case '*': memoria *= numero; break;
				case '/': memoria /= numero; break;
				case '^': memoria = Math::Pow(memoria, numero); break;
			 }
			 if(memoria > Math::Pow(10,MAXDIGITOS)-1)
				 lbldisplay->Text = memoria.ToString("e");
			 else
				lbldisplay->Text = memoria.ToString();
				flagresultado = true;

		 }
private: System::Void bttsub_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 memoria = System::Convert::ToDouble(lbldisplay->Text);
			 operacao = '-';
			 liberadisplay();
		 }
private: System::Void bttmult_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 memoria = System::Convert::ToDouble(lbldisplay->Text);
			 operacao = '*';
			 liberadisplay();
		 }
private: System::Void bttdiv_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 memoria = System::Convert::ToDouble(lbldisplay->Text);
			 operacao = '/';
			 liberadisplay();
		 }
private: System::Void bttfat_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 double fatorial;
			 double numero = System::Convert::ToDouble(lbldisplay->Text);
			 fatorial = fat(numero);
			 lbldisplay->Text = System::Convert::ToString(fatorial);
			 if(lbldisplay->Text->Length > MAXDIGITOS)
				lbldisplay->Text = lbldisplay->Text->Substring(0,MAXDIGITOS);
			 flagresultado = true;
		 }
private: System::Void btttrh_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(lbldisplay->Text->Length < MAXDIGITOS) 
				{
					if(lbldisplay->Text != "0" && !flagresultado)
						lbldisplay->Text = lbldisplay->Text + "3";
					else
					{
						lbldisplay->Text = "3";
						flagresultado = false;
					}
				}
		 }
private: System::Void bttfour_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(lbldisplay->Text->Length < MAXDIGITOS) 
				{
					if(lbldisplay->Text != "0" && !flagresultado)
						lbldisplay->Text = lbldisplay->Text + "4";
					else
					{
						lbldisplay->Text = "4";
						flagresultado = false;
					}
				}
		 }
private: System::Void bttfive_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(lbldisplay->Text->Length < MAXDIGITOS) 
				{
					if(lbldisplay->Text != "0" && !flagresultado)
						lbldisplay->Text = lbldisplay->Text + "5";
					else
					{
						lbldisplay->Text = "5";
						flagresultado = false;
					}
				}
		 }
private: System::Void bttsix_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(lbldisplay->Text->Length < MAXDIGITOS) 
				{
					if(lbldisplay->Text != "0" && !flagresultado)
						lbldisplay->Text = lbldisplay->Text + "6";
					else
					{
						lbldisplay->Text = "6";
						flagresultado = false;
					}
				}
		 }
private: System::Void bttsev_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(lbldisplay->Text->Length < MAXDIGITOS) 
				{
					if(lbldisplay->Text != "0" && !flagresultado)
						lbldisplay->Text = lbldisplay->Text + "7";
					else
					{
						lbldisplay->Text = "7";
						flagresultado = false;
					}
				}
		 }
private: System::Void btteig_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 if(lbldisplay->Text->Length < MAXDIGITOS) 
				{
					if(lbldisplay->Text != "0" && !flagresultado)
						lbldisplay->Text = lbldisplay->Text + "8";
					else
					{
						lbldisplay->Text = "8";
						flagresultado = false;
					}
				}
		 }
private: System::Void bttnin_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(lbldisplay->Text->Length < MAXDIGITOS) 
				{
					if(lbldisplay->Text != "0" && !flagresultado)
						lbldisplay->Text = lbldisplay->Text + "9";
					else
					{
						lbldisplay->Text = "9";
						flagresultado = false;
					}
				}
		 }
private: System::Void bttpow_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 memoria = System::Convert::ToDouble(lbldisplay->Text);
			 operacao = '^';
			 liberadisplay();
		 }
};
}

