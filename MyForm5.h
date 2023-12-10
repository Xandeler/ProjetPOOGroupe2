#pragma once
#include "Statistiques.h"
#include "AccesBase.h"
#include "serviceStatistiques.h"

namespace ProjetPOOGroupe2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r sum e de MyForm1
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
		{
			InitializeComponent();
			// Permet de lier le bouton a fonction

			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisees.
		/// </summary>
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_retour;



	private: System::Windows::Forms::Button^ button_panier_moyen;
	private: System::Windows::Forms::Button^ button_total_un_client;

	private: System::Windows::Forms::Button^ button_articles_a_commander;

	private: System::Windows::Forms::Button^ button_chiffre_affaires;
	private: System::Windows::Forms::Button^ button_articles_moins_vendus;
	private: System::Windows::Forms::Button^ button_valeur_commerciale;
	private: System::Windows::Forms::Button^ button_achat_stock;

	private: System::Windows::Forms::Button^ button_articles_plus_vendus;
	private: System::Windows::Forms::TextBox^ tb_idclient;

	private: System::Windows::Forms::Label^ label_ID_client;
	private: System::Windows::Forms::Label^ label_statistiques;

	private: servstat::serviceStatistiques^ serviceStatistiques = gcnew servstat::serviceStatistiques();
	private: stat::Statistiques^ Statistiques = gcnew stat::Statistiques();
	private: System::Data::DataSet^ dataset = gcnew DataSet();
	private: System::Windows::Forms::DataGridView^ dataGridView_stat;
	private: System::Data::DataSet^ oDs;

	private: System::Windows::Forms::Label^ tb_afficher;
	private: System::Windows::Forms::TextBox^ tb_idcommande;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_results;
	private: System::Windows::Forms::TextBox^ txt_verif;

	private: System::Windows::Forms::Label^ label2;




		   /// <summary>
		   /// Variable n cessaire au concepteur.
		   /// </summary>
	private: System::ComponentModel::Container^ components;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// M thode requise pour la prise en charge du concepteur - ne modifiez pas
		   /// le contenu de cette m thode avec l' diteur de code.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm5::typeid));
			   this->button_retour = (gcnew System::Windows::Forms::Button());
			   this->button_panier_moyen = (gcnew System::Windows::Forms::Button());
			   this->button_total_un_client = (gcnew System::Windows::Forms::Button());
			   this->button_articles_a_commander = (gcnew System::Windows::Forms::Button());
			   this->button_chiffre_affaires = (gcnew System::Windows::Forms::Button());
			   this->button_articles_moins_vendus = (gcnew System::Windows::Forms::Button());
			   this->button_valeur_commerciale = (gcnew System::Windows::Forms::Button());
			   this->button_achat_stock = (gcnew System::Windows::Forms::Button());
			   this->button_articles_plus_vendus = (gcnew System::Windows::Forms::Button());
			   this->tb_idclient = (gcnew System::Windows::Forms::TextBox());
			   this->label_ID_client = (gcnew System::Windows::Forms::Label());
			   this->label_statistiques = (gcnew System::Windows::Forms::Label());
			   this->dataGridView_stat = (gcnew System::Windows::Forms::DataGridView());
			   this->tb_afficher = (gcnew System::Windows::Forms::Label());
			   this->tb_idcommande = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->txt_results = (gcnew System::Windows::Forms::TextBox());
			   this->txt_verif = (gcnew System::Windows::Forms::TextBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_stat))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // button_retour
			   // 
			   this->button_retour->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->button_retour->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->button_retour->Location = System::Drawing::Point(8, 458);
			   this->button_retour->Name = L"button_retour";
			   this->button_retour->Size = System::Drawing::Size(112, 36);
			   this->button_retour->TabIndex = 9;
			   this->button_retour->Text = L"RETOUR";
			   this->button_retour->UseVisualStyleBackColor = false;
			   this->button_retour->Click += gcnew System::EventHandler(this, &MyForm5::bouton_retour_click);
			   // 
			   // button_panier_moyen
			   // 
			   this->button_panier_moyen->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->button_panier_moyen->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->button_panier_moyen->Location = System::Drawing::Point(622, 256);
			   this->button_panier_moyen->Name = L"button_panier_moyen";
			   this->button_panier_moyen->Size = System::Drawing::Size(138, 55);
			   this->button_panier_moyen->TabIndex = 13;
			   this->button_panier_moyen->Text = L"Panier moyen d\'une commande";
			   this->button_panier_moyen->UseVisualStyleBackColor = false;
			   this->button_panier_moyen->Click += gcnew System::EventHandler(this, &MyForm5::bouton_panier_moyen_click);
			   // 
			   // button_total_un_client
			   // 
			   this->button_total_un_client->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->button_total_un_client->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->button_total_un_client->Location = System::Drawing::Point(117, 256);
			   this->button_total_un_client->Name = L"button_total_un_client";
			   this->button_total_un_client->Size = System::Drawing::Size(138, 55);
			   this->button_total_un_client->TabIndex = 14;
			   this->button_total_un_client->Text = L"Montant total d\'un client";
			   this->button_total_un_client->UseVisualStyleBackColor = false;
			   this->button_total_un_client->Click += gcnew System::EventHandler(this, &MyForm5::bouton_montant_client_click);
			   // 
			   // button_articles_a_commander
			   // 
			   this->button_articles_a_commander->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->button_articles_a_commander->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->button_articles_a_commander->Location = System::Drawing::Point(213, 422);
			   this->button_articles_a_commander->Name = L"button_articles_a_commander";
			   this->button_articles_a_commander->Size = System::Drawing::Size(138, 55);
			   this->button_articles_a_commander->TabIndex = 15;
			   this->button_articles_a_commander->Text = L"Articles à commander";
			   this->button_articles_a_commander->UseVisualStyleBackColor = false;
			   this->button_articles_a_commander->Click += gcnew System::EventHandler(this, &MyForm5::bouton_articles_a_commander_click);
			   // 
			   // button_chiffre_affaires
			   // 
			   this->button_chiffre_affaires->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->button_chiffre_affaires->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->button_chiffre_affaires->Location = System::Drawing::Point(382, 422);
			   this->button_chiffre_affaires->Name = L"button_chiffre_affaires";
			   this->button_chiffre_affaires->Size = System::Drawing::Size(138, 55);
			   this->button_chiffre_affaires->TabIndex = 16;
			   this->button_chiffre_affaires->Text = L"Chiffre d\'affaires de ce mois";
			   this->button_chiffre_affaires->UseVisualStyleBackColor = false;
			   this->button_chiffre_affaires->Click += gcnew System::EventHandler(this, &MyForm5::bouton_chiffre_affaires_click);
			   // 
			   // button_articles_moins_vendus
			   // 
			   this->button_articles_moins_vendus->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->button_articles_moins_vendus->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->button_articles_moins_vendus->Location = System::Drawing::Point(382, 337);
			   this->button_articles_moins_vendus->Name = L"button_articles_moins_vendus";
			   this->button_articles_moins_vendus->Size = System::Drawing::Size(138, 55);
			   this->button_articles_moins_vendus->TabIndex = 20;
			   this->button_articles_moins_vendus->Text = L"10 articles les moins vendus";
			   this->button_articles_moins_vendus->UseVisualStyleBackColor = false;
			   this->button_articles_moins_vendus->Click += gcnew System::EventHandler(this, &MyForm5::bouton_articles_moins_vendus_click);
			   // 
			   // button_valeur_commerciale
			   // 
			   this->button_valeur_commerciale->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->button_valeur_commerciale->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->button_valeur_commerciale->Location = System::Drawing::Point(545, 337);
			   this->button_valeur_commerciale->Name = L"button_valeur_commerciale";
			   this->button_valeur_commerciale->Size = System::Drawing::Size(138, 55);
			   this->button_valeur_commerciale->TabIndex = 19;
			   this->button_valeur_commerciale->Text = L"Valeur commerciale du stock";
			   this->button_valeur_commerciale->UseVisualStyleBackColor = false;
			   this->button_valeur_commerciale->Click += gcnew System::EventHandler(this, &MyForm5::bouton_valeur_commerciale_click);
			   // 
			   // button_achat_stock
			   // 
			   this->button_achat_stock->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->button_achat_stock->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->button_achat_stock->Location = System::Drawing::Point(545, 422);
			   this->button_achat_stock->Name = L"button_achat_stock";
			   this->button_achat_stock->Size = System::Drawing::Size(138, 55);
			   this->button_achat_stock->TabIndex = 18;
			   this->button_achat_stock->Text = L"Valeur d\'achat du stock";
			   this->button_achat_stock->UseVisualStyleBackColor = false;
			   this->button_achat_stock->Click += gcnew System::EventHandler(this, &MyForm5::bouton_valeur_achat_click);
			   // 
			   // button_articles_plus_vendus
			   // 
			   this->button_articles_plus_vendus->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->button_articles_plus_vendus->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->button_articles_plus_vendus->Location = System::Drawing::Point(213, 337);
			   this->button_articles_plus_vendus->Name = L"button_articles_plus_vendus";
			   this->button_articles_plus_vendus->Size = System::Drawing::Size(138, 55);
			   this->button_articles_plus_vendus->TabIndex = 17;
			   this->button_articles_plus_vendus->Text = L"10 articles les plus vendus";
			   this->button_articles_plus_vendus->UseVisualStyleBackColor = false;
			   this->button_articles_plus_vendus->Click += gcnew System::EventHandler(this, &MyForm5::bouton_articles_plus_vendus_click);
			   // 
			   // tb_idclient
			   // 
			   this->tb_idclient->Location = System::Drawing::Point(309, 283);
			   this->tb_idclient->Name = L"tb_idclient";
			   this->tb_idclient->Size = System::Drawing::Size(100, 22);
			   this->tb_idclient->TabIndex = 21;
			   // 
			   // label_ID_client
			   // 
			   this->label_ID_client->AutoSize = true;
			   this->label_ID_client->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label_ID_client->Location = System::Drawing::Point(327, 260);
			   this->label_ID_client->Name = L"label_ID_client";
			   this->label_ID_client->Size = System::Drawing::Size(62, 16);
			   this->label_ID_client->TabIndex = 22;
			   this->label_ID_client->Text = L"ID Client :";
			   // 
			   // label_statistiques
			   // 
			   this->label_statistiques->AutoSize = true;
			   this->label_statistiques->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->label_statistiques->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->label_statistiques->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			   this->label_statistiques->Location = System::Drawing::Point(9, 13);
			   this->label_statistiques->Name = L"label_statistiques";
			   this->label_statistiques->Size = System::Drawing::Size(115, 20);
			   this->label_statistiques->TabIndex = 24;
			   this->label_statistiques->Text = L"STATISTIQUES";
			   // 
			   // dataGridView_stat
			   // 
			   this->dataGridView_stat->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->dataGridView_stat->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView_stat->GridColor = System::Drawing::SystemColors::HighlightText;
			   this->dataGridView_stat->Location = System::Drawing::Point(437, 36);
			   this->dataGridView_stat->Name = L"dataGridView_stat";
			   this->dataGridView_stat->RowHeadersWidth = 51;
			   this->dataGridView_stat->RowTemplate->Height = 24;
			   this->dataGridView_stat->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			   this->dataGridView_stat->Size = System::Drawing::Size(434, 195);
			   this->dataGridView_stat->TabIndex = 25;
			   // 
			   // tb_afficher
			   // 
			   this->tb_afficher->AutoSize = true;
			   this->tb_afficher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->tb_afficher->Location = System::Drawing::Point(12, 49);
			   this->tb_afficher->Name = L"tb_afficher";
			   this->tb_afficher->Size = System::Drawing::Size(69, 16);
			   this->tb_afficher->TabIndex = 26;
			   this->tb_afficher->Text = L"Affichage :";
			   this->tb_afficher->Click += gcnew System::EventHandler(this, &MyForm5::label1_Click);
			   // 
			   // tb_idcommande
			   // 
			   this->tb_idcommande->Location = System::Drawing::Point(478, 283);
			   this->tb_idcommande->Name = L"tb_idcommande";
			   this->tb_idcommande->Size = System::Drawing::Size(100, 22);
			   this->tb_idcommande->TabIndex = 27;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label1->Location = System::Drawing::Point(477, 260);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(99, 16);
			   this->label1->TabIndex = 28;
			   this->label1->Text = L"ID Commande :";
			   // 
			   // txt_results
			   // 
			   this->txt_results->Location = System::Drawing::Point(12, 69);
			   this->txt_results->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			   this->txt_results->Multiline = true;
			   this->txt_results->Name = L"txt_results";
			   this->txt_results->ReadOnly = true;
			   this->txt_results->Size = System::Drawing::Size(397, 44);
			   this->txt_results->TabIndex = 29;
			   // 
			   // txt_verif
			   // 
			   this->txt_verif->Location = System::Drawing::Point(12, 166);
			   this->txt_verif->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			   this->txt_verif->Multiline = true;
			   this->txt_verif->Name = L"txt_verif";
			   this->txt_verif->ReadOnly = true;
			   this->txt_verif->Size = System::Drawing::Size(397, 44);
			   this->txt_verif->TabIndex = 30;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label2->Location = System::Drawing::Point(12, 146);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(79, 16);
			   this->label2->TabIndex = 31;
			   this->label2->Text = L"Vérification :";
			   // 
			   // MyForm5
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->ClientSize = System::Drawing::Size(883, 506);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->txt_verif);
			   this->Controls->Add(this->txt_results);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->tb_idcommande);
			   this->Controls->Add(this->tb_afficher);
			   this->Controls->Add(this->dataGridView_stat);
			   this->Controls->Add(this->label_statistiques);
			   this->Controls->Add(this->label_ID_client);
			   this->Controls->Add(this->tb_idclient);
			   this->Controls->Add(this->button_articles_moins_vendus);
			   this->Controls->Add(this->button_valeur_commerciale);
			   this->Controls->Add(this->button_achat_stock);
			   this->Controls->Add(this->button_articles_plus_vendus);
			   this->Controls->Add(this->button_chiffre_affaires);
			   this->Controls->Add(this->button_articles_a_commander);
			   this->Controls->Add(this->button_total_un_client);
			   this->Controls->Add(this->button_panier_moyen);
			   this->Controls->Add(this->button_retour);
			   this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->MaximumSize = System::Drawing::Size(901, 553);
			   this->MinimumSize = System::Drawing::Size(901, 553);
			   this->Name = L"MyForm5";
			   this->Text = L"Gestion des statistiques";
			   this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_stat))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: void donneesgeneree()
	{
		this->txt_verif->Text = "Données générées";
	}


	private: System::Void MyForm5_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->txt_results->Text = "Cliquez sur un bouton :";
	}

	private: System::Void bouton_retour_click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
	}

	private: System::Void bouton_panier_moyen_click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView_stat->Refresh();
		this->txt_results->Text = "Panier moyen : ";
		if (this->tb_idcommande->Text == "") {
			this->dataGridView_stat->DataSource = nullptr;
			this->txt_verif->Text = "Veuillez entrer un ID de commande";
		}
		else {

			this->oDs = this->serviceStatistiques->Calcul_Panier_MoyenSERVICE(Convert::ToInt32(this->tb_idcommande->Text), "Commande");
			this->dataGridView_stat->DataSource = this->oDs;
			this->dataGridView_stat->DataMember = "Commande";
			this->tb_idcommande->Text = "";
			donneesgeneree();
		}
	}

	private: System::Void bouton_chiffre_affaires_click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView_stat->Refresh();
		this->txt_results->Text = "Chiffre d'affaires : ";
		this->oDs = this->serviceStatistiques->Calcul_Chiffre_AffairesSERVICE("Commande");
		this->dataGridView_stat->DataSource = this->oDs;
		this->dataGridView_stat->DataMember = "Commande";
		donneesgeneree();
	}

	private: System::Void bouton_articles_a_commander_click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView_stat->Refresh();
		this->txt_results->Text = "Articles à commander : ";
		this->oDs = this->serviceStatistiques->Produit_A_CommanderSERVICE("Commande1");
		this->dataGridView_stat->DataSource = this->oDs;
		this->dataGridView_stat->DataMember = "Commande1";
		donneesgeneree();
	}

	private: System::Void bouton_montant_client_click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView_stat->Refresh();
		this->txt_results->Text = "Montant total d'un client : ";
		if (this->tb_idclient->Text == "") {
			this->dataGridView_stat->DataSource = nullptr;
			this->txt_verif->Text = "Veuillez entrer un ID de client";
		}
		else {
			this->oDs = this->serviceStatistiques->Calcul_Montant_ClientSERVICE(Convert::ToInt32(this->tb_idclient->Text), "Commande2");
			this->dataGridView_stat->DataSource = this->oDs;
			this->dataGridView_stat->DataMember = "Commande2";
			this->tb_idclient->Text = "";
			donneesgeneree();
		}
	}

	private: System::Void bouton_articles_plus_vendus_click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView_stat->Refresh();
		this->txt_results->Text = "10 articles les plus vendus : ";
		this->oDs = this->serviceStatistiques->Articles_Plus_VendusSERVICE("Commande3");
		this->dataGridView_stat->DataSource = this->oDs;
		this->dataGridView_stat->DataMember = "Commande3";
		donneesgeneree();
	}

	private: System::Void bouton_articles_moins_vendus_click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView_stat->Refresh();
		this->txt_results->Text = "10 articles les moins vendus : ";
		this->oDs = this->serviceStatistiques->Articles_Moins_VendusSERVICE("Commande4");
		this->dataGridView_stat->DataSource = this->oDs;
		this->dataGridView_stat->DataMember = "Commande4";
		donneesgeneree();
	}

	private: System::Void bouton_valeur_commerciale_click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView_stat->Refresh();
		this->txt_results->Text = "Valeur commerciale du stock : ";
		this->oDs = this->serviceStatistiques->Calcul_Valeur_Commerciale_StockSERVICE("Commande5");
		this->dataGridView_stat->DataSource = this->oDs;
		this->dataGridView_stat->DataMember = "Commande5";
		donneesgeneree();
	}

	private: System::Void bouton_valeur_achat_click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView_stat->Refresh();
		this->txt_results->Text = "Valeur d'achat du stock : ";
		this->oDs = this->serviceStatistiques->Calcul_Valeur_Achat_StockSERVICE("Commande6");
		this->dataGridView_stat->DataSource = this->oDs;
		this->dataGridView_stat->DataMember = "Commande6";
		donneesgeneree();
	}


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
