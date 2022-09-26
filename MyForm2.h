#pragma once
#include "MyForm1.h"
#include "creationclient.h"
#include "modifclient.h"
#include "supressionclient.h"
#include"affichagepersonnel.h"
#include "ajoutpersonnelle.h"
#include"modificationpersonnelle.h"
#include "SupressionPersonnelle.h"
#include "commandecreation.h"
#include "creationstock.h"
#include "affichagestock.h"
#include "modificationstock.h"
#include "Supressionstock.h"
#include "affichagecommande.h"
#include "modifcommande.h"
#include "supressioncommande.h"
#include "payement.h"
#include "paniermoyen.h"
#include "chifferaffaire.h"
#include "seuilrea.h"
#include "totalachatclient.h"
#include "articleplusvendu.h"
#include "articlemoinsvendu.h"
#include "valeurachat.h"
#include "valeurcom.h"

namespace projetexia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			hidesubmenu();
			
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button1;











	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Panel^ panel2;































	private: MyForm1^ s = gcnew MyForm1();
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Panel^ subpanelstat;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Panel^ subpanelgestionemploye;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Panel^ subpanelcommande;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Panel^ subpanelstock;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Panel^ submenugestionclient;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button32;























































































	protected:
















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->subpanelgestionemploye = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->subpanelstat = (gcnew System::Windows::Forms::Panel());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->subpanelstock = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->subpanelcommande = (gcnew System::Windows::Forms::Panel());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->submenugestionclient = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->subpanelgestionemploye->SuspendLayout();
			this->subpanelstat->SuspendLayout();
			this->subpanelstock->SuspendLayout();
			this->subpanelcommande->SuspendLayout();
			this->submenugestionclient->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button31);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1569, 50);
			this->panel1->TabIndex = 0;
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->button31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button31.BackgroundImage")));
			this->button31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button31->FlatAppearance->BorderSize = 0;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Location = System::Drawing::Point(1455, 0);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(41, 50);
			this->button31->TabIndex = 20;
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm2::button31_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(1164, 0);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(41, 50);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 16;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(873, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(41, 50);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 15;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(582, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(41, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 14;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(291, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(41, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(41, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button14
			// 
			this->button14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(1205, 0);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(250, 50);
			this->button14->TabIndex = 12;
			this->button14->Text = L"Gestion statistique";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm2::button14_Click);
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(914, 0);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(250, 50);
			this->button12->TabIndex = 10;
			this->button12->Text = L"Gestion commande";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm2::button12_Click);
			// 
			// button11
			// 
			this->button11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(623, 0);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(250, 50);
			this->button11->TabIndex = 9;
			this->button11->Text = L"Gestion stock";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm2::button11_Click);
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(332, 0);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(250, 50);
			this->button10->TabIndex = 8;
			this->button10->Text = L"Gestion personnel";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm2::button10_Click_1);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(41, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 50);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Gestion client";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click_2);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 50);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1490, 750);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm2::panel2_Paint_2);
			// 
			// subpanelgestionemploye
			// 
			this->subpanelgestionemploye->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->subpanelgestionemploye->Controls->Add(this->button6);
			this->subpanelgestionemploye->Controls->Add(this->button7);
			this->subpanelgestionemploye->Controls->Add(this->button8);
			this->subpanelgestionemploye->Controls->Add(this->button9);
			this->subpanelgestionemploye->Location = System::Drawing::Point(332, 50);
			this->subpanelgestionemploye->Name = L"subpanelgestionemploye";
			this->subpanelgestionemploye->Size = System::Drawing::Size(250, 200);
			this->subpanelgestionemploye->TabIndex = 20;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button6->Dock = System::Windows::Forms::DockStyle::Top;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(0, 150);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(250, 50);
			this->button6->TabIndex = 3;
			this->button6->Text = L"Supression";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button6_Click_1);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button7->Dock = System::Windows::Forms::DockStyle::Top;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(0, 100);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(250, 50);
			this->button7->TabIndex = 2;
			this->button7->Text = L"Modification";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button8->Dock = System::Windows::Forms::DockStyle::Top;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(0, 50);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(250, 50);
			this->button8->TabIndex = 1;
			this->button8->Text = L"Création";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm2::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button9->Dock = System::Windows::Forms::DockStyle::Top;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(0, 0);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(250, 50);
			this->button9->TabIndex = 0;
			this->button9->Text = L"Affichage";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm2::button9_Click);
			// 
			// subpanelstat
			// 
			this->subpanelstat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->subpanelstat->Controls->Add(this->button30);
			this->subpanelstat->Controls->Add(this->button26);
			this->subpanelstat->Controls->Add(this->button27);
			this->subpanelstat->Controls->Add(this->button28);
			this->subpanelstat->Controls->Add(this->button29);
			this->subpanelstat->Controls->Add(this->button22);
			this->subpanelstat->Controls->Add(this->button23);
			this->subpanelstat->Controls->Add(this->button24);
			this->subpanelstat->Controls->Add(this->button25);
			this->subpanelstat->Location = System::Drawing::Point(1205, 50);
			this->subpanelstat->Name = L"subpanelstat";
			this->subpanelstat->Size = System::Drawing::Size(250, 450);
			this->subpanelstat->TabIndex = 23;
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button30->Dock = System::Windows::Forms::DockStyle::Top;
			this->button30->FlatAppearance->BorderSize = 0;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->ForeColor = System::Drawing::Color::White;
			this->button30->Location = System::Drawing::Point(0, 400);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(250, 50);
			this->button30->TabIndex = 8;
			this->button30->Text = L"Simulation";
			this->button30->UseVisualStyleBackColor = false;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button26->Dock = System::Windows::Forms::DockStyle::Top;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->ForeColor = System::Drawing::Color::White;
			this->button26->Location = System::Drawing::Point(0, 350);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(250, 50);
			this->button26->TabIndex = 7;
			this->button26->Text = L"Valeu d\'achat du stock";
			this->button26->UseVisualStyleBackColor = false;
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button27->Dock = System::Windows::Forms::DockStyle::Top;
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->ForeColor = System::Drawing::Color::White;
			this->button27->Location = System::Drawing::Point(0, 300);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(250, 50);
			this->button27->TabIndex = 6;
			this->button27->Text = L"Valeur commercial du stock";
			this->button27->UseVisualStyleBackColor = false;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button28->Dock = System::Windows::Forms::DockStyle::Top;
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->ForeColor = System::Drawing::Color::White;
			this->button28->Location = System::Drawing::Point(0, 250);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(250, 50);
			this->button28->TabIndex = 5;
			this->button28->Text = L"Article moins vendu";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm2::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button29->Dock = System::Windows::Forms::DockStyle::Top;
			this->button29->FlatAppearance->BorderSize = 0;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->ForeColor = System::Drawing::Color::White;
			this->button29->Location = System::Drawing::Point(0, 200);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(250, 50);
			this->button29->TabIndex = 4;
			this->button29->Text = L"Article plus vendu";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm2::button29_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button22->Dock = System::Windows::Forms::DockStyle::Top;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::Color::White;
			this->button22->Location = System::Drawing::Point(0, 150);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(250, 50);
			this->button22->TabIndex = 3;
			this->button22->Text = L"Total achat pour un client";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm2::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button23->Dock = System::Windows::Forms::DockStyle::Top;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::Color::White;
			this->button23->Location = System::Drawing::Point(0, 100);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(250, 50);
			this->button23->TabIndex = 2;
			this->button23->Text = L"> seuil réapprovisionnement";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button24->Dock = System::Windows::Forms::DockStyle::Top;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::Color::White;
			this->button24->Location = System::Drawing::Point(0, 50);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(250, 50);
			this->button24->TabIndex = 1;
			this->button24->Text = L"Chiffre d\'affaire / mois";
			this->button24->UseVisualStyleBackColor = false;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button25->Dock = System::Windows::Forms::DockStyle::Top;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->ForeColor = System::Drawing::Color::White;
			this->button25->Location = System::Drawing::Point(0, 0);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(250, 50);
			this->button25->TabIndex = 0;
			this->button25->Text = L"Panier moyen";
			this->button25->UseVisualStyleBackColor = false;
			// 
			// subpanelstock
			// 
			this->subpanelstock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->subpanelstock->Controls->Add(this->button13);
			this->subpanelstock->Controls->Add(this->button15);
			this->subpanelstock->Controls->Add(this->button16);
			this->subpanelstock->Controls->Add(this->button17);
			this->subpanelstock->Location = System::Drawing::Point(623, 50);
			this->subpanelstock->Name = L"subpanelstock";
			this->subpanelstock->Size = System::Drawing::Size(250, 200);
			this->subpanelstock->TabIndex = 21;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button13->Dock = System::Windows::Forms::DockStyle::Top;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(0, 150);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(250, 50);
			this->button13->TabIndex = 3;
			this->button13->Text = L"Supression";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm2::button13_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button15->Dock = System::Windows::Forms::DockStyle::Top;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(0, 100);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(250, 50);
			this->button15->TabIndex = 2;
			this->button15->Text = L"Modification";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm2::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button16->Dock = System::Windows::Forms::DockStyle::Top;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(0, 50);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(250, 50);
			this->button16->TabIndex = 1;
			this->button16->Text = L"Création";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm2::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button17->Dock = System::Windows::Forms::DockStyle::Top;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(0, 0);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(250, 50);
			this->button17->TabIndex = 0;
			this->button17->Text = L"Affichage";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm2::button17_Click);
			// 
			// subpanelcommande
			// 
			this->subpanelcommande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->subpanelcommande->Controls->Add(this->button32);
			this->subpanelcommande->Controls->Add(this->button18);
			this->subpanelcommande->Controls->Add(this->button19);
			this->subpanelcommande->Controls->Add(this->button20);
			this->subpanelcommande->Controls->Add(this->button21);
			this->subpanelcommande->Location = System::Drawing::Point(914, 50);
			this->subpanelcommande->Name = L"subpanelcommande";
			this->subpanelcommande->Size = System::Drawing::Size(250, 250);
			this->subpanelcommande->TabIndex = 22;
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button32->Dock = System::Windows::Forms::DockStyle::Top;
			this->button32->FlatAppearance->BorderSize = 0;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->ForeColor = System::Drawing::Color::White;
			this->button32->Location = System::Drawing::Point(0, 200);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(250, 50);
			this->button32->TabIndex = 4;
			this->button32->Text = L"Payement";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm2::button32_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button18->Dock = System::Windows::Forms::DockStyle::Top;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(0, 150);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(250, 50);
			this->button18->TabIndex = 3;
			this->button18->Text = L"Supression";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm2::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button19->Dock = System::Windows::Forms::DockStyle::Top;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(0, 100);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(250, 50);
			this->button19->TabIndex = 2;
			this->button19->Text = L"Modification";
			this->button19->UseVisualStyleBackColor = false;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button20->Dock = System::Windows::Forms::DockStyle::Top;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(0, 50);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(250, 50);
			this->button20->TabIndex = 1;
			this->button20->Text = L"Création";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm2::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button21->Dock = System::Windows::Forms::DockStyle::Top;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::Color::White;
			this->button21->Location = System::Drawing::Point(0, 0);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(250, 50);
			this->button21->TabIndex = 0;
			this->button21->Text = L"Affichage";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm2::button21_Click);
			// 
			// submenugestionclient
			// 
			this->submenugestionclient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->submenugestionclient->Controls->Add(this->button5);
			this->submenugestionclient->Controls->Add(this->button4);
			this->submenugestionclient->Controls->Add(this->button3);
			this->submenugestionclient->Controls->Add(this->button2);
			this->submenugestionclient->Location = System::Drawing::Point(41, 50);
			this->submenugestionclient->Name = L"submenugestionclient";
			this->submenugestionclient->Size = System::Drawing::Size(250, 200);
			this->submenugestionclient->TabIndex = 24;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button5->Dock = System::Windows::Forms::DockStyle::Top;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(0, 150);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(250, 50);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Supression";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click_1);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(0, 100);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(250, 50);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Modification";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(0, 50);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(250, 50);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Création";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(0, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(250, 50);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Affichage";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click_3);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1490, 800);
			this->Controls->Add(this->subpanelgestionemploye);
			this->Controls->Add(this->submenugestionclient);
			this->Controls->Add(this->subpanelstat);
			this->Controls->Add(this->subpanelstock);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->subpanelcommande);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->subpanelgestionemploye->ResumeLayout(false);
			this->subpanelstat->ResumeLayout(false);
			this->subpanelstock->ResumeLayout(false);
			this->subpanelcommande->ResumeLayout(false);
			this->submenugestionclient->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	/*MyForm1^ s = gcnew MyForm1();
	s->TopLevel = false;
	panel2->Controls->Add(s);
	s->BringToFront();
	s->Show();*/

}
private: System::Void subpanelperso_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void hidesubmenu() {
	submenugestionclient->Visible = false;
	subpanelgestionemploye->Visible = false;
	subpanelcommande->Visible = false;
	subpanelstat->Visible = false;
	subpanelstock->Visible = false;

}
private: System::Void exitmenus() {
	if (this->panel2->Controls->Count > 0) {
		this->panel2->Controls->RemoveAt(0);
	}
}
private: System::Void showsubmenu(Panel^ subpanel) {
	if (subpanel->Visible == false) {
		hidesubmenu();
		subpanel->Visible = true;
	}
	else {
		subpanel->Visible = false;
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void mainpanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	showsubmenu(submenugestionclient);
}
public: Point mouselocation;
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	showsubmenu(subpanelgestionemploye);
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void submenugestionclient_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	
	showsubmenu(submenugestionclient);

}
private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {
	showsubmenu(subpanelgestionemploye);
}
private: System::Void panel2_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
private: System::Void panel2_Click(System::Object^ sender, System::EventArgs^ e) {
	hidesubmenu();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	showsubmenu(subpanelstock);
	
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	showsubmenu(subpanelcommande);
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	
	showsubmenu(subpanelstat);
}
private: System::Void subpanelstock_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	hidesubmenu();
}
private: System::Void subpanelcommande_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	hidesubmenu();
}
private: System::Void subpanelstat_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	hidesubmenu();
}



private: System::Void panel2_Paint_2(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	hidesubmenu();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
}
private: System::Void panel3_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	hidesubmenu();
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button2_Click_3(System::Object^ sender, System::EventArgs^ e) {
	exitmenus();
	MyForm1^ s = gcnew MyForm1();
	s->TopLevel = false;
	panel2->Controls->Add(s);
	s->BringToFront();
	s->Show();
	hidesubmenu();

}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	exitmenus();
	creationclient^ crea = gcnew creationclient();
	crea->TopLevel = false;
	panel2->Controls->Add(crea);
	crea->BringToFront();
	crea->Show();
	hidesubmenu();

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	exitmenus();
	modifclient^ mod = gcnew modifclient ();
	mod->TopLevel = false;
	panel2->Controls->Add(mod);
	mod->BringToFront();
	mod->Show();
	hidesubmenu();

}
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	exitmenus();
	supressionclient^ sup = gcnew supressionclient();
	sup->TopLevel = false;
	panel2->Controls->Add(sup);
	sup->BringToFront();
	sup->Show();
	hidesubmenu();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	exitmenus();
	affichagepersonnel^ qwe = gcnew affichagepersonnel();
	qwe->TopLevel = false;
	panel2->Controls->Add(qwe);
	qwe->BringToFront();
	qwe->Show();
	hidesubmenu();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	exitmenus();
	ajoutpersonnelle^ qas = gcnew ajoutpersonnelle();
	qas->TopLevel = false;
	panel2->Controls->Add(qas);
	qas->BringToFront();
	qas->Show();
	hidesubmenu();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	exitmenus();
	modificationpersonnelle^ asd = gcnew modificationpersonnelle();
	asd->TopLevel = false;
	panel2->Controls->Add(asd);
	asd->BringToFront();
	asd->Show();
	hidesubmenu();
}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	exitmenus();
	SupressionPersonnelle^ axs = gcnew SupressionPersonnelle();
	axs->TopLevel = false;
	panel2->Controls->Add(axs);
	axs->BringToFront();
	axs->Show();
	hidesubmenu();
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	exitmenus();
	creationstock^ asd = gcnew creationstock();
	asd->TopLevel = false;
	panel2->Controls->Add(asd);
	asd->BringToFront();
	asd->Show();
	hidesubmenu();
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	exitmenus();
	modificationstock^ gfd = gcnew modificationstock();
	gfd->TopLevel = false;
	panel2->Controls->Add(gfd);
	gfd->BringToFront();
	gfd->Show();
	hidesubmenu();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	exitmenus();
	Supressionstock^ lkd = gcnew Supressionstock();
	lkd->TopLevel = false;
	panel2->Controls->Add(lkd);
	lkd->BringToFront();
	lkd->Show();
	hidesubmenu();
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	exitmenus();
	affichagestock^ fgh = gcnew affichagestock();
	fgh->TopLevel = false;
	panel2->Controls->Add(fgh);
	fgh->BringToFront();
	fgh->Show();
	hidesubmenu();
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	exitmenus();
	commandecreation^ gbf = gcnew commandecreation();
	gbf->TopLevel = false;
	panel2->Controls->Add(gbf);
	gbf->BringToFront();
	gbf->Show();
	hidesubmenu();
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	exitmenus();
	payement^ pay = gcnew payement();
	pay->TopLevel = false;
	panel2->Controls->Add(pay);
	pay->BringToFront();
	pay->Show();
	hidesubmenu();
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	exitmenus();
	affichagecommande^ qsc = gcnew affichagecommande();
	qsc->TopLevel = false;
	panel2->Controls->Add(qsc);
	qsc->BringToFront();
	qsc->Show();
	hidesubmenu();
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	exitmenus();
	supressioncommande^ lks = gcnew supressioncommande();
	lks->TopLevel = false;
	panel2->Controls->Add(lks);
	lks->BringToFront();
	lks->Show();
	hidesubmenu();
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	exitmenus();
	articlemoinsvendu^ xcv = gcnew articlemoinsvendu();
	xcv->TopLevel = false;
	panel2->Controls->Add(xcv);
	xcv->BringToFront();
	xcv->Show();
	hidesubmenu();
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	exitmenus();
	articleplusvendu^ gfb = gcnew articleplusvendu();
	gfb->TopLevel = false;
	panel2->Controls->Add(gfb);
	gfb->BringToFront();
	gfb->Show();
	hidesubmenu();
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	exitmenus();
	totalachatclient^ gfb = gcnew totalachatclient();
	gfb->TopLevel = false;
	panel2->Controls->Add(gfb);
	gfb->BringToFront();
	gfb->Show();
	hidesubmenu();
}
};
}
