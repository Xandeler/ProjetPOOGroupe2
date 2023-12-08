#pragma once
#include <cstdlib>
#include "MapClient.h"

namespace ProjetPOOGroupe2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumé de MyForm
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			this->btn_retour->Click += gcnew System::EventHandler(this, &MyForm2::btn_retour_Click); // Permet de lier le bouton � la fonction

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

	private: System::Windows::Forms::Button^ btn_retour;
	private: System::Windows::Forms::Button^ btn_ajouter;
	private: System::Windows::Forms::Button^ btn_supprimer;
	private: System::Windows::Forms::Button^ btn_modifier;
	private: System::Windows::Forms::TextBox^ tb_nom;
	private: System::Windows::Forms::TextBox^ tb_prenom;
	private: System::Data::DataSet^ dataLoadedFromSQL;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_results;
	private: System::Windows::Forms::Label^ lbl_resultats;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tb_datepa;
	private: System::Windows::Forms::TextBox^ tb_datena;
	private: CL::Client^ client = gcnew CL::Client;
	private: AD::Adresse^ Adressel = gcnew AD::Adresse;
	private: AD::Adresse^ Adressef = gcnew AD::Adresse;
	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Mappage::CLgenerateSQLcmds^ mC;
















	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
	private: System::ComponentModel::Container^ components;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tb_facnu;
	private: System::Windows::Forms::TextBox^ tb_id;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tb_livru;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tb_facru;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ tb_nvl;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ tb_nvf;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ btn_clear;
	private: System::Windows::Forms::Label^ label_stock;
	private: System::Windows::Forms::TextBox^ tb_livnu;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		   /// le contenu de cette m�thode avec l'�diteur de code.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->btn_retour = (gcnew System::Windows::Forms::Button());
			   this->btn_ajouter = (gcnew System::Windows::Forms::Button());
			   this->btn_supprimer = (gcnew System::Windows::Forms::Button());
			   this->btn_modifier = (gcnew System::Windows::Forms::Button());
			   this->tb_nom = (gcnew System::Windows::Forms::TextBox());
			   this->tb_prenom = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->txt_results = (gcnew System::Windows::Forms::TextBox());
			   this->lbl_resultats = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->tb_datepa = (gcnew System::Windows::Forms::TextBox());
			   this->tb_datena = (gcnew System::Windows::Forms::TextBox());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->tb_facnu = (gcnew System::Windows::Forms::TextBox());
			   this->tb_livnu = (gcnew System::Windows::Forms::TextBox());
			   this->tb_id = (gcnew System::Windows::Forms::TextBox());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->tb_livru = (gcnew System::Windows::Forms::TextBox());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->tb_facru = (gcnew System::Windows::Forms::TextBox());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->tb_nvl = (gcnew System::Windows::Forms::TextBox());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->tb_nvf = (gcnew System::Windows::Forms::TextBox());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->btn_clear = (gcnew System::Windows::Forms::Button());
			   this->label_stock = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->AllowUserToAddRows = false;
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Location = System::Drawing::Point(13, 38);
			   this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->dataGridView1->MultiSelect = false;
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->ReadOnly = true;
			   this->dataGridView1->RowHeadersWidth = 51;
			   this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			   this->dataGridView1->Size = System::Drawing::Size(977, 220);
			   this->dataGridView1->TabIndex = 0;
			   this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm2::get_infos);
			   // 
			   // btn_retour
			   // 
			   this->btn_retour->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->btn_retour->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->btn_retour->Location = System::Drawing::Point(13, 554);
			   this->btn_retour->Name = L"btn_retour";
			   this->btn_retour->Size = System::Drawing::Size(112, 36);
			   this->btn_retour->TabIndex = 4;
			   this->btn_retour->Text = L"RETOUR";
			   this->btn_retour->UseVisualStyleBackColor = false;
			   this->btn_retour->Click += gcnew System::EventHandler(this, &MyForm2::btn_retour_Click);
			   // 
			   // btn_ajouter
			   // 
			   this->btn_ajouter->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->btn_ajouter->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->btn_ajouter->Location = System::Drawing::Point(13, 270);
			   this->btn_ajouter->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->btn_ajouter->Name = L"btn_ajouter";
			   this->btn_ajouter->Size = System::Drawing::Size(211, 67);
			   this->btn_ajouter->TabIndex = 2;
			   this->btn_ajouter->Text = L"AJOUTER UN CLIENT";
			   this->btn_ajouter->UseVisualStyleBackColor = false;
			   this->btn_ajouter->Click += gcnew System::EventHandler(this, &MyForm2::btn_ajouter_Click);
			   // 
			   // btn_supprimer
			   // 
			   this->btn_supprimer->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->btn_supprimer->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->btn_supprimer->Location = System::Drawing::Point(13, 424);
			   this->btn_supprimer->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->btn_supprimer->Name = L"btn_supprimer";
			   this->btn_supprimer->Size = System::Drawing::Size(211, 67);
			   this->btn_supprimer->TabIndex = 3;
			   this->btn_supprimer->Text = L"SUPPRIMER UN CLIENT";
			   this->btn_supprimer->UseVisualStyleBackColor = false;
			   this->btn_supprimer->Click += gcnew System::EventHandler(this, &MyForm2::btn_supprimer_Click);
			   // 
			   // btn_modifier
			   // 
			   this->btn_modifier->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->btn_modifier->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->btn_modifier->Location = System::Drawing::Point(13, 347);
			   this->btn_modifier->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->btn_modifier->Name = L"btn_modifier";
			   this->btn_modifier->Size = System::Drawing::Size(211, 67);
			   this->btn_modifier->TabIndex = 4;
			   this->btn_modifier->Text = L"MODIFIER UN CLIENT";
			   this->btn_modifier->UseVisualStyleBackColor = false;
			   this->btn_modifier->Click += gcnew System::EventHandler(this, &MyForm2::btn_modifier_Click);
			   // 
			   // tb_nom
			   // 
			   this->tb_prenom->Location = System::Drawing::Point(656, 307);
			   this->tb_prenom->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_prenom->Name = L"tb_prenom";
			   this->tb_prenom->Size = System::Drawing::Size(334, 24);
			   this->tb_prenom->TabIndex = 6;
			   // 
			   // tb_prenom
			   // 
			   this->tb_nom->Location = System::Drawing::Point(656, 270);
			   this->tb_nom->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_nom->Name = L"tb_nom";
			   this->tb_nom->Size = System::Drawing::Size(334, 24);
			   this->tb_nom->TabIndex = 7;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label1->Location = System::Drawing::Point(588, 307);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(61, 18);
			   this->label1->TabIndex = 8;
			   this->label1->Text = L"Prenom";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label2->Location = System::Drawing::Point(608, 273);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(41, 18);
			   this->label2->TabIndex = 9;
			   this->label2->Text = L"Nom";
			   // 
			   // txt_results
			   // 
			   this->txt_results->Location = System::Drawing::Point(499, 526);
			   this->txt_results->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			   this->txt_results->Multiline = true;
			   this->txt_results->Name = L"txt_results";
			   this->txt_results->ReadOnly = true;
			   this->txt_results->Size = System::Drawing::Size(491, 64);
			   this->txt_results->TabIndex = 10;
			   // 
			   // lbl_resultats
			   // 
			   this->lbl_resultats->AutoSize = true;
			   this->lbl_resultats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->lbl_resultats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbl_resultats->Location = System::Drawing::Point(496, 504);
			   this->lbl_resultats->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lbl_resultats->Name = L"lbl_resultats";
			   this->lbl_resultats->Size = System::Drawing::Size(70, 18);
			   this->lbl_resultats->TabIndex = 14;
			   this->lbl_resultats->Text = L"Resultats";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label3->Location = System::Drawing::Point(516, 341);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(133, 18);
			   this->label3->TabIndex = 15;
			   this->label3->Text = L"Date de Naissance";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label4->Location = System::Drawing::Point(496, 379);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(153, 18);
			   this->label4->TabIndex = 16;
			   this->label4->Text = L"Date du premier achat";
			   // 
			   // tb_datepa
			   // 
			   this->tb_datepa->Location = System::Drawing::Point(656, 375);
			   this->tb_datepa->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_datepa->Name = L"tb_datepa";
			   this->tb_datepa->Size = System::Drawing::Size(333, 24);
			   this->tb_datepa->TabIndex = 17;
			   // 
			   // tb_datena
			   // 
			   this->tb_datena->Location = System::Drawing::Point(656, 341);
			   this->tb_datena->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_datena->Name = L"tb_datena";
			   this->tb_datena->Size = System::Drawing::Size(334, 24);
			   this->tb_datena->TabIndex = 18;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label5->Location = System::Drawing::Point(231, 455);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(218, 18);
			   this->label5->TabIndex = 19;
			   this->label5->Text = L"Facturation : numero de maison";
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label6->Location = System::Drawing::Point(246, 414);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(203, 18);
			   this->label6->TabIndex = 20;
			   this->label6->Text = L"Livraison : numero de maison";
			   // 
			   // tb_facnu
			   // 
			   this->tb_facnu->Location = System::Drawing::Point(456, 452);
			   this->tb_facnu->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_facnu->Name = L"tb_facnu";
			   this->tb_facnu->Size = System::Drawing::Size(61, 24);
			   this->tb_facnu->TabIndex = 21;
			   // 
			   // tb_livnu
			   // 
			   this->tb_livnu->Location = System::Drawing::Point(456, 411);
			   this->tb_livnu->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_livnu->Name = L"tb_livnu";
			   this->tb_livnu->Size = System::Drawing::Size(61, 24);
			   this->tb_livnu->TabIndex = 22;
			   // 
			   // tb_id
			   // 
			   this->tb_id->Location = System::Drawing::Point(499, 273);
			   this->tb_id->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_id->Name = L"tb_id";
			   this->tb_id->Size = System::Drawing::Size(56, 24);
			   this->tb_id->TabIndex = 23;
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label7->Location = System::Drawing::Point(470, 276);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(22, 18);
			   this->label7->TabIndex = 24;
			   this->label7->Text = L"ID";
			   // 
			   // tb_livru
			   // 
			   this->tb_livru->Location = System::Drawing::Point(590, 411);
			   this->tb_livru->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_livru->Name = L"tb_livru";
			   this->tb_livru->Size = System::Drawing::Size(220, 24);
			   this->tb_livru->TabIndex = 25;
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label8->Location = System::Drawing::Point(548, 414);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(35, 18);
			   this->label8->TabIndex = 26;
			   this->label8->Text = L"Rue";
			   // 
			   // tb_facru
			   // 
			   this->tb_facru->Location = System::Drawing::Point(590, 452);
			   this->tb_facru->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_facru->Name = L"tb_facru";
			   this->tb_facru->Size = System::Drawing::Size(220, 24);
			   this->tb_facru->TabIndex = 27;
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label9->Location = System::Drawing::Point(548, 452);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(35, 18);
			   this->label9->TabIndex = 28;
			   this->label9->Text = L"Rue";
			   // 
			   // tb_nvl
			   // 
			   this->tb_nvl->Location = System::Drawing::Point(862, 409);
			   this->tb_nvl->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_nvl->Name = L"tb_nvl";
			   this->tb_nvl->Size = System::Drawing::Size(128, 24);
			   this->tb_nvl->TabIndex = 29;
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label10->Location = System::Drawing::Point(821, 455);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(34, 18);
			   this->label10->TabIndex = 30;
			   this->label10->Text = L"Ville";
			   // 
			   // tb_nvf
			   // 
			   this->tb_nvf->Location = System::Drawing::Point(862, 450);
			   this->tb_nvf->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_nvf->Name = L"tb_nvf";
			   this->tb_nvf->Size = System::Drawing::Size(128, 24);
			   this->tb_nvf->TabIndex = 31;
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label11->Location = System::Drawing::Point(821, 411);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(34, 18);
			   this->label11->TabIndex = 32;
			   this->label11->Text = L"Ville";
			   // 
			   // btn_clear
			   // 
			   this->btn_clear->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->btn_clear->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->btn_clear->Location = System::Drawing::Point(884, 489);
			   this->btn_clear->Name = L"btn_clear";
			   this->btn_clear->Size = System::Drawing::Size(105, 28);
			   this->btn_clear->TabIndex = 33;
			   this->btn_clear->Text = L"CLEAR";
			   this->btn_clear->UseVisualStyleBackColor = false;
			   this->btn_clear->Click += gcnew System::EventHandler(this, &MyForm2::btn_clear_Click);
			   // 
			   // label_stock
			   // 
			   this->label_stock->AutoSize = true;
			   this->label_stock->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->label_stock->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->label_stock->Location = System::Drawing::Point(13, 9);
			   this->label_stock->Name = L"label_stock";
			   this->label_stock->Size = System::Drawing::Size(72, 20);
			   this->label_stock->TabIndex = 34;
			   this->label_stock->Text = L"CLIENTS";
			   // 
			   // MyForm2
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->ClientSize = System::Drawing::Size(1004, 603);
			   this->Controls->Add(this->label_stock);
			   this->Controls->Add(this->btn_clear);
			   this->Controls->Add(this->label11);
			   this->Controls->Add(this->tb_nvf);
			   this->Controls->Add(this->label10);
			   this->Controls->Add(this->tb_nvl);
			   this->Controls->Add(this->label9);
			   this->Controls->Add(this->tb_facru);
			   this->Controls->Add(this->label8);
			   this->Controls->Add(this->tb_livru);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->tb_id);
			   this->Controls->Add(this->tb_livnu);
			   this->Controls->Add(this->tb_facnu);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->tb_datena);
			   this->Controls->Add(this->tb_datepa);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->lbl_resultats);
			   this->Controls->Add(this->txt_results);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->btn_retour);
			   this->Controls->Add(this->tb_prenom);
			   this->Controls->Add(this->tb_nom);
			   this->Controls->Add(this->btn_ajouter);
			   this->Controls->Add(this->btn_supprimer);
			   this->Controls->Add(this->btn_modifier);
			   this->Controls->Add(this->dataGridView1);
			   this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->MaximumSize = System::Drawing::Size(1022, 650);
			   this->MinimumSize = System::Drawing::Size(1022, 650);
			   this->Name = L"MyForm2";
			   this->Text = L"Gestion des clients";
			   this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }

#pragma endregion

	private: System::Void btn_retour_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();

	}

	private: void refresh_datagrid()
	{
		this->dataGridView1->Refresh();
		this->txt_results->Text = "Données générées";
	}

	public: void actualiser()
	{
		this->dataGridView1->Refresh();
		this->oDs = this->mC->selectionnerToutesLesPersonnes("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}

	private: System::Void get_infos(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
			DataGridViewRow^ selectedRow = this->dataGridView1->Rows[e->RowIndex];
			Object^ idValue = selectedRow->Cells[0]->Value;
			Object^ nomValue = selectedRow->Cells[1]->Value;
			Object^ prenomValue = selectedRow->Cells[2]->Value;
			Object^ datenaValue = selectedRow->Cells[3]->Value;
			Object^ datepaValue = selectedRow->Cells[4]->Value;
			Object^ numRueLivValue = selectedRow->Cells[5]->Value;
			Object^ RueLivValue = selectedRow->Cells[5]->Value;
			Object^ villeLivValue = selectedRow->Cells[6]->Value;
			Object^ numRueFactValue = selectedRow->Cells[7]->Value;
			Object^ RueFactValue = selectedRow->Cells[7]->Value;
			Object^ villeFactValue = selectedRow->Cells[8]->Value;

			if (idValue != nullptr && nomValue != nullptr && prenomValue != nullptr &&
				datenaValue != nullptr && datepaValue != nullptr && numRueLivValue != nullptr && RueLivValue != nullptr &&
				villeLivValue != nullptr && numRueFactValue != nullptr && RueFactValue != nullptr && villeFactValue != nullptr) {
				try {
					this->tb_id->Text = System::Convert::ToString(idValue);
					this->tb_nom->Text = nomValue->ToString();
					this->tb_prenom->Text = prenomValue->ToString();
					this->tb_datena->Text = datenaValue->ToString();
					this->tb_datepa->Text = datepaValue->ToString();

					String^ numRueLivString = numRueLivValue->ToString();
					int spaceIndexLiv = numRueLivString->IndexOf(' ');

					this->tb_livnu->Text = numRueLivString->Substring(0, spaceIndexLiv);
					this->tb_livru->Text = numRueLivString->Substring(spaceIndexLiv + 1);
					this->tb_nvl->Text = villeLivValue->ToString();

					String^ numRueFactString = numRueFactValue->ToString();
					int spaceIndexFact = numRueFactString->IndexOf(' ');

					this->tb_facnu->Text = numRueFactString->Substring(0, spaceIndexFact);
					this->tb_facru->Text = numRueFactString->Substring(spaceIndexFact + 1);
					this->tb_nvf->Text = villeFactValue->ToString();
				}
				catch (FormatException^) {
				}
			}
		}
	}


	
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->mC = gcnew NS_Comp_Mappage::CLgenerateSQLcmds();
		actualiser();
	}

	

	private: System::Void btn_ajouter_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->tb_nom->Text == "" || this->tb_prenom->Text == "" || this->tb_datena->Text == "" || this->tb_datepa->Text == "" || this->tb_facnu->Text == "" || this->tb_facru->Text == "" || this->tb_livnu->Text == "" || this->tb_livru->Text == "" || this->tb_nvf->Text == "" || this->tb_nvl->Text == "")
		{
			this->txt_results->Text = "Veuillez remplir tous les champs";
		}
		else {
			
			this->client->set_Nom(this->tb_nom->Text);
            this->client->set_Prenom(this->tb_prenom->Text);
			this->client->set_Date_Naissance(this->tb_datena->Text);
			this->client->set_Date_Premier_Achat(this->tb_datepa->Text);

			this->Adressel->set_Numero_Maison(Convert::ToInt32(this->tb_facnu->Text));
			this->Adressel->set_Rue(this->tb_facru->Text);
			this->Adressel->set_Nature("Livraison");
			this->Adressel->set_Nom_Ville(this->tb_nvl->Text);

			this->Adressef->set_Numero_Maison(Convert::ToInt32(this->tb_livnu->Text));
			this->Adressef->set_Rue(this->tb_livru->Text);
			this->Adressef->set_Nature("Facturation");
			this->Adressef->set_Nom_Ville(this->tb_nvf->Text);

			this->client->set_Adresse_Livraison(Adressel);
			this->client->set_Adresse_Facturation(Adressef);

			this->mC->ajouterUnePersonne(this->client, this->tb_nvf->Text, this->tb_nvl->Text);
			btn_clear_Click(sender, e);

			actualiser();
			this->txt_results->Text = "Données entrées avec succès";
		}
		
		
			
	}

	private: System::Void btn_supprimer_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->tb_id->Text == "")
		{
			this->txt_results->Text = "Veuillez renseigner l'ID du client que vous souhaitez supprimer";
		}
		else {
			
			this->mC->supprimerUnePersonne(Convert::ToInt32(this->tb_id->Text));

			this->tb_id->Text = "";
			actualiser();
			this->txt_results->Text = "Données supprimées avec succès";
		}

	}
	private: System::Void btn_modifier_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->tb_id->Text == "")
		{
			this->txt_results->Text = "Veuillez renseigner l'ID du client que vous souhaitez modifier";
		}
		else {
			this->client->set_Nom(this->tb_nom->Text);
			this->client->set_Prenom(this->tb_prenom->Text);
			this->client->set_Date_Naissance(this->tb_datena->Text);
			this->client->set_Date_Premier_Achat(this->tb_datepa->Text);

			this->Adressel->set_Numero_Maison(Convert::ToInt32(this->tb_facnu->Text));
			this->Adressel->set_Rue(this->tb_facru->Text);
			this->Adressel->set_Nom_Ville(this->tb_nvl->Text);
			this->client->set_Adresse_Livraison(this->Adressel);
		
			this->Adressef->set_Numero_Maison(Convert::ToInt32(this->tb_livnu->Text));
			this->Adressef->set_Rue(this->tb_livru->Text);
			this->Adressef->set_Nom_Ville(this->tb_nvf->Text);
			this->client->set_Adresse_Facturation(this->Adressef);

			this->mC->modifierUnePersonne(Convert::ToInt32(this->tb_id->Text), this->client, this->tb_nvf->Text, this->tb_nvl->Text);

			actualiser();

			this->txt_results->Text = "Données modifiées avec succès";
		}
		
	}
		   private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) {
			   this->tb_id->Text = "";
			   this->tb_nom->Text = "";
			   this->tb_prenom->Text = "";
			   this->tb_datena->Text = "";
			   this->tb_datepa->Text = "";
			   this->tb_facnu->Text = "";
			   this->tb_facru->Text = "";
			   this->tb_livnu->Text = "";
			   this->tb_livru->Text = "";
			   this->tb_nvl->Text = "";
			   this->tb_nvf->Text = "";
		   }
};
}