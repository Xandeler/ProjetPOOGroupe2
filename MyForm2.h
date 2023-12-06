﻿#pragma once
#include <cstdlib>
#include "ServiceClient.h"

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

	private: System::Windows::Forms::Button^ btn_load;
	private: System::Windows::Forms::Button^ btn_retour;
	private: System::Windows::Forms::Button^ btn_ajouter;
	private: System::Windows::Forms::Button^ btn_supprimer;
	private: System::Windows::Forms::Button^ btn_modifier;
	private: System::Windows::Forms::TextBox^ tb_nom;
	private: System::Windows::Forms::TextBox^ tb_prenom;
	private: NS_Comp_Svc::CL_SQLservices^ SQLservices = gcnew NS_Comp_Svc::CL_SQLservices();;
	private: System::Data::DataSet^ dataLoadedFromSQL;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_results;

	private: System::Windows::Forms::Label^ lbl_resultats;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;















	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
	private: System::ComponentModel::Container^ components;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		   /// le contenu de cette m�thode avec l'�diteur de code.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->btn_load = (gcnew System::Windows::Forms::Button());
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
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->AllowUserToAddRows = false;
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Location = System::Drawing::Point(13, 14);
			   this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->dataGridView1->MultiSelect = false;
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->ReadOnly = true;
			   this->dataGridView1->RowHeadersWidth = 51;
			   this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			   this->dataGridView1->Size = System::Drawing::Size(928, 220);
			   this->dataGridView1->TabIndex = 0;
			   // 
			   // btn_load
			   // 
			   this->btn_load->Location = System::Drawing::Point(22, 267);
			   this->btn_load->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->btn_load->Name = L"btn_load";
			   this->btn_load->Size = System::Drawing::Size(94, 176);
			   this->btn_load->TabIndex = 1;
			   this->btn_load->Text = L"Load DB";
			   this->btn_load->UseVisualStyleBackColor = true;
			   this->btn_load->Click += gcnew System::EventHandler(this, &MyForm2::btn_load_Click);
			   // 
			   // btn_retour
			   // 
			   this->btn_retour->Location = System::Drawing::Point(13, 544);
			   this->btn_retour->Name = L"btn_retour";
			   this->btn_retour->Size = System::Drawing::Size(112, 36);
			   this->btn_retour->TabIndex = 4;
			   this->btn_retour->Text = L"RETOUR";
			   this->btn_retour->UseVisualStyleBackColor = true;
			   this->btn_retour->Click += gcnew System::EventHandler(this, &MyForm2::btn_retour_Click);
			   // 
			   // btn_ajouter
			   // 
			   this->btn_ajouter->Location = System::Drawing::Point(124, 267);
			   this->btn_ajouter->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->btn_ajouter->Name = L"btn_ajouter";
			   this->btn_ajouter->Size = System::Drawing::Size(171, 55);
			   this->btn_ajouter->TabIndex = 2;
			   this->btn_ajouter->Text = L"AJOUTER UN CLIENT";
			   this->btn_ajouter->UseVisualStyleBackColor = true;
			   this->btn_ajouter->Click += gcnew System::EventHandler(this, &MyForm2::btn_ajouter_Click);
			   // 
			   // btn_supprimer
			   // 
			   this->btn_supprimer->Location = System::Drawing::Point(124, 388);
			   this->btn_supprimer->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->btn_supprimer->Name = L"btn_supprimer";
			   this->btn_supprimer->Size = System::Drawing::Size(171, 55);
			   this->btn_supprimer->TabIndex = 3;
			   this->btn_supprimer->Text = L"SUPPRIMER UN CLIENT";
			   this->btn_supprimer->UseVisualStyleBackColor = true;
			   this->btn_supprimer->Click += gcnew System::EventHandler(this, &MyForm2::btn_supprimer_Click);
			   // 
			   // btn_modifier
			   // 
			   this->btn_modifier->Location = System::Drawing::Point(124, 330);
			   this->btn_modifier->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->btn_modifier->Name = L"btn_modifier";
			   this->btn_modifier->Size = System::Drawing::Size(171, 55);
			   this->btn_modifier->TabIndex = 4;
			   this->btn_modifier->Text = L"MODIFIER UN CLIENT";
			   this->btn_modifier->UseVisualStyleBackColor = true;
			   this->btn_modifier->Click += gcnew System::EventHandler(this, &MyForm2::btn_modifier_Click);
			   // 
			   // tb_nom
			   // 
			   this->tb_nom->Location = System::Drawing::Point(557, 293);
			   this->tb_nom->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_nom->Name = L"tb_nom";
			   this->tb_nom->Size = System::Drawing::Size(284, 24);
			   this->tb_nom->TabIndex = 6;
			   // 
			   // tb_prenom
			   // 
			   this->tb_prenom->Location = System::Drawing::Point(557, 256);
			   this->tb_prenom->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tb_prenom->Name = L"tb_prenom";
			   this->tb_prenom->Size = System::Drawing::Size(284, 24);
			   this->tb_prenom->TabIndex = 7;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(489, 293);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(61, 18);
			   this->label1->TabIndex = 8;
			   this->label1->Text = L"Prenom";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(509, 259);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(41, 18);
			   this->label2->TabIndex = 9;
			   this->label2->Text = L"Nom";
			   // 
			   // txt_results
			   // 
			   this->txt_results->Location = System::Drawing::Point(544, 483);
			   this->txt_results->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			   this->txt_results->Multiline = true;
			   this->txt_results->Name = L"txt_results";
			   this->txt_results->ReadOnly = true;
			   this->txt_results->Size = System::Drawing::Size(397, 97);
			   this->txt_results->TabIndex = 10;
			   // 
			   // lbl_resultats
			   // 
			   this->lbl_resultats->AutoSize = true;
			   this->lbl_resultats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbl_resultats->Location = System::Drawing::Point(448, 483);
			   this->lbl_resultats->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lbl_resultats->Name = L"lbl_resultats";
			   this->lbl_resultats->Size = System::Drawing::Size(70, 18);
			   this->lbl_resultats->TabIndex = 14;
			   this->lbl_resultats->Text = L"Resultats";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(417, 327);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(133, 18);
			   this->label3->TabIndex = 15;
			   this->label3->Text = L"Date de Naissance";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(397, 365);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(153, 18);
			   this->label4->TabIndex = 16;
			   this->label4->Text = L"Date du premier achat";
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(556, 361);
			   this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(284, 24);
			   this->textBox1->TabIndex = 17;
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(557, 327);
			   this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(284, 24);
			   this->textBox2->TabIndex = 18;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(395, 444);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(155, 18);
			   this->label5->TabIndex = 19;
			   this->label5->Text = L"Adresse de facturation";
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(410, 406);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(140, 18);
			   this->label6->TabIndex = 20;
			   this->label6->Text = L"Adresse de livraison";
			   // 
			   // textBox3
			   // 
			   this->textBox3->Location = System::Drawing::Point(557, 441);
			   this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(284, 24);
			   this->textBox3->TabIndex = 21;
			   // 
			   // textBox4
			   // 
			   this->textBox4->Location = System::Drawing::Point(557, 400);
			   this->textBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->textBox4->Name = L"textBox4";
			   this->textBox4->Size = System::Drawing::Size(284, 24);
			   this->textBox4->TabIndex = 22;
			   // 
			   // MyForm2
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(982, 603);
			   this->Controls->Add(this->textBox4);
			   this->Controls->Add(this->textBox3);
			   this->Controls->Add(this->btn_load);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->textBox1);
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
			   this->MaximumSize = System::Drawing::Size(1000, 650);
			   this->MinimumSize = System::Drawing::Size(1000, 650);
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
		this->dataLoadedFromSQL = this->SQLservices->selectionnerToutesLesPersonnes("Liste_des_clients");
		this->dataGridView1->DataSource = this->dataLoadedFromSQL;
		this->dataGridView1->DataMember = "Liste_des_clients";

		this->txt_results->Text = "Données générées";
	}

	private: int get_selected_ID()
	{
		String^ selectedIDstring = this->dataGridView1->SelectedRows[0]->Cells["id"]->Value->ToString();
		return Convert::ToInt32(selectedIDstring);

	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		refresh_datagrid();
	}


	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			refresh_datagrid();
		}
		catch (Exception^ execept)
		{
			this->txt_results->Text = execept->Message;
			this->txt_results->Text += "\r\n";
			this->txt_results->Text += execept->StackTrace;
		}
	}

	private: System::Void btn_ajouter_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			this->SQLservices->ajouterUnePersonne(this->tb_nom->Text, this->tb_prenom->Text);

			refresh_datagrid();

			this->txt_results->Text = "Données entrées avec succès";
		}
		catch (Exception^ execept)
		{
			this->txt_results->Text = execept->Message;
			this->txt_results->Text += "\r\n";
			this->txt_results->Text += execept->StackTrace;

		}
	}

	private: System::Void btn_supprimer_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			this->SQLservices->effacerUnePersonne(get_selected_ID());

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
			this->SQLservices->modifierUnePersonne(get_selected_ID(), this->tb_nom->Text, this->tb_prenom->Text);

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

	};
}