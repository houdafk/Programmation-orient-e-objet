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
	/// Description résumée de modificationstock
	/// </summary>
	public ref class modificationstock : public System::Windows::Forms::Form
	{
	public:
		modificationstock(void)
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
		~modificationstock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Data::DataSet^ oDs;
	private: NS_service_personnel::CLServicePersonnel^ oSvP;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::MaskedTextBox^ seuil_reap;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MaskedTextBox^ prixachat;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::TextBox^ couleur;
	private: System::Windows::Forms::Label^ sadqw;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ designation;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::TextBox^ nature_a;
	private: System::Windows::Forms::Label^ asaasd;
	private: System::Windows::Forms::MaskedTextBox^ qtt;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::MaskedTextBox^ prixht;
	private: System::Windows::Forms::Label^ asdasd;
	private: System::Windows::Forms::Label^ asdsadqw;
	private: System::Windows::Forms::MaskedTextBox^ tva;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ labeld;
	private: System::Windows::Forms::DataGridView^ dgv;
	private: System::Windows::Forms::TextBox^ ref_a;
	private: System::Windows::Forms::Panel^ testpanel;
	private: System::Windows::Forms::Label^ d;

	private: System::Windows::Forms::Label^ c;

	private: System::Windows::Forms::Label^ a;
	private: System::Windows::Forms::Label^ b;
	private: System::Windows::Forms::Label^ f;
	private: System::Windows::Forms::Label^ i;




	private: System::Windows::Forms::Label^ h;

	private: System::Windows::Forms::Label^ g;
	private: System::Windows::Forms::Label^ ee;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(modificationstock::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->seuil_reap = (gcnew System::Windows::Forms::MaskedTextBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->prixachat = (gcnew System::Windows::Forms::MaskedTextBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->couleur = (gcnew System::Windows::Forms::TextBox());
			this->sadqw = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->designation = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->nature_a = (gcnew System::Windows::Forms::TextBox());
			this->asaasd = (gcnew System::Windows::Forms::Label());
			this->qtt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->prixht = (gcnew System::Windows::Forms::MaskedTextBox());
			this->asdasd = (gcnew System::Windows::Forms::Label());
			this->asdsadqw = (gcnew System::Windows::Forms::Label());
			this->tva = (gcnew System::Windows::Forms::MaskedTextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->labeld = (gcnew System::Windows::Forms::Label());
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->ref_a = (gcnew System::Windows::Forms::TextBox());
			this->testpanel = (gcnew System::Windows::Forms::Panel());
			this->f = (gcnew System::Windows::Forms::Label());
			this->i = (gcnew System::Windows::Forms::Label());
			this->h = (gcnew System::Windows::Forms::Label());
			this->g = (gcnew System::Windows::Forms::Label());
			this->ee = (gcnew System::Windows::Forms::Label());
			this->d = (gcnew System::Windows::Forms::Label());
			this->c = (gcnew System::Windows::Forms::Label());
			this->a = (gcnew System::Windows::Forms::Label());
			this->b = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->BeginInit();
			this->testpanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(622, 300);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(344, 29);
			this->label5->TabIndex = 201;
			this->label5->Text = L"Seuil de réaprovisionnement";
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(971, 336);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(301, 10);
			this->pictureBox13->TabIndex = 200;
			this->pictureBox13->TabStop = false;
			// 
			// seuil_reap
			// 
			this->seuil_reap->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->seuil_reap->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seuil_reap->Location = System::Drawing::Point(1109, 302);
			this->seuil_reap->Mask = L"000";
			this->seuil_reap->Name = L"seuil_reap";
			this->seuil_reap->Size = System::Drawing::Size(53, 27);
			this->seuil_reap->TabIndex = 199;
			this->seuil_reap->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->seuil_reap->ValidatingType = System::Int32::typeid;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(265, 382);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(301, 10);
			this->pictureBox12->TabIndex = 198;
			this->pictureBox12->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(823, 212);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 29);
			this->label2->TabIndex = 197;
			this->label2->Text = L"Quantité";
			// 
			// prixachat
			// 
			this->prixachat->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->prixachat->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prixachat->Location = System::Drawing::Point(351, 354);
			this->prixachat->Mask = L"0000000";
			this->prixachat->Name = L"prixachat";
			this->prixachat->Size = System::Drawing::Size(109, 27);
			this->prixachat->TabIndex = 196;
			this->prixachat->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->prixachat->ValidatingType = System::Int32::typeid;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(265, 139);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(301, 10);
			this->pictureBox11->TabIndex = 195;
			this->pictureBox11->TabStop = false;
			// 
			// couleur
			// 
			this->couleur->BackColor = System::Drawing::Color::White;
			this->couleur->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->couleur->Font = (gcnew System::Drawing::Font(L"Montserrat", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->couleur->Location = System::Drawing::Point(265, 119);
			this->couleur->Name = L"couleur";
			this->couleur->Size = System::Drawing::Size(301, 19);
			this->couleur->TabIndex = 194;
			// 
			// sadqw
			// 
			this->sadqw->AutoSize = true;
			this->sadqw->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sadqw->Location = System::Drawing::Point(146, 113);
			this->sadqw->Name = L"sadqw";
			this->sadqw->Size = System::Drawing::Size(103, 29);
			this->sadqw->TabIndex = 193;
			this->sadqw->Text = L"Couleur";
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
			this->button2->Location = System::Drawing::Point(1167, 398);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(329, 77);
			this->button2->TabIndex = 192;
			this->button2->Text = L"Modifier article";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &modificationstock::button2_Click);
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
			this->button1->Size = System::Drawing::Size(1496, 65);
			this->button1->TabIndex = 191;
			this->button1->Text = L"Charger";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &modificationstock::button1_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(971, 57);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(301, 10);
			this->pictureBox5->TabIndex = 190;
			this->pictureBox5->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(798, 26);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(152, 29);
			this->label11->TabIndex = 189;
			this->label11->Text = L"Designation";
			// 
			// designation
			// 
			this->designation->BackColor = System::Drawing::Color::White;
			this->designation->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->designation->Font = (gcnew System::Drawing::Font(L"Montserrat", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->designation->Location = System::Drawing::Point(971, 32);
			this->designation->Name = L"designation";
			this->designation->Size = System::Drawing::Size(301, 19);
			this->designation->TabIndex = 188;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(971, 155);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(301, 10);
			this->pictureBox10->TabIndex = 187;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(255, 303);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(301, 10);
			this->pictureBox9->TabIndex = 186;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(971, 242);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(301, 10);
			this->pictureBox8->TabIndex = 185;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(265, 226);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(301, 10);
			this->pictureBox7->TabIndex = 184;
			this->pictureBox7->TabStop = false;
			// 
			// nature_a
			// 
			this->nature_a->BackColor = System::Drawing::Color::White;
			this->nature_a->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nature_a->Font = (gcnew System::Drawing::Font(L"Montserrat", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nature_a->Location = System::Drawing::Point(265, 199);
			this->nature_a->Name = L"nature_a";
			this->nature_a->Size = System::Drawing::Size(301, 19);
			this->nature_a->TabIndex = 183;
			// 
			// asaasd
			// 
			this->asaasd->AutoSize = true;
			this->asaasd->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->asaasd->Location = System::Drawing::Point(101, 363);
			this->asaasd->Name = L"asaasd";
			this->asaasd->Size = System::Drawing::Size(148, 29);
			this->asaasd->TabIndex = 182;
			this->asaasd->Text = L"Prix d\'achat";
			// 
			// qtt
			// 
			this->qtt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->qtt->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->qtt->Location = System::Drawing::Point(1109, 212);
			this->qtt->Mask = L"00000";
			this->qtt->Name = L"qtt";
			this->qtt->Size = System::Drawing::Size(53, 27);
			this->qtt->TabIndex = 181;
			this->qtt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->qtt->ValidatingType = System::Int32::typeid;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(154, 272);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 29);
			this->label6->TabIndex = 180;
			this->label6->Text = L"Prix HT";
			// 
			// prixht
			// 
			this->prixht->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->prixht->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prixht->Location = System::Drawing::Point(362, 275);
			this->prixht->Mask = L"00000000";
			this->prixht->Name = L"prixht";
			this->prixht->Size = System::Drawing::Size(85, 27);
			this->prixht->TabIndex = 179;
			this->prixht->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->prixht->ValidatingType = System::Int32::typeid;
			// 
			// asdasd
			// 
			this->asdasd->AutoSize = true;
			this->asdasd->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->asdasd->Location = System::Drawing::Point(879, 115);
			this->asdasd->Name = L"asdasd";
			this->asdasd->Size = System::Drawing::Size(57, 29);
			this->asdasd->TabIndex = 178;
			this->asdasd->Text = L"TVA";
			// 
			// asdsadqw
			// 
			this->asdsadqw->AutoSize = true;
			this->asdsadqw->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->asdsadqw->Location = System::Drawing::Point(157, 194);
			this->asdsadqw->Name = L"asdsadqw";
			this->asdsadqw->Size = System::Drawing::Size(92, 29);
			this->asdsadqw->TabIndex = 177;
			this->asdsadqw->Text = L"Nature";
			// 
			// tva
			// 
			this->tva->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tva->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tva->Location = System::Drawing::Point(1084, 122);
			this->tva->Mask = L"0000000";
			this->tva->Name = L"tva";
			this->tva->Size = System::Drawing::Size(111, 27);
			this->tva->TabIndex = 176;
			this->tva->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tva->ValidatingType = System::Int32::typeid;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(265, 61);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(301, 10);
			this->pictureBox1->TabIndex = 175;
			this->pictureBox1->TabStop = false;
			// 
			// labeld
			// 
			this->labeld->AutoSize = true;
			this->labeld->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeld->Location = System::Drawing::Point(27, 26);
			this->labeld->Name = L"labeld";
			this->labeld->Size = System::Drawing::Size(222, 29);
			this->labeld->TabIndex = 174;
			this->labeld->Text = L"Réference produit";
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
			this->dgv->Location = System::Drawing::Point(-6, 475);
			this->dgv->Name = L"dgv";
			this->dgv->Size = System::Drawing::Size(1502, 212);
			this->dgv->TabIndex = 173;
			this->dgv->DoubleClick += gcnew System::EventHandler(this, &modificationstock::dgv_DoubleClick);
			// 
			// ref_a
			// 
			this->ref_a->BackColor = System::Drawing::Color::White;
			this->ref_a->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ref_a->Font = (gcnew System::Drawing::Font(L"Montserrat", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ref_a->Location = System::Drawing::Point(265, 36);
			this->ref_a->Name = L"ref_a";
			this->ref_a->Size = System::Drawing::Size(301, 19);
			this->ref_a->TabIndex = 171;
			// 
			// testpanel
			// 
			this->testpanel->Controls->Add(this->f);
			this->testpanel->Controls->Add(this->i);
			this->testpanel->Controls->Add(this->h);
			this->testpanel->Controls->Add(this->g);
			this->testpanel->Controls->Add(this->ee);
			this->testpanel->Controls->Add(this->d);
			this->testpanel->Controls->Add(this->c);
			this->testpanel->Controls->Add(this->a);
			this->testpanel->Controls->Add(this->b);
			this->testpanel->Location = System::Drawing::Point(627, 546);
			this->testpanel->Name = L"testpanel";
			this->testpanel->Size = System::Drawing::Size(200, 100);
			this->testpanel->TabIndex = 172;
			// 
			// f
			// 
			this->f->AutoSize = true;
			this->f->Location = System::Drawing::Point(143, 44);
			this->f->Name = L"f";
			this->f->Size = System::Drawing::Size(41, 13);
			this->f->TabIndex = 16;
			this->f->Text = L"label12";
			// 
			// i
			// 
			this->i->AutoSize = true;
			this->i->Location = System::Drawing::Point(143, 60);
			this->i->Name = L"i";
			this->i->Size = System::Drawing::Size(41, 13);
			this->i->TabIndex = 15;
			this->i->Text = L"label12";
			// 
			// h
			// 
			this->h->AutoSize = true;
			this->h->Location = System::Drawing::Point(80, 75);
			this->h->Name = L"h";
			this->h->Size = System::Drawing::Size(41, 13);
			this->h->TabIndex = 14;
			this->h->Text = L"label12";
			// 
			// g
			// 
			this->g->AutoSize = true;
			this->g->Location = System::Drawing::Point(24, 75);
			this->g->Name = L"g";
			this->g->Size = System::Drawing::Size(41, 13);
			this->g->TabIndex = 13;
			this->g->Text = L"label12";
			// 
			// ee
			// 
			this->ee->AutoSize = true;
			this->ee->Location = System::Drawing::Point(80, 44);
			this->ee->Name = L"ee";
			this->ee->Size = System::Drawing::Size(41, 13);
			this->ee->TabIndex = 12;
			this->ee->Text = L"label12";
			// 
			// d
			// 
			this->d->AutoSize = true;
			this->d->Location = System::Drawing::Point(24, 45);
			this->d->Name = L"d";
			this->d->Size = System::Drawing::Size(41, 13);
			this->d->TabIndex = 11;
			this->d->Text = L"label12";
			// 
			// c
			// 
			this->c->AutoSize = true;
			this->c->Location = System::Drawing::Point(102, 14);
			this->c->Name = L"c";
			this->c->Size = System::Drawing::Size(41, 13);
			this->c->TabIndex = 10;
			this->c->Text = L"label11";
			// 
			// a
			// 
			this->a->AutoSize = true;
			this->a->Location = System::Drawing::Point(24, 14);
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(35, 13);
			this->a->TabIndex = 8;
			this->a->Text = L"label1";
			// 
			// b
			// 
			this->b->AutoSize = true;
			this->b->Location = System::Drawing::Point(61, 14);
			this->b->Name = L"b";
			this->b->Size = System::Drawing::Size(35, 13);
			this->b->TabIndex = 9;
			this->b->Text = L"label2";
			// 
			// modificationstock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1496, 750);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->seuil_reap);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->prixachat);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->couleur);
			this->Controls->Add(this->sadqw);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->designation);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->nature_a);
			this->Controls->Add(this->asaasd);
			this->Controls->Add(this->qtt);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->prixht);
			this->Controls->Add(this->asdasd);
			this->Controls->Add(this->asdsadqw);
			this->Controls->Add(this->tva);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->labeld);
			this->Controls->Add(this->dgv);
			this->Controls->Add(this->ref_a);
			this->Controls->Add(this->testpanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"modificationstock";
			this->Text = L"modificationstock";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &modificationstock::modificationstock_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->EndInit();
			this->testpanel->ResumeLayout(false);
			this->testpanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void modificationstock_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oSvP = gcnew NS_service_personnel::CLServicePersonnel();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv->Refresh();
		this->oDs = this->oSvP->selectionarticle("Rsl");
		this->dgv->DataSource = this->oDs;
		this->dgv->DataMember = "Rsl";
	}
private: System::Void dgv_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	if (dgv->SelectedRows->Count >= 0 && dgv->SelectedRows->Count <= 1) {
		ref_a->Text = dgv->SelectedRows[0]->Cells[1]->Value->ToString();
		designation->Text = dgv->SelectedRows[0]->Cells[2]->Value->ToString();
		couleur->Text = dgv->SelectedRows[0]->Cells[3]->Value->ToString();
		nature_a->Text = dgv->SelectedRows[0]->Cells[4]->Value->ToString();
		prixachat->Text = dgv->SelectedRows[0]->Cells[5]->Value->ToString();
		prixht->Text = dgv->SelectedRows[0]->Cells[6]->Value->ToString();
		tva->Text = dgv->SelectedRows[0]->Cells[7]->Value->ToString();
		qtt->Text = dgv->SelectedRows[0]->Cells[8]->Value->ToString();
		seuil_reap->Text = dgv->SelectedRows[0]->Cells[9]->Value->ToString();
		a->Text = ref_a->Text;
		b->Text = designation->Text;
		c->Text = couleur->Text;
		d->Text = nature_a->Text;
		ee->Text = prixachat->Text;
		f->Text = prixht->Text;
		g->Text = tva->Text;
		h->Text = qtt->Text;
		i->Text = seuil_reap->Text;

	

}
};
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ n = "Etes-vous sûre des informations saisies ? " + "\nNom: " + ref_a->Text + "\nQuantité: " + qtt->Text;

	if (ref_a->Text != "" && designation->Text != "" && couleur->Text != "" && nature_a->Text != "" && prixachat->Text != "" && prixht->Text != "" && tva->Text != "" && seuil_reap->Text != "") {
		if (MessageBox::Show(n, "Vérification", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

			this->oSvP->modifstock(this->ref_a->Text, this->designation->Text, this->couleur->Text, this->nature_a->Text, this->prixachat->Text, this->prixht->Text, this->tva->Text, this->qtt->Text, this->seuil_reap->Text, this->a->Text, this->b->Text, this->c->Text, this->d->Text, this->ee->Text, this->f->Text, this->g->Text, this->h->Text, this->i->Text);

		}

	}
}
};
}
