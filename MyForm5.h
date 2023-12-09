﻿#pragma once
#include "Statistiques.h"

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

	private: System::Windows::Forms::TextBox^ textBox_resultat;

	private: System::Windows::Forms::Button^ button_panier_moyen;
	private: System::Windows::Forms::Button^ button_total_un_client;

	private: System::Windows::Forms::Button^ button_articles_a_commander;

	private: System::Windows::Forms::Button^ button_chiffre_affaires;
	private: System::Windows::Forms::Button^ button_articles_moins_vendus;
	private: System::Windows::Forms::Button^ button_valeur_commerciale;
	private: System::Windows::Forms::Button^ button_achat_stock;

	private: System::Windows::Forms::Button^ button_articles_plus_vendus;
	private: System::Windows::Forms::TextBox^ textBox_ID_client;
	private: System::Windows::Forms::Label^ label_ID_client;
	private: System::Windows::Forms::Label^ label_statistiques;

	private: Statistiques^ statistiques;
	private: System::Data::DataSet^ dataset;

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
			   this->textBox_resultat = (gcnew System::Windows::Forms::TextBox());
			   this->button_panier_moyen = (gcnew System::Windows::Forms::Button());
			   this->button_total_un_client = (gcnew System::Windows::Forms::Button());
			   this->button_articles_a_commander = (gcnew System::Windows::Forms::Button());
			   this->button_chiffre_affaires = (gcnew System::Windows::Forms::Button());
			   this->button_articles_moins_vendus = (gcnew System::Windows::Forms::Button());
			   this->button_valeur_commerciale = (gcnew System::Windows::Forms::Button());
			   this->button_achat_stock = (gcnew System::Windows::Forms::Button());
			   this->button_articles_plus_vendus = (gcnew System::Windows::Forms::Button());
			   this->textBox_ID_client = (gcnew System::Windows::Forms::TextBox());
			   this->label_ID_client = (gcnew System::Windows::Forms::Label());
			   this->label_statistiques = (gcnew System::Windows::Forms::Label());
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
			   // textBox_resultat
			   // 
			   this->textBox_resultat->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->textBox_resultat->Location = System::Drawing::Point(8, 35);
			   this->textBox_resultat->Multiline = true;
			   this->textBox_resultat->Name = L"textBox_resultat";
			   this->textBox_resultat->Size = System::Drawing::Size(870, 201);
			   this->textBox_resultat->TabIndex = 10;
			   // 
			   // button_panier_moyen
			   // 
			   this->button_panier_moyen->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->button_panier_moyen->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->button_panier_moyen->Location = System::Drawing::Point(213, 422);
			   this->button_panier_moyen->Name = L"button_panier_moyen";
			   this->button_panier_moyen->Size = System::Drawing::Size(138, 55);
			   this->button_panier_moyen->TabIndex = 13;
			   this->button_panier_moyen->Text = L"Panier moyen";
			   this->button_panier_moyen->UseVisualStyleBackColor = false;
			   this->button_panier_moyen->Click += gcnew System::EventHandler(this, &MyForm5::bouton_panier_moyen_click);
			   // 
			   // button_total_un_client
			   // 
			   this->button_total_un_client->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->button_total_un_client->ForeColor = System::Drawing::SystemColors::HotTrack;
			   this->button_total_un_client->Location = System::Drawing::Point(293, 253);
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
			   this->button_articles_a_commander->Location = System::Drawing::Point(131, 348);
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
			   this->button_articles_moins_vendus->Location = System::Drawing::Point(461, 348);
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
			   this->button_valeur_commerciale->Location = System::Drawing::Point(621, 348);
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
			   this->button_articles_plus_vendus->Location = System::Drawing::Point(293, 348);
			   this->button_articles_plus_vendus->Name = L"button_articles_plus_vendus";
			   this->button_articles_plus_vendus->Size = System::Drawing::Size(138, 55);
			   this->button_articles_plus_vendus->TabIndex = 17;
			   this->button_articles_plus_vendus->Text = L"10 articles les plus vendus";
			   this->button_articles_plus_vendus->UseVisualStyleBackColor = false;
			   this->button_articles_plus_vendus->Click += gcnew System::EventHandler(this, &MyForm5::bouton_articles_plus_vendus_click);
			   // 
			   // textBox_ID_client
			   // 
			   this->textBox_ID_client->Location = System::Drawing::Point(474, 283);
			   this->textBox_ID_client->Name = L"textBox_ID_client";
			   this->textBox_ID_client->Size = System::Drawing::Size(100, 22);
			   this->textBox_ID_client->TabIndex = 21;
			   // 
			   // label_ID_client
			   // 
			   this->label_ID_client->AutoSize = true;
			   this->label_ID_client->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->label_ID_client->Location = System::Drawing::Point(484, 258);
			   this->label_ID_client->Name = L"label_ID_client";
			   this->label_ID_client->Size = System::Drawing::Size(78, 16);
			   this->label_ID_client->TabIndex = 22;
			   this->label_ID_client->Text = L"ID du client :";
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
			   // MyForm5
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->ClientSize = System::Drawing::Size(883, 506);
			   this->Controls->Add(this->label_statistiques);
			   this->Controls->Add(this->label_ID_client);
			   this->Controls->Add(this->textBox_ID_client);
			   this->Controls->Add(this->button_articles_moins_vendus);
			   this->Controls->Add(this->button_valeur_commerciale);
			   this->Controls->Add(this->button_achat_stock);
			   this->Controls->Add(this->button_articles_plus_vendus);
			   this->Controls->Add(this->button_chiffre_affaires);
			   this->Controls->Add(this->button_articles_a_commander);
			   this->Controls->Add(this->button_total_un_client);
			   this->Controls->Add(this->button_panier_moyen);
			   this->Controls->Add(this->textBox_resultat);
			   this->Controls->Add(this->button_retour);
			   this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->MaximumSize = System::Drawing::Size(901, 553);
			   this->MinimumSize = System::Drawing::Size(901, 553);
			   this->Name = L"MyForm5";
			   this->Text = L"Gestion des statistiques";
			   this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void MyForm5_Load(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void bouton_retour_click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
	}

	private: System::Void bouton_panier_moyen_click(System::Object^ sender, System::EventArgs^ e)
	{
		this->textBox_resultat->Clear();

		this->textBox_resultat->Text += "Le panier moyen est de : ";
		this->textBox_resultat->Text += this->statistiques->Calcul_Panier_Moyen("Article");
		this->textBox_resultat->Text += " euros.";
	}

	private: System::Void bouton_chiffre_affaires_click(System::Object^ sender, System::EventArgs^ e)
	{
		this->textBox_resultat->Clear();

		this->textBox_resultat->Text += "Le chiffre d'affaires du mois en cours est de : ";
		this->textBox_resultat->Text += this->statistiques->Calcul_Chiffre_Affaires("ChiffreAffaires");
		this->textBox_resultat->Text += " euros.";
	}

	private: System::Void bouton_articles_a_commander_click(System::Object^ sender, System::EventArgs^ e)
	{
		this->textBox_resultat->Clear();

		this->textBox_resultat->Text += "Les articles sous le seuil de reapprovisionnement sont les suivants : ";
		this->textBox_resultat->Text += this->statistiques->Produit_A_Commander("ProduitCommander");
		this->textBox_resultat->Text += ".";
	}

	private: System::Void bouton_montant_client_click(System::Object^ sender, System::EventArgs^ e)
	{
		this->textBox_resultat->Clear();

		this->textBox_resultat->Text += "Le montant total de tous les achats effectues par le client ";
		this->textBox_resultat->Text += this->textBox_ID_client->Text;
		this->textBox_resultat->Text += " est de : ";
		this->textBox_resultat->Text += this->statistiques->Calcul_Montant_Client(Convert::ToInt32(this->textBox_ID_client->Text), "MontantClient");
		this->textBox_resultat->Text += " euros.";
		this->textBox_ID_client->Text = "";
	}

	private: System::Void bouton_articles_plus_vendus_click(System::Object^ sender, System::EventArgs^ e)
	{
		this->textBox_resultat->Clear();

		this->textBox_resultat->Text += "Les dix articles les plus vendus sont : ";
		this->textBox_resultat->Text += this->statistiques->Articles_Plus_Vendus("ArticlesPlusVendus");
		this->textBox_resultat->Text += ".";
	}

	private: System::Void bouton_articles_moins_vendus_click(System::Object^ sender, System::EventArgs^ e)
	{
		this->textBox_resultat->Clear();

		this->textBox_resultat->Text += "Les dix articles les moins vendus sont : ";
		this->textBox_resultat->Text += this->statistiques->Articles_Moins_Vendus("ArticlesMoinsVendus");
		this->textBox_resultat->Text += ".";
	}

	private: System::Void bouton_valeur_commerciale_click(System::Object^ sender, System::EventArgs^ e)
	{
		this->textBox_resultat->Clear();

		this->textBox_resultat->Text += "La valeur commerciale du stock est de : ";
		this->textBox_resultat->Text += this->statistiques->Calcul_Valeur_Commerciale_Stock("ValeurCommercialeStock");
		this->textBox_resultat->Text += " euros.";
	}

	private: System::Void bouton_valeur_achat_click(System::Object^ sender, System::EventArgs^ e)
	{
		this->textBox_resultat->Clear();

		this->textBox_resultat->Text += "La valeur d'achat du stock est de : ";
		this->textBox_resultat->Text += this->statistiques->Calcul_Valeur_Achat_Stock("ValeurAchatStock");
		this->textBox_resultat->Text += "euros.";
	}
	};
}
