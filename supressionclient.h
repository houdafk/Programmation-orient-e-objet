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
	/// Description résumée de supressionclient
	/// </summary>
	public ref class supressionclient : public System::Windows::Forms::Form
	{
	public:
		supressionclient(void)
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
		~supressionclient()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




















































	private: System::Data::DataSet^ oDs;
	private: NS_service_client::CLserviceclient^ oSvc;
	private: System::Windows::Forms::ListBox^ ville;

	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panelcom;
	private: System::Windows::Forms::DateTimePicker^ datecom;
	private: System::Windows::Forms::Panel^ panelanniv;
	private: System::Windows::Forms::DateTimePicker^ dateanni;
	private: System::Windows::Forms::TextBox^ nomr;
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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::TextBox^ prenom;
	private: System::Windows::Forms::TextBox^ nom;
	private: System::Windows::Forms::DataGridView^ dgv;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ testpanel;
	private: System::Windows::Forms::Label^ idlrecup;
	private: System::Windows::Forms::Label^ idfrecup;
	private: System::Windows::Forms::Label^ nomrecup;
	private: System::Windows::Forms::Label^ datearecup;
	private: System::Windows::Forms::Label^ datecrecup;
	private: System::Windows::Forms::Label^ prenomrecup;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ labelliv;
	private: System::Windows::Forms::Label^ labelfac;
	private: System::Windows::Forms::Label^ labelfacture;
	private: System::Windows::Forms::Label^ labellivraison;
	private: System::Windows::Forms::Label^ labelanni;
	private: System::Windows::Forms::Label^ labelcom;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(supressionclient::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->ville = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panelcom = (gcnew System::Windows::Forms::Panel());
			this->datecom = (gcnew System::Windows::Forms::DateTimePicker());
			this->panelanniv = (gcnew System::Windows::Forms::Panel());
			this->dateanni = (gcnew System::Windows::Forms::DateTimePicker());
			this->nomr = (gcnew System::Windows::Forms::TextBox());
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->prenom = (gcnew System::Windows::Forms::TextBox());
			this->nom = (gcnew System::Windows::Forms::TextBox());
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->testpanel = (gcnew System::Windows::Forms::Panel());
			this->idlrecup = (gcnew System::Windows::Forms::Label());
			this->idfrecup = (gcnew System::Windows::Forms::Label());
			this->nomrecup = (gcnew System::Windows::Forms::Label());
			this->datearecup = (gcnew System::Windows::Forms::Label());
			this->datecrecup = (gcnew System::Windows::Forms::Label());
			this->prenomrecup = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->labelliv = (gcnew System::Windows::Forms::Label());
			this->labelfac = (gcnew System::Windows::Forms::Label());
			this->labelfacture = (gcnew System::Windows::Forms::Label());
			this->labellivraison = (gcnew System::Windows::Forms::Label());
			this->labelanni = (gcnew System::Windows::Forms::Label());
			this->labelcom = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panelcom->SuspendLayout();
			this->panelanniv->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->BeginInit();
			this->testpanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// ville
			// 
			resources->ApplyResources(this->ville, L"ville");
			this->ville->FormattingEnabled = true;
			this->ville->Items->AddRange(gcnew cli::array< System::Object^  >(2) { resources->GetString(L"ville.Items"), resources->GetString(L"ville.Items1") });
			this->ville->Name = L"ville";
			// 
			// pictureBox11
			// 
			resources->ApplyResources(this->pictureBox11, L"pictureBox11");
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox6
			// 
			resources->ApplyResources(this->pictureBox6, L"pictureBox6");
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox3
			// 
			resources->ApplyResources(this->pictureBox3, L"pictureBox3");
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox5
			// 
			resources->ApplyResources(this->pictureBox5, L"pictureBox5");
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->TabStop = false;
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// panelcom
			// 
			this->panelcom->BackColor = System::Drawing::Color::White;
			this->panelcom->Controls->Add(this->datecom);
			resources->ApplyResources(this->panelcom, L"panelcom");
			this->panelcom->Name = L"panelcom";
			// 
			// datecom
			// 
			resources->ApplyResources(this->datecom, L"datecom");
			this->datecom->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->datecom->Name = L"datecom";
			this->datecom->Value = System::DateTime(2021, 12, 3, 0, 0, 0, 0);
			// 
			// panelanniv
			// 
			this->panelanniv->BackColor = System::Drawing::Color::White;
			this->panelanniv->Controls->Add(this->dateanni);
			resources->ApplyResources(this->panelanniv, L"panelanniv");
			this->panelanniv->Name = L"panelanniv";
			// 
			// dateanni
			// 
			resources->ApplyResources(this->dateanni, L"dateanni");
			this->dateanni->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateanni->Name = L"dateanni";
			this->dateanni->Value = System::DateTime(2021, 12, 3, 0, 0, 0, 0);
			// 
			// nomr
			// 
			this->nomr->BackColor = System::Drawing::Color::White;
			this->nomr->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->nomr, L"nomr");
			this->nomr->Name = L"nomr";
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox10, L"pictureBox10");
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox9, L"pictureBox9");
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox8, L"pictureBox8");
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox7, L"pictureBox7");
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->TabStop = false;
			// 
			// checkBox2
			// 
			resources->ApplyResources(this->checkBox2, L"checkBox2");
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			resources->ApplyResources(this->checkBox1, L"checkBox1");
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			resources->ApplyResources(this->label10, L"label10");
			this->label10->Name = L"label10";
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->Name = L"label9";
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->Name = L"label8";
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->Name = L"label7";
			// 
			// etage
			// 
			this->etage->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->etage, L"etage");
			this->etage->Name = L"etage";
			this->etage->ValidatingType = System::Int32::typeid;
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->Name = L"label6";
			// 
			// numh
			// 
			this->numh->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->numh, L"numh");
			this->numh->Name = L"numh";
			this->numh->ValidatingType = System::Int32::typeid;
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// nomrue
			// 
			resources->ApplyResources(this->nomrue, L"nomrue");
			this->nomrue->Name = L"nomrue";
			// 
			// numr
			// 
			this->numr->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->numr, L"numr");
			this->numr->Name = L"numr";
			this->numr->ValidatingType = System::Int32::typeid;
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &supressionclient::button2_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox4, L"pictureBox4");
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->TabStop = false;
			// 
			// prenom
			// 
			this->prenom->BackColor = System::Drawing::Color::White;
			this->prenom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->prenom, L"prenom");
			this->prenom->Name = L"prenom";
			// 
			// nom
			// 
			this->nom->BackColor = System::Drawing::Color::White;
			this->nom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->nom, L"nom");
			this->nom->Name = L"nom";
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
			resources->ApplyResources(this->dgv, L"dgv");
			this->dgv->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->dgv->Name = L"dgv";
			this->dgv->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &supressionclient::dgv_CellContentClick);
			this->dgv->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &supressionclient::dgv_MouseDoubleClick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			resources->ApplyResources(this->button1, L"button1");
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &supressionclient::button1_Click_1);
			// 
			// testpanel
			// 
			this->testpanel->Controls->Add(this->idlrecup);
			this->testpanel->Controls->Add(this->idfrecup);
			this->testpanel->Controls->Add(this->nomrecup);
			this->testpanel->Controls->Add(this->datearecup);
			this->testpanel->Controls->Add(this->datecrecup);
			this->testpanel->Controls->Add(this->prenomrecup);
			this->testpanel->Controls->Add(this->label11);
			this->testpanel->Controls->Add(this->labelliv);
			this->testpanel->Controls->Add(this->labelfac);
			this->testpanel->Controls->Add(this->labelfacture);
			this->testpanel->Controls->Add(this->labellivraison);
			this->testpanel->Controls->Add(this->labelanni);
			this->testpanel->Controls->Add(this->labelcom);
			resources->ApplyResources(this->testpanel, L"testpanel");
			this->testpanel->Name = L"testpanel";
			// 
			// idlrecup
			// 
			resources->ApplyResources(this->idlrecup, L"idlrecup");
			this->idlrecup->Name = L"idlrecup";
			// 
			// idfrecup
			// 
			resources->ApplyResources(this->idfrecup, L"idfrecup");
			this->idfrecup->Name = L"idfrecup";
			// 
			// nomrecup
			// 
			resources->ApplyResources(this->nomrecup, L"nomrecup");
			this->nomrecup->Name = L"nomrecup";
			// 
			// datearecup
			// 
			resources->ApplyResources(this->datearecup, L"datearecup");
			this->datearecup->Name = L"datearecup";
			// 
			// datecrecup
			// 
			resources->ApplyResources(this->datecrecup, L"datecrecup");
			this->datecrecup->Name = L"datecrecup";
			// 
			// prenomrecup
			// 
			resources->ApplyResources(this->prenomrecup, L"prenomrecup");
			this->prenomrecup->Name = L"prenomrecup";
			// 
			// label11
			// 
			resources->ApplyResources(this->label11, L"label11");
			this->label11->Name = L"label11";
			// 
			// labelliv
			// 
			resources->ApplyResources(this->labelliv, L"labelliv");
			this->labelliv->Name = L"labelliv";
			// 
			// labelfac
			// 
			resources->ApplyResources(this->labelfac, L"labelfac");
			this->labelfac->Name = L"labelfac";
			// 
			// labelfacture
			// 
			resources->ApplyResources(this->labelfacture, L"labelfacture");
			this->labelfacture->Name = L"labelfacture";
			// 
			// labellivraison
			// 
			resources->ApplyResources(this->labellivraison, L"labellivraison");
			this->labellivraison->Name = L"labellivraison";
			// 
			// labelanni
			// 
			resources->ApplyResources(this->labelanni, L"labelanni");
			this->labelanni->Name = L"labelanni";
			// 
			// labelcom
			// 
			resources->ApplyResources(this->labelcom, L"labelcom");
			this->labelcom->Name = L"labelcom";
			// 
			// button5
			// 
			resources->ApplyResources(this->button5, L"button5");
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &supressionclient::button5_Click);
			// 
			// button3
			// 
			resources->ApplyResources(this->button3, L"button3");
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &supressionclient::button3_Click);
			// 
			// button4
			// 
			resources->ApplyResources(this->button4, L"button4");
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &supressionclient::button4_Click);
			// 
			// supressionclient
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->ville);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
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
			this->Name = L"supressionclient";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &supressionclient::supressionclient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panelcom->ResumeLayout(false);
			this->panelanniv->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->EndInit();
			this->testpanel->ResumeLayout(false);
			this->testpanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		
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
private: System::Void dgv_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void supressionclient_Load(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc = gcnew NS_service_client::CLserviceclient();
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
			this->oSvc->deleteadresse(this->labelfacture->Text, this->labellivraison->Text);
			this->oSvc->deletepersonne(this->nom->Text, this->prenom->Text);
		};

	}
	else {
		MessageBox::Show("Veuillez remplir tout les champs");
	}
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
			this->oSvc->deleteadresse(this->labelfacture->Text, this->labellivraison->Text);
			
		};

	}
	else {
		MessageBox::Show("Veuillez remplir tout les champs");
	}
}
private: System::Void dgv_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (dgv->SelectedRows->Count >= 0 && dgv->SelectedRows->Count <= 1) {
		nom->Text = dgv->SelectedRows[0]->Cells[0]->Value->ToString();
		prenom->Text = dgv->SelectedRows[0]->Cells[1]->Value->ToString();
		numr->Text = dgv->SelectedRows[0]->Cells[2]->Value->ToString();
		nomr->Text = dgv->SelectedRows[0]->Cells[3]->Value->ToString();
		numh->Text = dgv->SelectedRows[0]->Cells[4]->Value->ToString();
		etage->Text = dgv->SelectedRows[0]->Cells[5]->Value->ToString();
		ville->Text = dgv->SelectedRows[0]->Cells[6]->Value->ToString();
		datecom->Text = dgv->SelectedRows[0]->Cells[7]->Value->ToString();
		dateanni->Text = dgv->SelectedRows[0]->Cells[8]->Value->ToString();
		idfrecup->Text = dgv->SelectedRows[0]->Cells[9]->Value->ToString();
		idlrecup->Text = dgv->SelectedRows[0]->Cells[10]->Value->ToString();
	}
	nomrecup->Text = nom->Text;
	prenomrecup->Text = prenom->Text;
	datearecup->Text = dateanni->Text;
	datecrecup->Text = datecom->Text;
	if (idfrecup->Text != "") {
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox2->Checked = true;
	}
	if (idlrecup->Text != "") {
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox1->Checked = true;
	}
	if (idlrecup->Text != "" && idfrecup->Text != "") {
		checkBox1->Checked = true;
		checkBox2->Checked = true;
	}

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button3->BackColor == Color::FromArgb(255, 149, 1, 1)) {
		button3->BackColor = Color::FromArgb(255, 81, 146, 89);
	}
	else {
		button3->BackColor = Color::FromArgb(255, 149, 1, 1);
	}
	if (panelanniv->Visible == false) {
		panelanniv->Visible = true;
	}
	else {
		panelanniv->Visible = false;

	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button4->BackColor == Color::FromArgb(255, 149, 1, 1)) {
		button4->BackColor = Color::FromArgb(255, 81, 146, 89);
	}
	else {
		button4->BackColor = Color::FromArgb(255, 149, 1, 1);
	}
	if (panelcom->Visible == false) {
		panelcom->Visible = true;
	}
	else {
		panelcom->Visible = false;

	}
}
};
}
