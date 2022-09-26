#pragma once
#include "CLserviceclient.h"

namespace projetexia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			panelanniv->Visible = false;
			panelcom->Visible = false;
			testpanel->Visible = false;
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Data::DataSet^ oDs;
	private: NS_service_client::CLserviceclient^ oSvc;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ nom;
	private: System::Windows::Forms::TextBox^ prenom;
	private: System::Windows::Forms::Label^ labelanni;

	private: System::Windows::Forms::Label^ labelcom;







	private: System::Diagnostics::EventLog^ eventLog1;
	private: System::Windows::Forms::DateTimePicker^ datecom;
	private: System::Windows::Forms::Panel^ panelanniv;




	private: System::Windows::Forms::DateTimePicker^ dateanni;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panelcom;


	private: System::Windows::Forms::Panel^ testpanel;
	private: System::Windows::Forms::DataGridView^ dgv;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::MaskedTextBox^ etage;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::MaskedTextBox^ numh;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ nomrue;

	private: System::Windows::Forms::MaskedTextBox^ numr;
	private: System::Windows::Forms::ListBox^ ville;



	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ labelfacture;
	private: System::Windows::Forms::Label^ labellivraison;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::TextBox^ nomr;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox8;



















	protected:



	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->nom = (gcnew System::Windows::Forms::TextBox());
			this->prenom = (gcnew System::Windows::Forms::TextBox());
			this->labelanni = (gcnew System::Windows::Forms::Label());
			this->labelcom = (gcnew System::Windows::Forms::Label());
			this->eventLog1 = (gcnew System::Diagnostics::EventLog());
			this->datecom = (gcnew System::Windows::Forms::DateTimePicker());
			this->panelanniv = (gcnew System::Windows::Forms::Panel());
			this->dateanni = (gcnew System::Windows::Forms::DateTimePicker());
			this->panelcom = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->testpanel = (gcnew System::Windows::Forms::Panel());
			this->labelfacture = (gcnew System::Windows::Forms::Label());
			this->labellivraison = (gcnew System::Windows::Forms::Label());
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->ville = (gcnew System::Windows::Forms::ListBox());
			this->numr = (gcnew System::Windows::Forms::MaskedTextBox());
			this->nomrue = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numh = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->etage = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->nomr = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eventLog1))->BeginInit();
			this->panelanniv->SuspendLayout();
			this->panelcom->SuspendLayout();
			this->testpanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->button1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(0, 685);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(1455, 65);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Charger";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// nom
			// 
			this->nom->BackColor = System::Drawing::Color::White;
			this->nom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nom->Font = (gcnew System::Drawing::Font(L"Montserrat", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nom->Location = System::Drawing::Point(244, 15);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(301, 19);
			this->nom->TabIndex = 2;
			// 
			// prenom
			// 
			this->prenom->BackColor = System::Drawing::Color::White;
			this->prenom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->prenom->Font = (gcnew System::Drawing::Font(L"Montserrat", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prenom->Location = System::Drawing::Point(244, 112);
			this->prenom->Name = L"prenom";
			this->prenom->Size = System::Drawing::Size(301, 19);
			this->prenom->TabIndex = 3;
			// 
			// labelanni
			// 
			this->labelanni->AutoSize = true;
			this->labelanni->Location = System::Drawing::Point(58, 30);
			this->labelanni->Name = L"labelanni";
			this->labelanni->Size = System::Drawing::Size(35, 13);
			this->labelanni->TabIndex = 8;
			this->labelanni->Text = L"label1";
			// 
			// labelcom
			// 
			this->labelcom->AutoSize = true;
			this->labelcom->Location = System::Drawing::Point(126, 30);
			this->labelcom->Name = L"labelcom";
			this->labelcom->Size = System::Drawing::Size(35, 13);
			this->labelcom->TabIndex = 9;
			this->labelcom->Text = L"label2";
			// 
			// eventLog1
			// 
			this->eventLog1->SynchronizingObject = this;
			// 
			// datecom
			// 
			this->datecom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->datecom->CalendarFont = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datecom->CustomFormat = L"yyyy-MM-dd";
			this->datecom->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datecom->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->datecom->Location = System::Drawing::Point(0, 0);
			this->datecom->Name = L"datecom";
			this->datecom->Size = System::Drawing::Size(305, 34);
			this->datecom->TabIndex = 11;
			this->datecom->Value = System::DateTime(2021, 12, 3, 0, 0, 0, 0);
			// 
			// panelanniv
			// 
			this->panelanniv->BackColor = System::Drawing::Color::White;
			this->panelanniv->Controls->Add(this->dateanni);
			this->panelanniv->Location = System::Drawing::Point(721, 54);
			this->panelanniv->Name = L"panelanniv";
			this->panelanniv->Size = System::Drawing::Size(305, 62);
			this->panelanniv->TabIndex = 12;
			this->panelanniv->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panelanniv_Paint);
			// 
			// dateanni
			// 
			this->dateanni->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateanni->CustomFormat = L"yyyy-MM-dd";
			this->dateanni->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateanni->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateanni->Location = System::Drawing::Point(0, 3);
			this->dateanni->Name = L"dateanni";
			this->dateanni->Size = System::Drawing::Size(305, 34);
			this->dateanni->TabIndex = 11;
			this->dateanni->Value = System::DateTime(2021, 12, 3, 0, 0, 0, 0);
			this->dateanni->ValueChanged += gcnew System::EventHandler(this, &MyForm1::dateanni_ValueChanged);
			// 
			// panelcom
			// 
			this->panelcom->BackColor = System::Drawing::Color::White;
			this->panelcom->Controls->Add(this->datecom);
			this->panelcom->Location = System::Drawing::Point(721, 158);
			this->panelcom->Name = L"panelcom";
			this->panelcom->Size = System::Drawing::Size(305, 57);
			this->panelcom->TabIndex = 13;
			this->panelcom->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panelcom_Paint);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(1048, 54);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(52, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L" ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(1048, 158);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(52, 23);
			this->button3->TabIndex = 15;
			this->button3->Text = L" ";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// testpanel
			// 
			this->testpanel->Controls->Add(this->labelfacture);
			this->testpanel->Controls->Add(this->labellivraison);
			this->testpanel->Controls->Add(this->labelanni);
			this->testpanel->Controls->Add(this->labelcom);
			this->testpanel->Location = System::Drawing::Point(620, 516);
			this->testpanel->Name = L"testpanel";
			this->testpanel->Size = System::Drawing::Size(200, 100);
			this->testpanel->TabIndex = 16;
			// 
			// labelfacture
			// 
			this->labelfacture->AutoSize = true;
			this->labelfacture->Location = System::Drawing::Point(119, 66);
			this->labelfacture->Name = L"labelfacture";
			this->labelfacture->Size = System::Drawing::Size(41, 13);
			this->labelfacture->TabIndex = 11;
			this->labelfacture->Text = L"label12";
			// 
			// labellivraison
			// 
			this->labellivraison->AutoSize = true;
			this->labellivraison->Location = System::Drawing::Point(61, 66);
			this->labellivraison->Name = L"labellivraison";
			this->labellivraison->Size = System::Drawing::Size(41, 13);
			this->labellivraison->TabIndex = 10;
			this->labellivraison->Text = L"label11";
			// 
			// dgv
			// 
			this->dgv->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->dgv->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgv->BackgroundColor = System::Drawing::Color::White;
			this->dgv->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)),
				static_cast<System::Int32>(static_cast<System::Byte>(146)), static_cast<System::Int32>(static_cast<System::Byte>(89)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(165)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Montserrat", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgv->DefaultCellStyle = dataGridViewCellStyle2;
			this->dgv->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->dgv->Location = System::Drawing::Point(0, 432);
			this->dgv->Name = L"dgv";
			this->dgv->Size = System::Drawing::Size(1455, 255);
			this->dgv->TabIndex = 17;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(244, 41);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(301, 10);
			this->pictureBox4->TabIndex = 19;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(133, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 29);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(133, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 29);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Prénom";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(244, 137);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(301, 10);
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(658, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(223, 29);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Date de naissance";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm1::label3_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(658, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(251, 29);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Date 1re  commande";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm1::label4_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(1411, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(32, 29);
			this->button4->TabIndex = 26;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(23, 58);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 27;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(608, 15);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(54, 36);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 29;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox5_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(608, 112);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(54, 36);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 30;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox3_Click);
			// 
			// ville
			// 
			this->ville->Font = (gcnew System::Drawing::Font(L"Montserrat", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ville->FormattingEnabled = true;
			this->ville->ItemHeight = 21;
			this->ville->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Alger", L"Oran" });
			this->ville->Location = System::Drawing::Point(1219, 256);
			this->ville->Name = L"ville";
			this->ville->Size = System::Drawing::Size(200, 151);
			this->ville->TabIndex = 31;
			// 
			// numr
			// 
			this->numr->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numr->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numr->Location = System::Drawing::Point(785, 256);
			this->numr->Mask = L"0";
			this->numr->Name = L"numr";
			this->numr->Size = System::Drawing::Size(30, 27);
			this->numr->TabIndex = 32;
			this->numr->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numr->ValidatingType = System::Int32::typeid;
			// 
			// nomrue
			// 
			this->nomrue->AutoSize = true;
			this->nomrue->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nomrue->Location = System::Drawing::Point(24, 253);
			this->nomrue->Name = L"nomrue";
			this->nomrue->Size = System::Drawing::Size(149, 29);
			this->nomrue->TabIndex = 36;
			this->nomrue->Text = L"Nom de rue";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(551, 253);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(187, 29);
			this->label5->TabIndex = 38;
			this->label5->Text = L"Numéro de rue";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(28, 348);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(209, 29);
			this->label6->TabIndex = 40;
			this->label6->Text = L"Numéro building";
			// 
			// numh
			// 
			this->numh->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numh->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numh->Location = System::Drawing::Point(313, 351);
			this->numh->Mask = L"0000";
			this->numh->Name = L"numh";
			this->numh->Size = System::Drawing::Size(85, 27);
			this->numh->TabIndex = 39;
			this->numh->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numh->ValidatingType = System::Int32::typeid;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(551, 348);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 29);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Etage";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm1::label7_Click);
			// 
			// etage
			// 
			this->etage->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->etage->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->etage->Location = System::Drawing::Point(681, 351);
			this->etage->Mask = L"000";
			this->etage->Name = L"etage";
			this->etage->Size = System::Drawing::Size(53, 27);
			this->etage->TabIndex = 41;
			this->etage->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->etage->ValidatingType = System::Int32::typeid;
			this->etage->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &MyForm1::maskedTextBox2_MaskInputRejected);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(1134, 256);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 29);
			this->label8->TabIndex = 43;
			this->label8->Text = L"Ville";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(955, 327);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(114, 29);
			this->label9->TabIndex = 44;
			this->label9->Text = L"Livraison";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(955, 384);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(146, 29);
			this->label10->TabIndex = 45;
			this->label10->Text = L"Facturation";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(1119, 339);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 46;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(1119, 395);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 47;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(180, 288);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(301, 10);
			this->pictureBox7->TabIndex = 49;
			this->pictureBox7->TabStop = false;
			// 
			// nomr
			// 
			this->nomr->BackColor = System::Drawing::Color::White;
			this->nomr->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nomr->Font = (gcnew System::Drawing::Font(L"Montserrat", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nomr->Location = System::Drawing::Point(180, 256);
			this->nomr->Name = L"nomr";
			this->nomr->Size = System::Drawing::Size(301, 19);
			this->nomr->TabIndex = 48;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(620, 384);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(182, 10);
			this->pictureBox8->TabIndex = 50;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(232, 384);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(249, 10);
			this->pictureBox9->TabIndex = 51;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(727, 289);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(182, 10);
			this->pictureBox10->TabIndex = 52;
			this->pictureBox10->TabStop = false;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1455, 750);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->nomr);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->etage);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->numh);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->nomrue);
			this->Controls->Add(this->numr);
			this->Controls->Add(this->ville);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->dgv);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panelcom);
			this->Controls->Add(this->panelanniv);
			this->Controls->Add(this->prenom);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->testpanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::WindowsDefaultBounds;
			this->Text = L"MyForm1";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eventLog1))->EndInit();
			this->panelanniv->ResumeLayout(false);
			this->panelcom->ResumeLayout(false);
			this->testpanel->ResumeLayout(false);
			this->testpanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion





private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_service_client::CLserviceclient();

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (panelanniv->Visible == false) {
			labelanni->Text = "";
		}
		else {
			labelanni->Text = dateanni->Text;
		}
		if (panelcom->Visible == false) {
			labelcom->Text = "";
		}
		else {
			labelcom->Text = datecom->Text;
		}
		if (checkBox1->Checked) {
			labellivraison->Text = "";
		}
		else {
			 labellivraison->Text = " and id_livraison is null ";
		}
		if (checkBox2->Checked) {
			labelfacture->Text = "";

		}
		else {
			 labelfacture->Text = " and id_facturation is null ";
		}
		
		this->dgv->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesPersonnesTest("Rsl",this->nom->Text,this->prenom->Text, this->labelanni->Text, this->labelcom->Text,this->nomr->Text,this->numr->Text,this->numh->Text,this->etage->Text,this->ville->Text,this->labelfacture->Text,this->labellivraison->Text);
		this->dgv->DataSource = this->oDs;
		this->dgv->DataMember = "Rsl";
		
	}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button2->BackColor == Color::FromArgb(255, 149, 1, 1)) {
		button2->BackColor = Color::FromArgb(255, 81, 146, 89);
	}
	else {
		button2->BackColor = Color::FromArgb(255, 149, 1, 1);
	}
	if (panelanniv->Visible == false) {
		panelanniv->Visible = true;
	}
	else {
		panelanniv->Visible = false;

	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button3->BackColor == Color::FromArgb(255, 149, 1, 1)) {
		button3->BackColor = Color::FromArgb(255, 81, 146, 89);
	}
	else {
		button3->BackColor = Color::FromArgb(255, 149, 1, 1);
	}
	if (panelcom->Visible == false) {
		panelcom->Visible = true;
	}
	else {
		panelcom->Visible = false;

	}
}
private: System::Void dgv_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void panelanniv_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Veuillez appuyer sur les boutons ci-dessous pour activer/desactiver le filtrage avec date.");
}
private: System::Void maskedTextBox2_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panelcom_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateanni_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
