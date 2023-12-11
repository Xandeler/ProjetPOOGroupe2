#pragma once
#include <cstdlib>
#include "StockageCommandes.h"
#include "Commande.h"
#include "Adresse.h"

namespace ProjetPOOGroupe2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
		{
			InitializeComponent();
			this->btn_retour->Click += gcnew System::EventHandler(this, &MyForm3::btn_retour_Click); // Permet de lier le bouton   la fonction

		}

	protected:
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Button^ btn_retour;
	private: System::Windows::Forms::Button^ btn_ajouter;
	private: System::Windows::Forms::Button^ btn_supprimer;
	private: System::Windows::Forms::Button^ btn_modifier;
	private: System::Windows::Forms::TextBox^ tb_prenom;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_results;
	private: System::Windows::Forms::Label^ lbl_resultats;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: StockageCommandes^ commandes = gcnew StockageCommandes();
	private: CO::Commande^ commande = gcnew CO::Commande();
	private: DataSet^ dataset = gcnew DataSet();

	private: System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Label^ label_stock;
	private: System::Windows::Forms::Button^ button_ajouter_article;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox_id_client;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label_id_article;
	private: System::Windows::Forms::TextBox^ textBox_id_article;
	private: System::Windows::Forms::Button^ button_imprimer;

	private: System::Windows::Forms::TextBox^ textBox6;


#pragma region Windows Form Designer generated code

		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->btn_retour = (gcnew System::Windows::Forms::Button());
			   this->btn_ajouter = (gcnew System::Windows::Forms::Button());
			   this->btn_supprimer = (gcnew System::Windows::Forms::Button());
			   this->btn_modifier = (gcnew System::Windows::Forms::Button());
			   this->tb_prenom = (gcnew System::Windows::Forms::TextBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->txt_results = (gcnew System::Windows::Forms::TextBox());
			   this->lbl_resultats = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->label_stock = (gcnew System::Windows::Forms::Label());
			   this->button_ajouter_article = (gcnew System::Windows::Forms::Button());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->textBox_id_client = (gcnew System::Windows::Forms::TextBox());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			   this->label_id_article = (gcnew System::Windows::Forms::Label());
			   this->textBox_id_article = (gcnew System::Windows::Forms::TextBox());
			   this->button_imprimer = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->AllowUserToAddRows = false;
			   this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Location = System::Drawing::Point(14, 38);
			   this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->dataGridView1->MultiSelect = false;
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->ReadOnly = true;
			   this->dataGridView1->RowHeadersWidth = 51;
			   this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			   this->dataGridView1->Size = System::Drawing::Size(429, 196);
			   this->dataGridView1->TabIndex = 0;
			   this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm3::get_infos);
			   // 
			   // btn_retour
			   // 
			   this->btn_retour->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->btn_retour->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->btn_retour->Location = System::Drawing::Point(13, 518);
			   this->btn_retour->Name = L"btn_retour";
			   this->btn_retour->Size = System::Drawing::Size(112, 36);
			   this->btn_retour->TabIndex = 4;
			   this->btn_retour->Text = L"RETOUR";
			   this->btn_retour->UseVisualStyleBackColor = false;
			   this->btn_retour->Click += gcnew System::EventHandler(this, &MyForm3::btn_retour_Click);
			   // 
			   // btn_ajouter
			   // 
			   this->btn_ajouter->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->btn_ajouter->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->btn_ajouter->Location = System::Drawing::Point(13, 272);
			   this->btn_ajouter->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->btn_ajouter->Name = L"btn_ajouter";
			   this->btn_ajouter->Size = System::Drawing::Size(211, 67);
			   this->btn_ajouter->TabIndex = 2;
			   this->btn_ajouter->Text = L"AJOUTER COMMANDE";
			   this->btn_ajouter->UseVisualStyleBackColor = false;
			   this->btn_ajouter->Click += gcnew System::EventHandler(this, &MyForm3::btn_ajouter_Click);
			   // 
			   // btn_supprimer
			   // 
			   this->btn_supprimer->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->btn_supprimer->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->btn_supprimer->Location = System::Drawing::Point(12, 426);
			   this->btn_supprimer->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->btn_supprimer->Name = L"btn_supprimer";
			   this->btn_supprimer->Size = System::Drawing::Size(211, 67);
			   this->btn_supprimer->TabIndex = 3;
			   this->btn_supprimer->Text = L"SUPPRIMER";
			   this->btn_supprimer->UseVisualStyleBackColor = false;
			   this->btn_supprimer->Click += gcnew System::EventHandler(this, &MyForm3::btn_supprimer_Click);
			   // 
			   // btn_modifier
			   // 
			   this->btn_modifier->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->btn_modifier->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->btn_modifier->Location = System::Drawing::Point(14, 349);
			   this->btn_modifier->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->btn_modifier->Name = L"btn_modifier";
			   this->btn_modifier->Size = System::Drawing::Size(211, 67);
			   this->btn_modifier->TabIndex = 4;
			   this->btn_modifier->Text = L"MODIFIER";
			   this->btn_modifier->UseVisualStyleBackColor = false;
			   this->btn_modifier->Click += gcnew System::EventHandler(this, &MyForm3::btn_modifier_Click);
			   // 
			   // tb_prenom
			   // 
			   this->tb_prenom->Location = System::Drawing::Point(552, 49);
			   this->tb_prenom->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_prenom->Name = L"tb_prenom";
			   this->tb_prenom->Size = System::Drawing::Size(316, 24);
			   this->tb_prenom->TabIndex = 7;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label2->Location = System::Drawing::Point(651, 23);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(104, 18);
			   this->label2->TabIndex = 9;
			   this->label2->Text = L"ID Commande";
			   // 
			   // txt_results
			   // 
			   this->txt_results->Location = System::Drawing::Point(399, 485);
			   this->txt_results->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			   this->txt_results->Multiline = true;
			   this->txt_results->Name = L"txt_results";
			   this->txt_results->ReadOnly = true;
			   this->txt_results->Size = System::Drawing::Size(470, 68);
			   this->txt_results->TabIndex = 10;
			   // 
			   // lbl_resultats
			   // 
			   this->lbl_resultats->AutoSize = true;
			   this->lbl_resultats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->lbl_resultats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbl_resultats->Location = System::Drawing::Point(401, 463);
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
			   this->label3->Location = System::Drawing::Point(621, 82);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(165, 18);
			   this->label3->TabIndex = 15;
			   this->label3->Text = L"Date de livraison prevue";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label4->Location = System::Drawing::Point(611, 134);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(187, 18);
			   this->label4->TabIndex = 16;
			   this->label4->Text = L"Emission de la Commande";
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(553, 157);
			   this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(315, 24);
			   this->textBox1->TabIndex = 17;
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(552, 105);
			   this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(316, 24);
			   this->textBox2->TabIndex = 18;
			   // 
			   // label_stock
			   // 
			   this->label_stock->AutoSize = true;
			   this->label_stock->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->label_stock->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->label_stock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			   this->label_stock->Location = System::Drawing::Point(14, 12);
			   this->label_stock->Name = L"label_stock";
			   this->label_stock->Size = System::Drawing::Size(110, 20);
			   this->label_stock->TabIndex = 22;
			   this->label_stock->Text = L"COMMANDES";
			   // 
			   // button_ajouter_article
			   // 
			   this->button_ajouter_article->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->button_ajouter_article->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->button_ajouter_article->Location = System::Drawing::Point(232, 272);
			   this->button_ajouter_article->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->button_ajouter_article->Name = L"button_ajouter_article";
			   this->button_ajouter_article->Size = System::Drawing::Size(211, 67);
			   this->button_ajouter_article->TabIndex = 23;
			   this->button_ajouter_article->Text = L"AJOUTER ARTICLE COMMANDE";
			   this->button_ajouter_article->UseVisualStyleBackColor = false;
			   this->button_ajouter_article->Click += gcnew System::EventHandler(this, &MyForm3::bouton_ajouter_article_click);
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label5->Location = System::Drawing::Point(637, 238);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(125, 18);
			   this->label5->TabIndex = 24;
			   this->label5->Text = L"Date de Paiement";
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label6->Location = System::Drawing::Point(637, 186);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(139, 18);
			   this->label6->TabIndex = 25;
			   this->label6->Text = L"Moyen de Paiement";
			   // 
			   // textBox3
			   // 
			   this->textBox3->Location = System::Drawing::Point(553, 261);
			   this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(315, 24);
			   this->textBox3->TabIndex = 26;
			   // 
			   // textBox4
			   // 
			   this->textBox4->Location = System::Drawing::Point(553, 209);
			   this->textBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->textBox4->Name = L"textBox4";
			   this->textBox4->Size = System::Drawing::Size(315, 24);
			   this->textBox4->TabIndex = 27;
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label7->Location = System::Drawing::Point(678, 290);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(63, 18);
			   this->label7->TabIndex = 28;
			   this->label7->Text = L"ID Client";
			   // 
			   // textBox_id_client
			   // 
			   this->textBox_id_client->Location = System::Drawing::Point(552, 313);
			   this->textBox_id_client->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->textBox_id_client->Name = L"textBox_id_client";
			   this->textBox_id_client->Size = System::Drawing::Size(315, 24);
			   this->textBox_id_client->TabIndex = 29;
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label8->Location = System::Drawing::Point(583, 342);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(246, 18);
			   this->label8->TabIndex = 30;
			   this->label8->Text = L"Quantité de cet article à commander";
			   // 
			   // textBox6
			   // 
			   this->textBox6->Location = System::Drawing::Point(552, 365);
			   this->textBox6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->textBox6->Name = L"textBox6";
			   this->textBox6->Size = System::Drawing::Size(315, 24);
			   this->textBox6->TabIndex = 31;
			   // 
			   // label_id_article
			   // 
			   this->label_id_article->AutoSize = true;
			   this->label_id_article->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label_id_article->Location = System::Drawing::Point(675, 394);
			   this->label_id_article->Name = L"label_id_article";
			   this->label_id_article->Size = System::Drawing::Size(66, 18);
			   this->label_id_article->TabIndex = 32;
			   this->label_id_article->Text = L"ID Article";
			   // 
			   // textBox_id_article
			   // 
			   this->textBox_id_article->Location = System::Drawing::Point(552, 417);
			   this->textBox_id_article->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->textBox_id_article->Name = L"textBox_id_article";
			   this->textBox_id_article->Size = System::Drawing::Size(315, 24);
			   this->textBox_id_article->TabIndex = 33;
			   // 
			   // button_imprimer
			   // 
			   this->button_imprimer->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->button_imprimer->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->button_imprimer->Location = System::Drawing::Point(232, 349);
			   this->button_imprimer->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->button_imprimer->Name = L"button_imprimer";
			   this->button_imprimer->Size = System::Drawing::Size(211, 67);
			   this->button_imprimer->TabIndex = 34;
			   this->button_imprimer->Text = L"IMPRIMER COMMANDE";
			   this->button_imprimer->UseVisualStyleBackColor = false;
			   this->button_imprimer->Click += gcnew System::EventHandler(this, &MyForm3::bouton_imprimer_click);
			   // 
			   // MyForm3
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->ClientSize = System::Drawing::Size(882, 566);
			   this->Controls->Add(this->button_imprimer);
			   this->Controls->Add(this->textBox_id_article);
			   this->Controls->Add(this->label_id_article);
			   this->Controls->Add(this->textBox6);
			   this->Controls->Add(this->label8);
			   this->Controls->Add(this->textBox_id_client);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->textBox4);
			   this->Controls->Add(this->textBox3);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->button_ajouter_article);
			   this->Controls->Add(this->label_stock);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->lbl_resultats);
			   this->Controls->Add(this->txt_results);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->btn_retour);
			   this->Controls->Add(this->tb_prenom);
			   this->Controls->Add(this->btn_ajouter);
			   this->Controls->Add(this->btn_supprimer);
			   this->Controls->Add(this->btn_modifier);
			   this->Controls->Add(this->dataGridView1);
			   this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->Name = L"MyForm3";
			   this->Text = L"Gestion des commandes";
			   this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm_Load);
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
	}

	private: System::Void get_infos(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0 && e->ColumnIndex == 0) { // Seulement lorsque la colonne 0 est sélectionnée
			DataGridViewRow^ selectedRow = this->dataGridView1->Rows[e->RowIndex];
			Object^ idValue = selectedRow->Cells[0]->Value;

			if (idValue != nullptr) {
				try {
					this->tb_prenom->Text = System::Convert::ToString(idValue);
				}
				catch (FormatException^) {
					// Gérer les exceptions si nécessaire
				}
			}
		}
	}

	private: bool verifentree()
	{
		if (this->textBox2->Text == "" || this->textBox1->Text == "" || this->textBox4->Text == "" || this->textBox3->Text == "")
		{
			return false;
		}

		else
		{
			return true;
		}
	}

	private: void affichage_tout()
	{
		this->dataGridView1->Refresh();

		this->dataset = this->commandes->afficher_tout("Liste_Commandes");
		this->dataGridView1->DataSource = this->dataset;
		this->dataGridView1->DataMember = "Liste_Commandes";
	}


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		affichage_tout();
	}

	private: System::Void btn_ajouter_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			if (verifentree() == false || this->textBox_id_client->Text == "")
			{
				this->txt_results->Text = "Veuillez remplir tous les champs nécéssaires";
			}

			else
			{
				int^ id_commande = 0;
				int^ id_client = Convert::ToInt32(this->textBox_id_client->Text);
				String^ date_livraison = this->textBox2->Text;
				String^ date_emission = this->textBox1->Text;
				String^ date_paiement = this->textBox3->Text;
				String^ moyen_paiement = this->textBox4->Text;
				double^ total_ht = 0.0;
				double^ total_ttc = 0.0;
				String^ nom = "rien";
				AD::Adresse^ adresse = gcnew AD::Adresse();
				int^ num = 0;
				String^ logo = "rien";
				AD::Adresse^ adresse_f = gcnew AD::Adresse();
				AD::Adresse^ adresse_l = gcnew AD::Adresse();

				this->commandes->ajouter(id_commande, id_client, date_livraison, date_emission, date_paiement, moyen_paiement, total_ht, total_ttc, nom, adresse, num, logo, adresse_f, adresse_l);

				this->txt_results->Text = "Données entrées avec succès";

				affichage_tout();
			}
			
		}
		catch (Exception^ execept)
		{
			this->txt_results->Text = execept->Message;
			this->txt_results->Text += "\r\n";
			this->txt_results->Text += execept->StackTrace;
		}
	}

	private: System::Void btn_supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (this->tb_prenom->Text == "")
			{
				this->txt_results->Text = "Veuillez spécifier un id de commande.";
			}

			else
			{
				int^ id_commande = Convert::ToInt32(this->tb_prenom->Text);
				int^ id_client = 0;
				String^ date_livraison = this->textBox2->Text;
				String^ date_emission = this->textBox1->Text;
				String^ date_paiement = this->textBox3->Text;
				String^ moyen_paiement = this->textBox4->Text;
				double^ total_ht = 0.0;
				double^ total_ttc = 0.0;
				String^ nom = "rien";
				AD::Adresse^ adresse = gcnew AD::Adresse();
				int^ num = 0;
				String^ logo = "rien";
				AD::Adresse^ adresse_f = gcnew AD::Adresse();
				AD::Adresse^ adresse_l = gcnew AD::Adresse();

				this->commandes->supprimer(id_commande, id_client, date_livraison, date_emission, date_paiement, moyen_paiement, total_ht, total_ttc, nom, adresse, num, logo, adresse_f, adresse_l);

				this->txt_results->Text = "Données supprimées avec succès";

				affichage_tout();
			}
			
		}
		catch (Exception^ execept)
		{
			this->txt_results->Text = execept->Message;
			this->txt_results->Text += "\r\n";
			this->txt_results->Text += execept->StackTrace;
		}
	}

	private: System::Void btn_modifier_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (verifentree() == false)
			{
				this->txt_results->Text = "Veuillez remplir tous les champs nécessaires.";
			}

			else
			{
				refresh_datagrid();
				int^ id_commande = Convert::ToInt32(this->tb_prenom->Text);
				int^ id_client = 0;
				String^ date_livraison = this->textBox2->Text;
				String^ date_emission = this->textBox1->Text;
				String^ date_paiement = this->textBox3->Text;
				String^ moyen_paiement = this->textBox4->Text;
				double^ total_ht = 0.0;
				double^ total_ttc = 0.0;
				String^ nom = "rien";
				AD::Adresse^ adresse = gcnew AD::Adresse();
				int^ num = 0;
				String^ logo = "rien";
				AD::Adresse^ adresse_f = gcnew AD::Adresse();
				AD::Adresse^ adresse_l = gcnew AD::Adresse();

				this->commandes->modifier(id_commande, id_client, date_livraison, date_emission, date_paiement, moyen_paiement, total_ht, total_ttc, nom, adresse, num, logo, adresse_f, adresse_l);

				this->txt_results->Text = "Données modifiées avec succès";

				affichage_tout();
			}
			
		}
		catch (Exception^ execept)
		{
			this->txt_results->Text = execept->Message;
			this->txt_results->Text += "\r\n";
			this->txt_results->Text += execept->StackTrace;
		}
	}

	private: System::Void bouton_ajouter_article_click(System::Object^ sender, System::EventArgs^ e)
	{
		refresh_datagrid();

		int^ id_commande = Convert::ToInt32(this->tb_prenom->Text);
		int^ id_article = Convert::ToInt32(this->textBox_id_article->Text);
		int^ quantite = Convert::ToInt32(this->textBox6->Text);

		this->commande->ajouter_Article(id_commande, id_article, quantite);

		this->txt_results->Text = "Données enregistrées avec succes.";

		this->affichage_tout();
	}

	private: System::Void bouton_imprimer_click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->tb_prenom->Text == "")
		{
			this->txt_results->Text = "Veuillez spécifier un id de commande.";
		}

		else
		{
			int^ id_commande = Convert::ToInt32(this->tb_prenom->Text);

			this->commandes = gcnew StockageCommandes(id_commande);

			this->commandes->imprimer_commande();

			this->txt_results->Text = "Commande imprimée avec succes.";
		}
		
	}
	};
}