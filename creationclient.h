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
	/// Description résumée de creationclient
	/// </summary>
	public ref class creationclient : public System::Windows::Forms::Form
	{
	public:
		creationclient(void)
		{
			InitializeComponent();
			panelanniv->Visible = false;
			panelcom->Visible = false;
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~creationclient()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Data::DataSet^ oDs;
	private: NS_service_client::CLserviceclient^ oSvc;
	private: System::Windows::Forms::DataGridView^ dgv;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;



	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;




	private: System::Windows::Forms::TextBox^ prenom;
	private: System::Windows::Forms::TextBox^ nom;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::MaskedTextBox^ etage;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::MaskedTextBox^ numh;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ nomrue;
	private: System::Windows::Forms::MaskedTextBox^ numr;
	private: System::Windows::Forms::ListBox^ ville;
	private: System::Windows::Forms::Panel^ testpanel;
	private: System::Windows::Forms::Label^ labelfacture;
	private: System::Windows::Forms::Label^ labellivraison;
	private: System::Windows::Forms::Label^ labelanni;
	private: System::Windows::Forms::Label^ labelcom;
	private: System::Windows::Forms::TextBox^ nomr;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panelcom;
	private: System::Windows::Forms::DateTimePicker^ datecom;
	private: System::Windows::Forms::Panel^ panelanniv;
	private: System::Windows::Forms::DateTimePicker^ dateanni;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Label^ labelliv;
	private: System::Windows::Forms::Label^ labelfac;

	private: System::Windows::Forms::Button^ button5;











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(creationclient::typeid));
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->prenom = (gcnew System::Windows::Forms::TextBox());
			this->nom = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->etage = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numh = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->nomrue = (gcnew System::Windows::Forms::Label());
			this->numr = (gcnew System::Windows::Forms::MaskedTextBox());
			this->ville = (gcnew System::Windows::Forms::ListBox());
			this->testpanel = (gcnew System::Windows::Forms::Panel());
			this->labelliv = (gcnew System::Windows::Forms::Label());
			this->labelfac = (gcnew System::Windows::Forms::Label());
			this->labelfacture = (gcnew System::Windows::Forms::Label());
			this->labellivraison = (gcnew System::Windows::Forms::Label());
			this->labelanni = (gcnew System::Windows::Forms::Label());
			this->labelcom = (gcnew System::Windows::Forms::Label());
			this->nomr = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panelcom = (gcnew System::Windows::Forms::Panel());
			this->datecom = (gcnew System::Windows::Forms::DateTimePicker());
			this->panelanniv = (gcnew System::Windows::Forms::Panel());
			this->dateanni = (gcnew System::Windows::Forms::DateTimePicker());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->testpanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panelcom->SuspendLayout();
			this->panelanniv->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv
			// 
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
			this->dgv->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dgv->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->dgv->Location = System::Drawing::Point(0, 478);
			this->dgv->Name = L"dgv";
			this->dgv->Size = System::Drawing::Size(1455, 207);
			this->dgv->TabIndex = 21;
			this->dgv->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &creationclient::dgv_CellClick);
			this->dgv->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &creationclient::dgv_MouseDoubleClick);
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
			this->button1->TabIndex = 20;
			this->button1->Text = L"Charger";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &creationclient::button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(148, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 29);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Nom";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 68);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 42;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(259, 152);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(301, 10);
			this->pictureBox1->TabIndex = 38;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(148, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 29);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Prénom";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(259, 52);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(301, 10);
			this->pictureBox4->TabIndex = 35;
			this->pictureBox4->TabStop = false;
			// 
			// prenom
			// 
			this->prenom->BackColor = System::Drawing::Color::White;
			this->prenom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->prenom->Font = (gcnew System::Drawing::Font(L"Montserrat", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prenom->Location = System::Drawing::Point(259, 123);
			this->prenom->Name = L"prenom";
			this->prenom->Size = System::Drawing::Size(301, 19);
			this->prenom->TabIndex = 32;
			// 
			// nom
			// 
			this->nom->BackColor = System::Drawing::Color::White;
			this->nom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nom->Font = (gcnew System::Drawing::Font(L"Montserrat", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nom->Location = System::Drawing::Point(259, 26);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(301, 19);
			this->nom->TabIndex = 31;
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
			this->button2->Location = System::Drawing::Point(797, 402);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(329, 77);
			this->button2->TabIndex = 45;
			this->button2->Text = L"Créer client";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &creationclient::button2_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(767, 277);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(182, 10);
			this->pictureBox10->TabIndex = 69;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(311, 372);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(249, 10);
			this->pictureBox9->TabIndex = 68;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(764, 372);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(182, 10);
			this->pictureBox8->TabIndex = 67;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &creationclient::pictureBox8_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(259, 275);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(301, 10);
			this->pictureBox7->TabIndex = 66;
			this->pictureBox7->TabStop = false;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(270, 457);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 65;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(521, 457);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 64;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(106, 446);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(146, 29);
			this->label10->TabIndex = 63;
			this->label10->Text = L"Facturation";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(357, 445);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(114, 29);
			this->label9->TabIndex = 62;
			this->label9->Text = L"Livraison";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(1149, 281);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 29);
			this->label8->TabIndex = 61;
			this->label8->Text = L"Ville";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(698, 336);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 29);
			this->label7->TabIndex = 60;
			this->label7->Text = L"Etage";
			this->label7->Click += gcnew System::EventHandler(this, &creationclient::label7_Click);
			// 
			// etage
			// 
			this->etage->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->etage->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->etage->Location = System::Drawing::Point(825, 339);
			this->etage->Mask = L"000";
			this->etage->Name = L"etage";
			this->etage->Size = System::Drawing::Size(53, 27);
			this->etage->TabIndex = 59;
			this->etage->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->etage->ValidatingType = System::Int32::typeid;
			this->etage->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &creationclient::etage_MaskInputRejected);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(103, 336);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(209, 29);
			this->label6->TabIndex = 58;
			this->label6->Text = L"Numéro building";
			// 
			// numh
			// 
			this->numh->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numh->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numh->Location = System::Drawing::Point(392, 339);
			this->numh->Mask = L"0000";
			this->numh->Name = L"numh";
			this->numh->Size = System::Drawing::Size(85, 27);
			this->numh->TabIndex = 57;
			this->numh->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numh->ValidatingType = System::Int32::typeid;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(591, 241);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(187, 29);
			this->label5->TabIndex = 56;
			this->label5->Text = L"Numéro de rue";
			// 
			// nomrue
			// 
			this->nomrue->AutoSize = true;
			this->nomrue->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nomrue->Location = System::Drawing::Point(103, 240);
			this->nomrue->Name = L"nomrue";
			this->nomrue->Size = System::Drawing::Size(149, 29);
			this->nomrue->TabIndex = 55;
			this->nomrue->Text = L"Nom de rue";
			// 
			// numr
			// 
			this->numr->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numr->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numr->Location = System::Drawing::Point(839, 243);
			this->numr->Mask = L"0";
			this->numr->Name = L"numr";
			this->numr->Size = System::Drawing::Size(30, 27);
			this->numr->TabIndex = 54;
			this->numr->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numr->ValidatingType = System::Int32::typeid;
			// 
			// ville
			// 
			this->ville->Font = (gcnew System::Drawing::Font(L"Montserrat", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ville->FormattingEnabled = true;
			this->ville->ItemHeight = 21;
			this->ville->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Alger", L"Oran" });
			this->ville->Location = System::Drawing::Point(1243, 224);
			this->ville->Name = L"ville";
			this->ville->Size = System::Drawing::Size(200, 151);
			this->ville->TabIndex = 53;
			// 
			// testpanel
			// 
			this->testpanel->Controls->Add(this->labelliv);
			this->testpanel->Controls->Add(this->labelfac);
			this->testpanel->Controls->Add(this->labelfacture);
			this->testpanel->Controls->Add(this->labellivraison);
			this->testpanel->Controls->Add(this->labelanni);
			this->testpanel->Controls->Add(this->labelcom);
			this->testpanel->Location = System::Drawing::Point(578, 570);
			this->testpanel->Name = L"testpanel";
			this->testpanel->Size = System::Drawing::Size(200, 100);
			this->testpanel->TabIndex = 70;
			// 
			// labelliv
			// 
			this->labelliv->AutoSize = true;
			this->labelliv->Location = System::Drawing::Point(126, 68);
			this->labelliv->Name = L"labelliv";
			this->labelliv->Size = System::Drawing::Size(41, 13);
			this->labelliv->TabIndex = 13;
			this->labelliv->Text = L"label12";
			// 
			// labelfac
			// 
			this->labelfac->AutoSize = true;
			this->labelfac->Location = System::Drawing::Point(28, 68);
			this->labelfac->Name = L"labelfac";
			this->labelfac->Size = System::Drawing::Size(41, 13);
			this->labelfac->TabIndex = 12;
			this->labelfac->Text = L"label12";
			// 
			// labelfacture
			// 
			this->labelfacture->AutoSize = true;
			this->labelfacture->Location = System::Drawing::Point(111, 44);
			this->labelfacture->Name = L"labelfacture";
			this->labelfacture->Size = System::Drawing::Size(41, 13);
			this->labelfacture->TabIndex = 11;
			this->labelfacture->Text = L"label12";
			// 
			// labellivraison
			// 
			this->labellivraison->AutoSize = true;
			this->labellivraison->Location = System::Drawing::Point(28, 44);
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
			// nomr
			// 
			this->nomr->BackColor = System::Drawing::Color::White;
			this->nomr->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nomr->Font = (gcnew System::Drawing::Font(L"Montserrat", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nomr->Location = System::Drawing::Point(259, 249);
			this->nomr->Name = L"nomr";
			this->nomr->Size = System::Drawing::Size(301, 19);
			this->nomr->TabIndex = 71;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(772, 110);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(54, 36);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 79;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(772, 13);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(54, 36);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 78;
			this->pictureBox5->TabStop = false;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(822, 117);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(251, 29);
			this->label4->TabIndex = 77;
			this->label4->Text = L"Date 1re  commande";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(822, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(223, 29);
			this->label3->TabIndex = 76;
			this->label3->Text = L"Date de naissance";
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(1212, 156);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(52, 23);
			this->button3->TabIndex = 75;
			this->button3->Text = L" ";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &creationclient::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(1212, 52);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(52, 23);
			this->button4->TabIndex = 74;
			this->button4->Text = L" ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &creationclient::button4_Click);
			// 
			// panelcom
			// 
			this->panelcom->BackColor = System::Drawing::Color::White;
			this->panelcom->Controls->Add(this->datecom);
			this->panelcom->Location = System::Drawing::Point(885, 156);
			this->panelcom->Name = L"panelcom";
			this->panelcom->Size = System::Drawing::Size(305, 37);
			this->panelcom->TabIndex = 73;
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
			this->panelanniv->Location = System::Drawing::Point(885, 52);
			this->panelanniv->Name = L"panelanniv";
			this->panelanniv->Size = System::Drawing::Size(305, 44);
			this->panelanniv->TabIndex = 72;
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
			// 
			// pictureBox6
			// 
			this->pictureBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(32, 277);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(54, 36);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 80;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(1019, 275);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(72, 59);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 81;
			this->pictureBox11->TabStop = false;
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(1126, 402);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(329, 77);
			this->button5->TabIndex = 83;
			this->button5->Text = L"Créer adresse";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &creationclient::button5_Click);
			// 
			// creationclient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1455, 750);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->panelcom);
			this->Controls->Add(this->panelanniv);
			this->Controls->Add(this->nomr);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
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
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->prenom);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->dgv);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->testpanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"creationclient";
			this->Text = L"creationclient";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &creationclient::creationclient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->testpanel->ResumeLayout(false);
			this->testpanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panelcom->ResumeLayout(false);
			this->panelanniv->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void creationclient_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_service_client::CLserviceclient();
	}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
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
	this->oDs = this->oSvc->selectionnerToutesLesPersonnesTest("Rsl", this->nom->Text, this->prenom->Text, this->labelanni->Text, this->labelcom->Text, this->nomr->Text, this->numr->Text, this->numh->Text, this->etage->Text, this->ville->Text, this->labelfacture->Text, this->labellivraison->Text);
	this->dgv->DataSource = this->oDs;
	this->dgv->DataMember = "Rsl";

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
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
		labellivraison->Text = "(select id__c from client where nom_c ='" + nom ->Text+ "' and prenom_c ='" + prenom->Text + "')";
	}
	else {
		labellivraison->Text = "NULL";
	}
	if (checkBox2->Checked) {
		labelfacture->Text = "(select id__c from client where nom_c ='"+nom->Text+"' and prenom_c ='"+prenom->Text+"')";

	}
	else {
		labelfacture->Text = " NULL";
	}
	String^ n = "Etes-vous sûre des informations saisies ? " + "\nNom: " + nom->Text + "\nPrenom: " + prenom->Text+"\nDate de naissance: "+dateanni->Text+"\nDate de la première commande: "+datecom->Text;
	
	if (nom->Text !="" || prenom->Text !="" ||   labelanni->Text != "" || labelcom->Text != "" || nomr->Text != "" || numr->Text != "" || numh->Text != "" ||  ville->Text != "") {
    if (MessageBox::Show(n, "Vérification", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		this->oSvc->ajouterUnePersonne(this->nom->Text, this->prenom->Text, this->labelanni->Text, this->labelcom->Text, this->nomr->Text, this->numr->Text, this->numh->Text, this->etage->Text, this->ville->Text, this->labelfacture->Text, this->labellivraison->Text);
	};

	}
	else {
		MessageBox::Show("Veuillez remplir tout les champs");
	}
	
	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button4->BackColor == Color::FromArgb(255, 149, 1, 1)) {
		button4->BackColor = Color::FromArgb(255, 81, 146, 89);
	}
	else {
		button4->BackColor = Color::FromArgb(255, 149, 1, 1);
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
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void etage_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
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
		labellivraison->Text = "(select id__c from client where nom_c ='" + nom->Text + "' and prenom_c ='" + prenom->Text + "')";
	}
	else {
		labellivraison->Text = "NULL";
	}
	if (checkBox2->Checked) {
		labelfacture->Text = "(select id__c from client where nom_c ='" + nom->Text + "' and prenom_c ='" + prenom->Text + "')";

	}
	else {
		labelfacture->Text = " NULL";
	}
	String^ n = "Etes-vous sûre des informations saisies ? " + "\nNom: " + nom->Text + "\nPrenom: " + prenom->Text + "\nDate de naissance: " + dateanni->Text + "\nDate de la première commande: " + datecom->Text;
	
	if (nom->Text != "" || prenom->Text != "" || labelanni->Text != "" || labelcom->Text != "" || nomr->Text != "" || numr->Text != "" || numh->Text != "" || ville->Text != "") {
		if (MessageBox::Show(n, "Vérification", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			this->oSvc->ajouterUnePersonnetest(this->nom->Text, this->prenom->Text, this->labelanni->Text, this->labelcom->Text, this->nomr->Text, this->numr->Text, this->numh->Text, this->etage->Text, this->ville->Text, this->labelfacture->Text, this->labellivraison->Text);
		};

	}
	else {
		MessageBox::Show("Veuillez remplir tout les champs");
	}


}
private: System::Void dgv_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
	}
private: System::Void dgv_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	
}
};
}
