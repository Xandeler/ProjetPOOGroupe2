#pragma once
#include "Stock.h"

namespace ProjetPOOGroupe2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description resume de MyForm1
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
		{
			InitializeComponent();

			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis?es.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_retour;
	private: System::Windows::Forms::DataGridView^ dataGridView_stock;
	private: System::Windows::Forms::Button^ button_modifier_article;
	private: System::Windows::Forms::Button^ button_supprimer_article;
	private: System::Windows::Forms::Button^ button_ajouter_article;
	private: System::Windows::Forms::Label^ label_nom_article;
	private: System::Windows::Forms::TextBox^ textBox_nom_article;
	private: System::Windows::Forms::TextBox^ textBox_seuil_reapprovisionnement_article;



	private: System::Windows::Forms::Label^ label_seuil_reapprovisionnement_article;
	private: System::Windows::Forms::TextBox^ textBox_prix_ht_article;



	private: System::Windows::Forms::Label^ label_prix_ht_article;
	private: System::Windows::Forms::TextBox^ textBox_taux_tva_article;


	private: System::Windows::Forms::Label^ label_taux_tva_article;
	private: System::Windows::Forms::TextBox^ textBox_seuil_reduction_article;


	private: System::Windows::Forms::Label^ label_seuil_reduction_article;
	private: System::Windows::Forms::TextBox^ textBox_quantite_article;

	private: System::Windows::Forms::Label^ label_quantite_article;



	private: System::Windows::Forms::Label^ label_stock;


	private: System::Windows::Forms::Button^ button_loadDB;

	private: NS_Stock::Stock^ stock;
	private: System::Data::DataSet^ dataset;

	protected:

	private:
		/// <summary>
		/// Variable necessaire au concepteur.
		/// </summary>
	private: System::ComponentModel::Container^ components;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// M?thode requise pour la prise en charge du concepteur - ne modifiez pas
		   /// le contenu de cette methode avec l'editeur de code.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->button_retour = (gcnew System::Windows::Forms::Button());
			   this->dataGridView_stock = (gcnew System::Windows::Forms::DataGridView());
			   this->button_modifier_article = (gcnew System::Windows::Forms::Button());
			   this->button_supprimer_article = (gcnew System::Windows::Forms::Button());
			   this->button_ajouter_article = (gcnew System::Windows::Forms::Button());
			   this->label_nom_article = (gcnew System::Windows::Forms::Label());
			   this->textBox_nom_article = (gcnew System::Windows::Forms::TextBox());
			   this->textBox_seuil_reapprovisionnement_article = (gcnew System::Windows::Forms::TextBox());
			   this->label_seuil_reapprovisionnement_article = (gcnew System::Windows::Forms::Label());
			   this->textBox_prix_ht_article = (gcnew System::Windows::Forms::TextBox());
			   this->label_prix_ht_article = (gcnew System::Windows::Forms::Label());
			   this->textBox_taux_tva_article = (gcnew System::Windows::Forms::TextBox());
			   this->label_taux_tva_article = (gcnew System::Windows::Forms::Label());
			   this->textBox_seuil_reduction_article = (gcnew System::Windows::Forms::TextBox());
			   this->label_seuil_reduction_article = (gcnew System::Windows::Forms::Label());
			   this->textBox_quantite_article = (gcnew System::Windows::Forms::TextBox());
			   this->label_quantite_article = (gcnew System::Windows::Forms::Label());
			   this->label_stock = (gcnew System::Windows::Forms::Label());
			   this->button_loadDB = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_stock))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // button_retour
			   // 
			   this->button_retour->Location = System::Drawing::Point(0, 501);
			   this->button_retour->Name = L"button_retour";
			   this->button_retour->Size = System::Drawing::Size(112, 36);
			   this->button_retour->TabIndex = 4;
			   this->button_retour->Text = L"RETOUR";
			   this->button_retour->UseVisualStyleBackColor = true;
			   this->button_retour->Click += gcnew System::EventHandler(this, &MyForm4::bouton_retour_click);
			   // 
			   // dataGridView_stock
			   // 
			   this->dataGridView_stock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView_stock->GridColor = System::Drawing::SystemColors::HighlightText;
			   this->dataGridView_stock->Location = System::Drawing::Point(179, 12);
			   this->dataGridView_stock->Name = L"dataGridView_stock";
			   this->dataGridView_stock->RowHeadersWidth = 51;
			   this->dataGridView_stock->RowTemplate->Height = 24;
			   this->dataGridView_stock->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			   this->dataGridView_stock->Size = System::Drawing::Size(713, 212);
			   this->dataGridView_stock->TabIndex = 5;
			   // 
			   // button_modifier_article
			   // 
			   this->button_modifier_article->Location = System::Drawing::Point(181, 433);
			   this->button_modifier_article->Name = L"button_modifier_article";
			   this->button_modifier_article->Size = System::Drawing::Size(147, 52);
			   this->button_modifier_article->TabIndex = 6;
			   this->button_modifier_article->Text = L"Modifier l\'article :";
			   this->button_modifier_article->UseVisualStyleBackColor = true;
			   this->button_modifier_article->Click += gcnew System::EventHandler(this, &MyForm4::bouton_modifier_article_click);
			   // 
			   // button_supprimer_article
			   // 
			   this->button_supprimer_article->Location = System::Drawing::Point(181, 346);
			   this->button_supprimer_article->Name = L"button_supprimer_article";
			   this->button_supprimer_article->Size = System::Drawing::Size(147, 52);
			   this->button_supprimer_article->TabIndex = 7;
			   this->button_supprimer_article->Text = L"Supprimer l\'article :";
			   this->button_supprimer_article->UseVisualStyleBackColor = true;
			   this->button_supprimer_article->Click += gcnew System::EventHandler(this, &MyForm4::bouton_supprimer_article_click);
			   // 
			   // button_ajouter_article
			   // 
			   this->button_ajouter_article->Location = System::Drawing::Point(181, 259);
			   this->button_ajouter_article->Name = L"button_ajouter_article";
			   this->button_ajouter_article->Size = System::Drawing::Size(147, 52);
			   this->button_ajouter_article->TabIndex = 8;
			   this->button_ajouter_article->Text = L"Ajouter un article :";
			   this->button_ajouter_article->UseVisualStyleBackColor = true;
			   this->button_ajouter_article->Click += gcnew System::EventHandler(this, &MyForm4::bouton_ajouter_article_click);
			   // 
			   // label_nom_article
			   // 
			   this->label_nom_article->AutoSize = true;
			   this->label_nom_article->Location = System::Drawing::Point(366, 259);
			   this->label_nom_article->Name = L"label_nom_article";
			   this->label_nom_article->Size = System::Drawing::Size(106, 16);
			   this->label_nom_article->TabIndex = 9;
			   this->label_nom_article->Text = L"Nom de l\'article :";
			   // 
			   // textBox_nom_article
			   // 
			   this->textBox_nom_article->Location = System::Drawing::Point(369, 288);
			   this->textBox_nom_article->Name = L"textBox_nom_article";
			   this->textBox_nom_article->Size = System::Drawing::Size(100, 22);
			   this->textBox_nom_article->TabIndex = 10;
			   // 
			   // textBox_seuil_reapprovisionnement_article
			   // 
			   this->textBox_seuil_reapprovisionnement_article->Location = System::Drawing::Point(369, 376);
			   this->textBox_seuil_reapprovisionnement_article->Name = L"textBox_seuil_reapprovisionnement_article";
			   this->textBox_seuil_reapprovisionnement_article->Size = System::Drawing::Size(100, 22);
			   this->textBox_seuil_reapprovisionnement_article->TabIndex = 12;
			   // 
			   // label_seuil_reapprovisionnement_article
			   // 
			   this->label_seuil_reapprovisionnement_article->AutoSize = true;
			   this->label_seuil_reapprovisionnement_article->Location = System::Drawing::Point(366, 347);
			   this->label_seuil_reapprovisionnement_article->Name = L"label_seuil_reapprovisionnement_article";
			   this->label_seuil_reapprovisionnement_article->Size = System::Drawing::Size(256, 16);
			   this->label_seuil_reapprovisionnement_article->TabIndex = 11;
			   this->label_seuil_reapprovisionnement_article->Text = L"Seuil de réapprovisionnement de l\'article :";
			   // 
			   // textBox_prix_ht_article
			   // 
			   this->textBox_prix_ht_article->Location = System::Drawing::Point(369, 463);
			   this->textBox_prix_ht_article->Name = L"textBox_prix_ht_article";
			   this->textBox_prix_ht_article->Size = System::Drawing::Size(100, 22);
			   this->textBox_prix_ht_article->TabIndex = 14;
			   // 
			   // label_prix_ht_article
			   // 
			   this->label_prix_ht_article->AutoSize = true;
			   this->label_prix_ht_article->Location = System::Drawing::Point(366, 434);
			   this->label_prix_ht_article->Name = L"label_prix_ht_article";
			   this->label_prix_ht_article->Size = System::Drawing::Size(121, 16);
			   this->label_prix_ht_article->TabIndex = 13;
			   this->label_prix_ht_article->Text = L"Prix HT de l\'article :";
			   // 
			   // textBox_taux_tva_article
			   // 
			   this->textBox_taux_tva_article->Location = System::Drawing::Point(663, 463);
			   this->textBox_taux_tva_article->Name = L"textBox_taux_tva_article";
			   this->textBox_taux_tva_article->Size = System::Drawing::Size(100, 22);
			   this->textBox_taux_tva_article->TabIndex = 20;
			   // 
			   // label_taux_tva_article
			   // 
			   this->label_taux_tva_article->AutoSize = true;
			   this->label_taux_tva_article->Location = System::Drawing::Point(660, 434);
			   this->label_taux_tva_article->Name = L"label_taux_tva_article";
			   this->label_taux_tva_article->Size = System::Drawing::Size(156, 16);
			   this->label_taux_tva_article->TabIndex = 19;
			   this->label_taux_tva_article->Text = L"Taux de TVA de l\'article :";
			   // 
			   // textBox_seuil_reduction_article
			   // 
			   this->textBox_seuil_reduction_article->Location = System::Drawing::Point(663, 376);
			   this->textBox_seuil_reduction_article->Name = L"textBox_seuil_reduction_article";
			   this->textBox_seuil_reduction_article->Size = System::Drawing::Size(100, 22);
			   this->textBox_seuil_reduction_article->TabIndex = 18;
			   // 
			   // label_seuil_reduction_article
			   // 
			   this->label_seuil_reduction_article->AutoSize = true;
			   this->label_seuil_reduction_article->Location = System::Drawing::Point(660, 347);
			   this->label_seuil_reduction_article->Name = L"label_seuil_reduction_article";
			   this->label_seuil_reduction_article->Size = System::Drawing::Size(184, 16);
			   this->label_seuil_reduction_article->TabIndex = 17;
			   this->label_seuil_reduction_article->Text = L"Seuil de réduction de l\'article :";
			   // 
			   // textBox_quantite_article
			   // 
			   this->textBox_quantite_article->Location = System::Drawing::Point(663, 288);
			   this->textBox_quantite_article->Name = L"textBox_quantite_article";
			   this->textBox_quantite_article->Size = System::Drawing::Size(100, 22);
			   this->textBox_quantite_article->TabIndex = 16;
			   // 
			   // label_quantite_article
			   // 
			   this->label_quantite_article->AutoSize = true;
			   this->label_quantite_article->Location = System::Drawing::Point(660, 259);
			   this->label_quantite_article->Name = L"label_quantite_article";
			   this->label_quantite_article->Size = System::Drawing::Size(126, 16);
			   this->label_quantite_article->TabIndex = 15;
			   this->label_quantite_article->Text = L"Quantité de l\'article :";
			   // 
			   // label_stock
			   // 
			   this->label_stock->AutoSize = true;
			   this->label_stock->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->label_stock->Location = System::Drawing::Point(12, 9);
			   this->label_stock->Name = L"label_stock";
			   this->label_stock->Size = System::Drawing::Size(54, 18);
			   this->label_stock->TabIndex = 21;
			   this->label_stock->Text = L"STOCK";
			   // 
			   // button_loadDB
			   // 
			   this->button_loadDB->Location = System::Drawing::Point(22, 52);
			   this->button_loadDB->Name = L"button_loadDB";
			   this->button_loadDB->Size = System::Drawing::Size(136, 145);
			   this->button_loadDB->TabIndex = 22;
			   this->button_loadDB->Text = L"Load DB";
			   this->button_loadDB->UseVisualStyleBackColor = true;
			   this->button_loadDB->Click += gcnew System::EventHandler(this, &MyForm4::bouton_load_click);
			   // 
			   // MyForm4
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(904, 538);
			   this->Controls->Add(this->button_loadDB);
			   this->Controls->Add(this->label_stock);
			   this->Controls->Add(this->textBox_taux_tva_article);
			   this->Controls->Add(this->label_taux_tva_article);
			   this->Controls->Add(this->textBox_seuil_reduction_article);
			   this->Controls->Add(this->label_seuil_reduction_article);
			   this->Controls->Add(this->textBox_quantite_article);
			   this->Controls->Add(this->label_quantite_article);
			   this->Controls->Add(this->textBox_prix_ht_article);
			   this->Controls->Add(this->label_prix_ht_article);
			   this->Controls->Add(this->textBox_seuil_reapprovisionnement_article);
			   this->Controls->Add(this->label_seuil_reapprovisionnement_article);
			   this->Controls->Add(this->textBox_nom_article);
			   this->Controls->Add(this->label_nom_article);
			   this->Controls->Add(this->button_ajouter_article);
			   this->Controls->Add(this->button_supprimer_article);
			   this->Controls->Add(this->button_modifier_article);
			   this->Controls->Add(this->dataGridView_stock);
			   this->Controls->Add(this->button_retour);
			   this->Name = L"MyForm4";
			   this->Text = L"Gestion du stock";
			   this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_stock))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->stock = gcnew NS_Stock::Stock();
	}

	private: void affichage()
	{
		this->dataGridView_stock->Refresh();

		this->dataset = this->stock->afficher("Liste_Article");
		this->dataGridView_stock->DataSource = this->dataset;
		this->dataGridView_stock->DataMember = "Liste_Article";
	}

	private: int^ get_selected_id()
	{
		int^ id_article = Convert::ToInt32(this->dataGridView_stock->SelectedRows[0]->Cells[0]->Value);
		return id_article;
	}

	private: String^ get_selected_nom()
	{
		String^ nom_article = Convert::ToString(this->dataGridView_stock->SelectedRows[0]->Cells[1]->Value);
		return nom_article;
	}

	private: int^ get_selected_quantite()
	{
		int^ quantite_article = Convert::ToInt32(this->dataGridView_stock->SelectedRows[0]->Cells[2]->Value);
		return quantite_article;
	}

	private: float^ get_selected_prixht()
	{
		float^ prixht_article = Convert::ToSingle(this->dataGridView_stock->SelectedRows[0]->Cells[3]->Value);
		return prixht_article;
	}

	private: int^ get_selected_reapprovisionnement()
	{
		int^ reapprovisionnement_article = Convert::ToInt32(this->dataGridView_stock->SelectedRows[0]->Cells[4]->Value);
		return reapprovisionnement_article;
	}

	private: int^ get_selected_reduction()
	{
		int^ reduction_article = Convert::ToInt32(this->dataGridView_stock->SelectedRows[0]->Cells[5]->Value);
		return reduction_article;
	}

	private: System::Void bouton_load_click(System::Object^ sender, System::EventArgs^ e)
	{
		this->affichage();
	}

	private: System::Void bouton_retour_click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
	}

	private: System::Void bouton_ajouter_article_click(System::Object^ sender, System::EventArgs^ e)
	{
		int^ id_article = 1;
		String^ nom_article = this->textBox_nom_article->Text;
		int^ quantite_article = Convert::ToInt32(this->textBox_quantite_article->Text);
		float^ prixHT_article = Convert::ToSingle(this->textBox_prix_ht_article->Text);
		float^ tauxTVA_article = Convert::ToSingle(this->textBox_taux_tva_article->Text);
		int^ seuil_reapprovisionnement_article = Convert::ToInt32(this->textBox_seuil_reapprovisionnement_article->Text);
		int^ seuil_reduction_article = Convert::ToInt32(this->textBox_seuil_reduction_article->Text);

		this->stock->ajouter(id_article, nom_article, quantite_article, prixHT_article, tauxTVA_article, seuil_reapprovisionnement_article, seuil_reduction_article);

		this->affichage();
	}

	private: System::Void bouton_supprimer_article_click(System::Object^ sender, System::EventArgs^ e)
	{
		int^ id_article = this->get_selected_id();
		String^ nom_article = this->get_selected_nom();
		int^ quantite_article = this->get_selected_quantite();
		float^ prixHT_article = this->get_selected_prixht();
		float^ tauxTVA_article = 1.2f;
		int^ seuil_reapprovisionnement_article = this->get_selected_reapprovisionnement();
		int^ seuil_reduction_article = this->get_selected_reduction();

		this->stock->supprimer(id_article, nom_article, quantite_article, prixHT_article, tauxTVA_article, seuil_reapprovisionnement_article, seuil_reduction_article);

		this->affichage();
	}

	private: System::Void bouton_modifier_article_click(System::Object^ sender, System::EventArgs^ e)
	{
		int^ id_article = this->get_selected_id();
		String^ nom_article = this->get_selected_nom();
		int^ quantite_article = this->get_selected_quantite();
		float^ prixHT_article = this->get_selected_prixht();
		float^ tauxTVA_article = Convert::ToSingle(this->textBox_taux_tva_article->Text);
		int^ seuil_reapprovisionnement_article = this->get_selected_reapprovisionnement();
		int^ seuil_reduction_article = this->get_selected_reduction();

		int^ id_article_m = 1;
		String^ nom_article_m = this->textBox_nom_article->Text;
		int^ quantite_article_m = Convert::ToInt32(this->textBox_quantite_article->Text);
		float^ prixHT_article_m = Convert::ToSingle(this->textBox_prix_ht_article->Text);
		float^ tauxTVA_article_m = Convert::ToSingle(this->textBox_taux_tva_article->Text);
		int^ seuil_reapprovisionnement_article_m = Convert::ToInt32(this->textBox_seuil_reapprovisionnement_article->Text);
		int^ seuil_reduction_article_m = Convert::ToInt32(this->textBox_seuil_reduction_article->Text);

		this->stock->modifier(id_article, nom_article, quantite_article, prixHT_article, tauxTVA_article, seuil_reapprovisionnement_article, seuil_reduction_article, id_article_m, nom_article_m, quantite_article_m, prixHT_article_m, tauxTVA_article_m, seuil_reapprovisionnement_article_m, seuil_reduction_article_m);

		this->affichage();
	}
	};
}
