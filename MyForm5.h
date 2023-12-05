#pragma once
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
	private: System::Windows::Forms::Label^ label_resultat;
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

		   /// <summary>
		   /// Variable n cessaire au concepteur.
		   /// </summary>
	private: System::ComponentModel::Container^ components;
	private: Statistiques^ statistiques;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// M thode requise pour la prise en charge du concepteur - ne modifiez pas
		   /// le contenu de cette m thode avec l' diteur de code.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->button_retour = (gcnew System::Windows::Forms::Button());
			   this->textBox_resultat = (gcnew System::Windows::Forms::TextBox());
			   this->label_resultat = (gcnew System::Windows::Forms::Label());
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
			   this->button_retour->Location = System::Drawing::Point(12, 363);
			   this->button_retour->Name = L"button_retour";
			   this->button_retour->Size = System::Drawing::Size(112, 36);
			   this->button_retour->TabIndex = 9;
			   this->button_retour->Text = L"RETOUR";
			   this->button_retour->UseVisualStyleBackColor = true;
			   this->button_retour->Click += gcnew System::EventHandler(this, &MyForm5::bouton_retour_click);
			   // 
			   // textBox_resultat
			   // 
			   this->textBox_resultat->Location = System::Drawing::Point(567, 43);
			   this->textBox_resultat->Multiline = true;
			   this->textBox_resultat->Name = L"textBox_resultat";
			   this->textBox_resultat->Size = System::Drawing::Size(356, 345);
			   this->textBox_resultat->TabIndex = 10;
			   // 
			   // label_resultat
			   // 
			   this->label_resultat->AutoSize = true;
			   this->label_resultat->Location = System::Drawing::Point(567, 13);
			   this->label_resultat->Name = L"label_resultat";
			   this->label_resultat->Size = System::Drawing::Size(62, 16);
			   this->label_resultat->TabIndex = 12;
			   this->label_resultat->Text = L"Résultat :";
			   // 
			   // button_panier_moyen
			   // 
			   this->button_panier_moyen->Location = System::Drawing::Point(176, 66);
			   this->button_panier_moyen->Name = L"button_panier_moyen";
			   this->button_panier_moyen->Size = System::Drawing::Size(138, 55);
			   this->button_panier_moyen->TabIndex = 13;
			   this->button_panier_moyen->Text = L"Panier moyen";
			   this->button_panier_moyen->UseVisualStyleBackColor = true;
			   this->button_panier_moyen->Click += gcnew System::EventHandler(this, &MyForm5::bouton_panier_moyen_click);
			   // 
			   // button_total_un_client
			   // 
			   this->button_total_un_client->Location = System::Drawing::Point(176, 297);
			   this->button_total_un_client->Name = L"button_total_un_client";
			   this->button_total_un_client->Size = System::Drawing::Size(138, 55);
			   this->button_total_un_client->TabIndex = 14;
			   this->button_total_un_client->Text = L"Montant total d\'un client";
			   this->button_total_un_client->UseVisualStyleBackColor = true;
			   this->button_total_un_client->Click += gcnew System::EventHandler(this, &MyForm5::bouton_montant_client_click);
			   // 
			   // button_articles_a_commander
			   // 
			   this->button_articles_a_commander->Location = System::Drawing::Point(176, 219);
			   this->button_articles_a_commander->Name = L"button_articles_a_commander";
			   this->button_articles_a_commander->Size = System::Drawing::Size(138, 55);
			   this->button_articles_a_commander->TabIndex = 15;
			   this->button_articles_a_commander->Text = L"Articles à commander";
			   this->button_articles_a_commander->UseVisualStyleBackColor = true;
			   this->button_articles_a_commander->Click += gcnew System::EventHandler(this, &MyForm5::bouton_articles_a_commander_click);
			   // 
			   // button_chiffre_affaires
			   // 
			   this->button_chiffre_affaires->Location = System::Drawing::Point(176, 143);
			   this->button_chiffre_affaires->Name = L"button_chiffre_affaires";
			   this->button_chiffre_affaires->Size = System::Drawing::Size(138, 55);
			   this->button_chiffre_affaires->TabIndex = 16;
			   this->button_chiffre_affaires->Text = L"Chiffre d\'affaires de ce mois";
			   this->button_chiffre_affaires->UseVisualStyleBackColor = true;
			   this->button_chiffre_affaires->Click += gcnew System::EventHandler(this, &MyForm5::bouton_chiffre_affaires_click);
			   // 
			   // button_articles_moins_vendus
			   // 
			   this->button_articles_moins_vendus->Location = System::Drawing::Point(341, 143);
			   this->button_articles_moins_vendus->Name = L"button_articles_moins_vendus";
			   this->button_articles_moins_vendus->Size = System::Drawing::Size(138, 55);
			   this->button_articles_moins_vendus->TabIndex = 20;
			   this->button_articles_moins_vendus->Text = L"10 articles les moins vendus";
			   this->button_articles_moins_vendus->UseVisualStyleBackColor = true;
			   this->button_articles_moins_vendus->Click += gcnew System::EventHandler(this, &MyForm5::bouton_articles_moins_vendus_click);
			   // 
			   // button_valeur_commerciale
			   // 
			   this->button_valeur_commerciale->Location = System::Drawing::Point(341, 219);
			   this->button_valeur_commerciale->Name = L"button_valeur_commerciale";
			   this->button_valeur_commerciale->Size = System::Drawing::Size(138, 55);
			   this->button_valeur_commerciale->TabIndex = 19;
			   this->button_valeur_commerciale->Text = L"Valeur commerciale du stock";
			   this->button_valeur_commerciale->UseVisualStyleBackColor = true;
			   this->button_valeur_commerciale->Click += gcnew System::EventHandler(this, &MyForm5::bouton_valeur_commerciale_click);
			   // 
			   // button_achat_stock
			   // 
			   this->button_achat_stock->Location = System::Drawing::Point(341, 297);
			   this->button_achat_stock->Name = L"button_achat_stock";
			   this->button_achat_stock->Size = System::Drawing::Size(138, 55);
			   this->button_achat_stock->TabIndex = 18;
			   this->button_achat_stock->Text = L"Valeur d\'achat du stock";
			   this->button_achat_stock->UseVisualStyleBackColor = true;
			   this->button_achat_stock->Click += gcnew System::EventHandler(this, &MyForm5::bouton_valeur_achat_click);
			   // 
			   // button_articles_plus_vendus
			   // 
			   this->button_articles_plus_vendus->Location = System::Drawing::Point(341, 66);
			   this->button_articles_plus_vendus->Name = L"button_articles_plus_vendus";
			   this->button_articles_plus_vendus->Size = System::Drawing::Size(138, 55);
			   this->button_articles_plus_vendus->TabIndex = 17;
			   this->button_articles_plus_vendus->Text = L"10 articles les plus vendus";
			   this->button_articles_plus_vendus->UseVisualStyleBackColor = true;
			   this->button_articles_plus_vendus->Click += gcnew System::EventHandler(this, &MyForm5::bouton_articles_plus_vendus_click);
			   // 
			   // textBox_ID_client
			   // 
			   this->textBox_ID_client->Location = System::Drawing::Point(47, 330);
			   this->textBox_ID_client->Name = L"textBox_ID_client";
			   this->textBox_ID_client->Size = System::Drawing::Size(100, 22);
			   this->textBox_ID_client->TabIndex = 21;
			   // 
			   // label_ID_client
			   // 
			   this->label_ID_client->AutoSize = true;
			   this->label_ID_client->Location = System::Drawing::Point(44, 297);
			   this->label_ID_client->Name = L"label_ID_client";
			   this->label_ID_client->Size = System::Drawing::Size(78, 16);
			   this->label_ID_client->TabIndex = 22;
			   this->label_ID_client->Text = L"ID du client :";
			   // 
			   // label_statistiques
			   // 
			   this->label_statistiques->AutoSize = true;
			   this->label_statistiques->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->label_statistiques->Location = System::Drawing::Point(19, 13);
			   this->label_statistiques->Name = L"label_statistiques";
			   this->label_statistiques->Size = System::Drawing::Size(107, 18);
			   this->label_statistiques->TabIndex = 24;
			   this->label_statistiques->Text = L"STATISTIQUES";
			   // 
			   // MyForm5
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(960, 402);
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
			   this->Controls->Add(this->label_resultat);
			   this->Controls->Add(this->textBox_resultat);
			   this->Controls->Add(this->button_retour);
			   this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
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

	}

	private: System::Void bouton_panier_moyen_click(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void bouton_chiffre_affaires_click(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void bouton_articles_a_commander_click(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void bouton_montant_client_click(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void bouton_articles_plus_vendus_click(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void bouton_articles_moins_vendus_click(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void bouton_valeur_commerciale_click(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void bouton_valeur_achat_click(System::Object^ sender, System::EventArgs^ e)
	{

	}
	};
}
