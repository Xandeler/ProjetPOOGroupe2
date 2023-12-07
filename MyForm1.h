#pragma once
#include <cstdlib>
#include "servicePersonnel.h"
#include "Personne.h"
#include "Personnel.h"
#include "Adresse.h"

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
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			this->btn_retour->Click += gcnew System::EventHandler(this, &MyForm1::btn_retour_Click); // Permet de lier le bouton ? la fonction

		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm1()
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_results;

	private: System::Windows::Forms::Label^ lbl_resultats;
	private: System::Windows::Forms::TextBox^ tb_superieur;






	private: System::Windows::Forms::TextBox^ tb_date;


	private: servPers::CLservices^ pe;
	private: System::Data::DataSet^ oDs;

	protected:

	private:
		/// <summary>
		/// Variable n?cessaire au concepteur.
		/// </summary>
	private: System::ComponentModel::Container^ components;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tb_numrue;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tb_nomrue;

	private: System::Windows::Forms::Button^ button1;
	private: PE::Personnel^ personnel;
	private: System::Windows::Forms::Label^ label_id;
	private: System::Windows::Forms::TextBox^ tb_ID;
	private: System::Windows::Forms::Label^ label_ville;
	private: System::Windows::Forms::TextBox^ tb_ville;

	private: AD::Adresse^ Adresse;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// M?thode requise pour la prise en charge du concepteur - ne modifiez pas
		   /// le contenu de cette m?thode avec l'?diteur de code.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->btn_retour = (gcnew System::Windows::Forms::Button());
			   this->btn_ajouter = (gcnew System::Windows::Forms::Button());
			   this->btn_supprimer = (gcnew System::Windows::Forms::Button());
			   this->btn_modifier = (gcnew System::Windows::Forms::Button());
			   this->tb_nom = (gcnew System::Windows::Forms::TextBox());
			   this->tb_prenom = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->txt_results = (gcnew System::Windows::Forms::TextBox());
			   this->lbl_resultats = (gcnew System::Windows::Forms::Label());
			   this->tb_superieur = (gcnew System::Windows::Forms::TextBox());
			   this->tb_date = (gcnew System::Windows::Forms::TextBox());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->tb_numrue = (gcnew System::Windows::Forms::TextBox());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->tb_nomrue = (gcnew System::Windows::Forms::TextBox());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->label_id = (gcnew System::Windows::Forms::Label());
			   this->tb_ID = (gcnew System::Windows::Forms::TextBox());
			   this->label_ville = (gcnew System::Windows::Forms::Label());
			   this->tb_ville = (gcnew System::Windows::Forms::TextBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->AllowUserToAddRows = false;
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Location = System::Drawing::Point(36, 14);
			   this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->dataGridView1->MultiSelect = false;
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->ReadOnly = true;
			   this->dataGridView1->RowHeadersWidth = 51;
			   this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			   this->dataGridView1->Size = System::Drawing::Size(805, 220);
			   this->dataGridView1->TabIndex = 0;
			   // 
			   // btn_retour
			   // 
			   this->btn_retour->Location = System::Drawing::Point(36, 478);
			   this->btn_retour->Name = L"btn_retour";
			   this->btn_retour->Size = System::Drawing::Size(112, 36);
			   this->btn_retour->TabIndex = 4;
			   this->btn_retour->Text = L"RETOUR";
			   this->btn_retour->UseVisualStyleBackColor = true;
			   this->btn_retour->Click += gcnew System::EventHandler(this, &MyForm1::btn_retour_Click);
			   // 
			   // btn_ajouter
			   // 
			   this->btn_ajouter->Location = System::Drawing::Point(108, 259);
			   this->btn_ajouter->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->btn_ajouter->Name = L"btn_ajouter";
			   this->btn_ajouter->Size = System::Drawing::Size(190, 51);
			   this->btn_ajouter->TabIndex = 2;
			   this->btn_ajouter->Text = L"AJOUTER UN PERSONNEL";
			   this->btn_ajouter->UseVisualStyleBackColor = true;
			   this->btn_ajouter->Click += gcnew System::EventHandler(this, &MyForm1::btn_ajouter_Click);
			   // 
			   // btn_supprimer
			   // 
			   this->btn_supprimer->Location = System::Drawing::Point(108, 383);
			   this->btn_supprimer->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->btn_supprimer->Name = L"btn_supprimer";
			   this->btn_supprimer->Size = System::Drawing::Size(190, 51);
			   this->btn_supprimer->TabIndex = 3;
			   this->btn_supprimer->Text = L"SUPPRIMER UN PERSONNEL";
			   this->btn_supprimer->UseVisualStyleBackColor = true;
			   this->btn_supprimer->Click += gcnew System::EventHandler(this, &MyForm1::btn_supprimer_Click);
			   // 
			   // btn_modifier
			   // 
			   this->btn_modifier->Location = System::Drawing::Point(108, 320);
			   this->btn_modifier->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->btn_modifier->Name = L"btn_modifier";
			   this->btn_modifier->Size = System::Drawing::Size(190, 51);
			   this->btn_modifier->TabIndex = 4;
			   this->btn_modifier->Text = L"MODIFIER UN PERSONNEL";
			   this->btn_modifier->UseVisualStyleBackColor = true;
			   this->btn_modifier->Click += gcnew System::EventHandler(this, &MyForm1::btn_modifier_Click);
			   // 
			   // tb_nom
			   // 
			   this->tb_nom->Location = System::Drawing::Point(557, 320);
			   this->tb_nom->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_nom->Name = L"tb_nom";
			   this->tb_nom->Size = System::Drawing::Size(284, 24);
			   this->tb_nom->TabIndex = 6;
			   // 
			   // tb_prenom
			   // 
			   this->tb_prenom->Location = System::Drawing::Point(557, 289);
			   this->tb_prenom->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_prenom->Name = L"tb_prenom";
			   this->tb_prenom->Size = System::Drawing::Size(284, 24);
			   this->tb_prenom->TabIndex = 7;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(490, 320);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(61, 18);
			   this->label1->TabIndex = 8;
			   this->label1->Text = L"Prenom";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(509, 295);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(41, 18);
			   this->label2->TabIndex = 9;
			   this->label2->Text = L"Nom";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(428, 354);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(123, 18);
			   this->label3->TabIndex = 8;
			   this->label3->Text = L"Date d\'embauche";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(479, 391);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(71, 18);
			   this->label4->TabIndex = 8;
			   this->label4->Text = L"Superieur";
			   // 
			   // txt_results
			   // 
			   this->txt_results->Location = System::Drawing::Point(473, 552);
			   this->txt_results->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			   this->txt_results->Multiline = true;
			   this->txt_results->Name = L"txt_results";
			   this->txt_results->ReadOnly = true;
			   this->txt_results->Size = System::Drawing::Size(397, 44);
			   this->txt_results->TabIndex = 10;
			   // 
			   // lbl_resultats
			   // 
			   this->lbl_resultats->AutoSize = true;
			   this->lbl_resultats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbl_resultats->Location = System::Drawing::Point(396, 552);
			   this->lbl_resultats->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lbl_resultats->Name = L"lbl_resultats";
			   this->lbl_resultats->Size = System::Drawing::Size(70, 18);
			   this->lbl_resultats->TabIndex = 14;
			   this->lbl_resultats->Text = L"Resultats";
			   // 
			   // tb_superieur
			   // 
			   this->tb_superieur->Location = System::Drawing::Point(557, 385);
			   this->tb_superieur->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_superieur->Name = L"tb_superieur";
			   this->tb_superieur->Size = System::Drawing::Size(284, 24);
			   this->tb_superieur->TabIndex = 15;
			   // 
			   // tb_date
			   // 
			   this->tb_date->Location = System::Drawing::Point(557, 351);
			   this->tb_date->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_date->Name = L"tb_date";
			   this->tb_date->Size = System::Drawing::Size(284, 24);
			   this->tb_date->TabIndex = 16;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(444, 422);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(107, 18);
			   this->label5->TabIndex = 17;
			   this->label5->Text = L"Numero de rue";
			   this->label5->Click += gcnew System::EventHandler(this, &MyForm1::label5_Click);
			   // 
			   // tb_numrue
			   // 
			   this->tb_numrue->Location = System::Drawing::Point(557, 419);
			   this->tb_numrue->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_numrue->Name = L"tb_numrue";
			   this->tb_numrue->Size = System::Drawing::Size(284, 24);
			   this->tb_numrue->TabIndex = 18;
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(464, 458);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(86, 18);
			   this->label6->TabIndex = 19;
			   this->label6->Text = L"Nom de rue";
			   // 
			   // tb_nomrue
			   // 
			   this->tb_nomrue->Location = System::Drawing::Point(557, 455);
			   this->tb_nomrue->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_nomrue->Name = L"tb_nomrue";
			   this->tb_nomrue->Size = System::Drawing::Size(284, 24);
			   this->tb_nomrue->TabIndex = 20;
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(36, 259);
			   this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(64, 175);
			   this->button1->TabIndex = 21;
			   this->button1->Text = L"LOAD";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			   // 
			   // label_id
			   // 
			   this->label_id->AutoSize = true;
			   this->label_id->Location = System::Drawing::Point(528, 265);
			   this->label_id->Name = L"label_id";
			   this->label_id->Size = System::Drawing::Size(22, 18);
			   this->label_id->TabIndex = 22;
			   this->label_id->Text = L"ID";
			   // 
			   // tb_ID
			   // 
			   this->tb_ID->Location = System::Drawing::Point(557, 259);
			   this->tb_ID->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_ID->Name = L"tb_ID";
			   this->tb_ID->Size = System::Drawing::Size(284, 24);
			   this->tb_ID->TabIndex = 23;
			   // 
			   // label_ville
			   // 
			   this->label_ville->AutoSize = true;
			   this->label_ville->Location = System::Drawing::Point(517, 492);
			   this->label_ville->Name = L"label_ville";
			   this->label_ville->Size = System::Drawing::Size(34, 18);
			   this->label_ville->TabIndex = 24;
			   this->label_ville->Text = L"Ville";
			   // 
			   // tb_ville
			   // 
			   this->tb_ville->Location = System::Drawing::Point(557, 489);
			   this->tb_ville->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_ville->Name = L"tb_ville";
			   this->tb_ville->Size = System::Drawing::Size(284, 24);
			   this->tb_ville->TabIndex = 25;
			   // 
			   // MyForm1
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(882, 609);
			   this->Controls->Add(this->tb_ville);
			   this->Controls->Add(this->label_ville);
			   this->Controls->Add(this->tb_ID);
			   this->Controls->Add(this->label_id);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->tb_nomrue);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->tb_numrue);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->tb_date);
			   this->Controls->Add(this->tb_superieur);
			   this->Controls->Add(this->lbl_resultats);
			   this->Controls->Add(this->txt_results);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label4);
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
			   this->Name = L"MyForm1";
			   this->Text = L"Gestion du personnel";
			   this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm_Load);
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

	private: int^ get_selected_ID()
	{
		String^ selectedIDstring = this->dataGridView1->SelectedRows[0]->Cells["id"]->Value->ToString();
		return Convert::ToInt32(selectedIDstring);

	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->pe = gcnew servPers::CLservices();
		this->dataGridView1->Refresh();
	}

	private: System::Void btn_ajouter_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// initialiser un objet personne avec les valeurs des textbox
		// ajouter la personne dans la base de données
		// rafraichir le datagridview
		// afficher un message de confirmation

		if (this->tb_nom->Text == "" || this->tb_prenom->Text == "" || this->tb_superieur->Text == "" || this->tb_nomrue->Text == "")
		{
			this->txt_results->Text = "Veuillez remplir tous les champs";
		}
		else
		{
			this->personnel = gcnew PE::Personnel();
			this->personnel->set_Nom(this->tb_nom->Text);
			this->personnel->set_Prenom(this->tb_prenom->Text);
			this->personnel->set_Date_Embauche(this->tb_date->Text); //Vérifier si c'est la bonne textBox.
			this->personnel->set_Superieur_Hierarchique(Convert::ToInt32(this->tb_superieur->Text));

			this->Adresse = gcnew AD::Adresse();
			this->Adresse->set_Rue(this->tb_nomrue->Text);
			this->Adresse->set_Numero_Maison(Convert::ToInt32(this->tb_numrue->Text));
			this->Adresse->set_Nature("Habitation");
			this->personnel->set_Adresse_Habitation(this->Adresse);
			this->Adresse->set_Nom_Ville(this->tb_ville->Text);

			this->pe->ajouterUnePersonne(this->personnel);
			refresh_datagrid();

			this->txt_results->Text = "Données entrées avec succès";
		}



	}

	private: System::Void btn_supprimer_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			this->personnel->set_ID_Personne(this->get_selected_ID());

			this->personnel->supprimer();

			refresh_datagrid();

			this->txt_results->Text = "Données supprimées avec succès";

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
			this->personnel->set_ID_Personne(this->get_selected_ID());
			this->personnel->set_Nom(this->tb_nom->Text);
			this->personnel->set_Prenom(this->tb_prenom->Text);
			this->personnel->set_Date_Embauche(this->tb_date->Text); //Vérifier si c'est la bonne textBox.

			//this->personnel->set_Superieur_Hierarchique(conthis->tb_superieur->Text)); //Vérifier si c'est la bonne textBox.


			this->personnel->modifier();

			refresh_datagrid();

			this->txt_results->Text = "Données modifiées avec succès";
		}
		catch (Exception^ execept)
		{
			this->txt_results->Text = execept->Message;
			this->txt_results->Text += "\r\n";
			this->txt_results->Text += execept->StackTrace;
		}
	}

	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->pe->selectionnerToutesLesPersonnes("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}

	};
}