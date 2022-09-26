#pragma once
#include "CLServicePersonnel.h"
namespace projetexia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ajoutpersonnelle
	/// </summary>
	public ref class ajoutpersonnelle : public System::Windows::Forms::Form
	{
	public:
		ajoutpersonnelle(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ajoutpersonnelle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::TextBox^ prenomsup;
	private: System::Windows::Forms::TextBox^ nomsup;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::TextBox^ nomr;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::MaskedTextBox^ etage;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::MaskedTextBox^ numh;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ nomrue;
	private: System::Windows::Forms::MaskedTextBox^ numr;
	private: System::Windows::Forms::ListBox^ ville;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::DataGridView^ dgv;
	private: System::Windows::Forms::Panel^ panelembauche;
	private: System::Windows::Forms::DateTimePicker^ datecom;
	private: System::Windows::Forms::TextBox^ prenom;
	private: System::Windows::Forms::TextBox^ nom;
	private: System::Windows::Forms::Panel^ testpanel;
	private: System::Windows::Forms::Label^ labelfacture;
	private: System::Windows::Forms::Label^ labellivraison;
	private: System::Windows::Forms::Label^ labelanni;
	private: System::Windows::Forms::Label^ labelcom;
	private: System::Data::DataSet^ oDs;
	private: NS_service_personnel::CLServicePersonnel^ oSvP;

	private: System::Windows::Forms::Button^ button2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ajoutpersonnelle::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->prenomsup = (gcnew System::Windows::Forms::TextBox());
			this->nomsup = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->nomr = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->etage = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numh = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->nomrue = (gcnew System::Windows::Forms::Label());
			this->numr = (gcnew System::Windows::Forms::MaskedTextBox());
			this->ville = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->panelembauche = (gcnew System::Windows::Forms::Panel());
			this->datecom = (gcnew System::Windows::Forms::DateTimePicker());
			this->prenom = (gcnew System::Windows::Forms::TextBox());
			this->nom = (gcnew System::Windows::Forms::TextBox());
			this->testpanel = (gcnew System::Windows::Forms::Panel());
			this->labelfacture = (gcnew System::Windows::Forms::Label());
			this->labellivraison = (gcnew System::Windows::Forms::Label());
			this->labelanni = (gcnew System::Windows::Forms::Label());
			this->labelcom = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->BeginInit();
			this->panelembauche->SuspendLayout();
			this->testpanel->SuspendLayout();
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
			this->button1->Location = System::Drawing::Point(0, 646);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(1480, 65);
			this->button1->TabIndex = 127;
			this->button1->Text = L"Charger";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(864, 8);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(184, 29);
			this->label3->TabIndex = 124;
			this->label3->Text = L"Nom supérieur";
			this->label3->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::label3_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(1073, 136);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(301, 10);
			this->pictureBox5->TabIndex = 126;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::pictureBox5_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(828, 101);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(220, 29);
			this->label11->TabIndex = 125;
			this->label11->Text = L"Prénom supérieur";
			this->label11->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::label11_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(1073, 40);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(301, 10);
			this->pictureBox6->TabIndex = 123;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::pictureBox6_Click);
			// 
			// prenomsup
			// 
			this->prenomsup->BackColor = System::Drawing::Color::White;
			this->prenomsup->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->prenomsup->Font = (gcnew System::Drawing::Font(L"Montserrat", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prenomsup->Location = System::Drawing::Point(1073, 111);
			this->prenomsup->Name = L"prenomsup";
			this->prenomsup->Size = System::Drawing::Size(301, 19);
			this->prenomsup->TabIndex = 122;
			this->prenomsup->TextChanged += gcnew System::EventHandler(this, &ajoutpersonnelle::prenomsup_TextChanged);
			// 
			// nomsup
			// 
			this->nomsup->BackColor = System::Drawing::Color::White;
			this->nomsup->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nomsup->Font = (gcnew System::Drawing::Font(L"Montserrat", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nomsup->Location = System::Drawing::Point(1073, 14);
			this->nomsup->Name = L"nomsup";
			this->nomsup->Size = System::Drawing::Size(301, 19);
			this->nomsup->TabIndex = 121;
			this->nomsup->TextChanged += gcnew System::EventHandler(this, &ajoutpersonnelle::nomsup_TextChanged);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(740, 288);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(182, 10);
			this->pictureBox10->TabIndex = 120;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::pictureBox10_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(245, 383);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(249, 10);
			this->pictureBox9->TabIndex = 119;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::pictureBox9_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(623, 383);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(182, 10);
			this->pictureBox8->TabIndex = 118;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::pictureBox8_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(193, 287);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(301, 10);
			this->pictureBox7->TabIndex = 117;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::pictureBox7_Click);
			// 
			// nomr
			// 
			this->nomr->BackColor = System::Drawing::Color::White;
			this->nomr->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nomr->Font = (gcnew System::Drawing::Font(L"Montserrat", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nomr->Location = System::Drawing::Point(193, 255);
			this->nomr->Name = L"nomr";
			this->nomr->Size = System::Drawing::Size(301, 19);
			this->nomr->TabIndex = 116;
			this->nomr->TextChanged += gcnew System::EventHandler(this, &ajoutpersonnelle::nomr_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(1146, 269);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 29);
			this->label8->TabIndex = 115;
			this->label8->Text = L"Ville";
			this->label8->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(551, 347);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 29);
			this->label7->TabIndex = 114;
			this->label7->Text = L"Etage";
			this->label7->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::label7_Click);
			// 
			// etage
			// 
			this->etage->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->etage->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->etage->Location = System::Drawing::Point(684, 350);
			this->etage->Mask = L"000";
			this->etage->Name = L"etage";
			this->etage->Size = System::Drawing::Size(53, 27);
			this->etage->TabIndex = 113;
			this->etage->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->etage->ValidatingType = System::Int32::typeid;
			this->etage->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &ajoutpersonnelle::etage_MaskInputRejected);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(41, 347);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(209, 29);
			this->label6->TabIndex = 112;
			this->label6->Text = L"Numéro building";
			this->label6->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::label6_Click);
			// 
			// numh
			// 
			this->numh->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numh->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numh->Location = System::Drawing::Point(326, 350);
			this->numh->Mask = L"0000";
			this->numh->Name = L"numh";
			this->numh->Size = System::Drawing::Size(85, 27);
			this->numh->TabIndex = 111;
			this->numh->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numh->ValidatingType = System::Int32::typeid;
			this->numh->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &ajoutpersonnelle::numh_MaskInputRejected);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(564, 252);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(187, 29);
			this->label5->TabIndex = 110;
			this->label5->Text = L"Numéro de rue";
			this->label5->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::label5_Click);
			// 
			// nomrue
			// 
			this->nomrue->AutoSize = true;
			this->nomrue->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nomrue->Location = System::Drawing::Point(37, 252);
			this->nomrue->Name = L"nomrue";
			this->nomrue->Size = System::Drawing::Size(149, 29);
			this->nomrue->TabIndex = 109;
			this->nomrue->Text = L"Nom de rue";
			this->nomrue->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::nomrue_Click);
			// 
			// numr
			// 
			this->numr->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numr->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numr->Location = System::Drawing::Point(811, 258);
			this->numr->Mask = L"000";
			this->numr->Name = L"numr";
			this->numr->Size = System::Drawing::Size(30, 27);
			this->numr->TabIndex = 108;
			this->numr->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numr->ValidatingType = System::Int32::typeid;
			this->numr->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &ajoutpersonnelle::numr_MaskInputRejected);
			// 
			// ville
			// 
			this->ville->Font = (gcnew System::Drawing::Font(L"Montserrat", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ville->FormattingEnabled = true;
			this->ville->ItemHeight = 21;
			this->ville->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Alger", L"Oran" });
			this->ville->Location = System::Drawing::Point(1232, 255);
			this->ville->Name = L"ville";
			this->ville->Size = System::Drawing::Size(200, 88);
			this->ville->TabIndex = 107;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(763, 188);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(54, 36);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 106;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::pictureBox3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(146, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 29);
			this->label1->TabIndex = 101;
			this->label1->Text = L"Nom";
			this->label1->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::label1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(36, 57);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 105;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::pictureBox2_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(813, 195);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(217, 29);
			this->label4->TabIndex = 104;
			this->label4->Text = L"Date d\'embauche";
			this->label4->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::label4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(257, 136);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(301, 10);
			this->pictureBox1->TabIndex = 103;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::pictureBox1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(146, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 29);
			this->label2->TabIndex = 102;
			this->label2->Text = L"Prénom";
			this->label2->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::label2_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(257, 40);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(301, 10);
			this->pictureBox4->TabIndex = 100;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::pictureBox4_Click);
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
			this->dgv->Location = System::Drawing::Point(0, 436);
			this->dgv->Name = L"dgv";
			this->dgv->Size = System::Drawing::Size(1480, 209);
			this->dgv->TabIndex = 99;
			this->dgv->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ajoutpersonnelle::dgv_CellContentClick);
			// 
			// panelembauche
			// 
			this->panelembauche->BackColor = System::Drawing::Color::White;
			this->panelembauche->Controls->Add(this->datecom);
			this->panelembauche->Location = System::Drawing::Point(1069, 195);
			this->panelembauche->Name = L"panelembauche";
			this->panelembauche->Size = System::Drawing::Size(305, 43);
			this->panelembauche->TabIndex = 97;
			this->panelembauche->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ajoutpersonnelle::panelembauche_Paint);
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
			// prenom
			// 
			this->prenom->BackColor = System::Drawing::Color::White;
			this->prenom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->prenom->Font = (gcnew System::Drawing::Font(L"Montserrat", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prenom->Location = System::Drawing::Point(257, 111);
			this->prenom->Name = L"prenom";
			this->prenom->Size = System::Drawing::Size(301, 19);
			this->prenom->TabIndex = 96;
			this->prenom->TextChanged += gcnew System::EventHandler(this, &ajoutpersonnelle::prenom_TextChanged);
			// 
			// nom
			// 
			this->nom->BackColor = System::Drawing::Color::White;
			this->nom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nom->Font = (gcnew System::Drawing::Font(L"Montserrat", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nom->Location = System::Drawing::Point(257, 14);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(301, 19);
			this->nom->TabIndex = 95;
			this->nom->TextChanged += gcnew System::EventHandler(this, &ajoutpersonnelle::nom_TextChanged);
			// 
			// testpanel
			// 
			this->testpanel->Controls->Add(this->labelfacture);
			this->testpanel->Controls->Add(this->labellivraison);
			this->testpanel->Controls->Add(this->labelanni);
			this->testpanel->Controls->Add(this->labelcom);
			this->testpanel->Location = System::Drawing::Point(633, 515);
			this->testpanel->Name = L"testpanel";
			this->testpanel->Size = System::Drawing::Size(200, 100);
			this->testpanel->TabIndex = 98;
			this->testpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ajoutpersonnelle::testpanel_Paint);
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
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(1151, 360);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(329, 77);
			this->button2->TabIndex = 128;
			this->button2->Text = L"Créer personnel";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ajoutpersonnelle::button2_Click);
			// 
			// ajoutpersonnelle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1480, 711);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->prenomsup);
			this->Controls->Add(this->nomsup);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->nomr);
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
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->dgv);
			this->Controls->Add(this->panelembauche);
			this->Controls->Add(this->prenom);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->testpanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ajoutpersonnelle";
			this->Text = L"ajoutpersonnelle";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &ajoutpersonnelle::ajoutpersonnelle_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->EndInit();
			this->panelembauche->ResumeLayout(false);
			this->testpanel->ResumeLayout(false);
			this->testpanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ajoutpersonnelle_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oSvP = gcnew NS_service_personnel::CLServicePersonnel();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dgv->Refresh();
	this->oDs = this->oSvP->selectionpersonnel("Rsl", this->nom->Text, this->prenom->Text);
	this->dgv->DataSource = this->oDs;
	this->dgv->DataMember = "Rsl";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ n = "Etes-vous sûre des informations saisies ? " + "\nNom: " + nom->Text + "\nPrenom: " + prenom->Text + "\nDate d'embauche: " + datecom->Text;

	if (nom->Text != "" && prenom->Text != "" && labelanni->Text != "" && labelcom->Text != "" && nomr->Text != "" && numr->Text != "" && numh->Text != "" && ville->Text != "") {
		if (MessageBox::Show(n, "Vérification", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			this->oSvP->ajoutpersonneladd(this->nomr->Text, this->numr->Text, this->numh->Text, this->etage->Text, this->ville->Text);
			this->oSvP->ajoutpersonnel(this->nom->Text, this->prenom->Text, this->datecom->Text, this->nomsup->Text, this->prenomsup->Text, this->nomr->Text, this->ville->Text, this->numr->Text);

		};

	}
	else {
		MessageBox::Show("Veuillez remplir tout les champs");
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void prenomsup_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void nomsup_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void nomr_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void etage_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numh_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void nomrue_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numr_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgv_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void panelembauche_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void prenom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void nom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void testpanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
