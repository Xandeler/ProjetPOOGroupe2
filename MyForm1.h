#pragma once
#include <cstdlib>

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
			this->btn_retour->Click += gcnew System::EventHandler(this, &MyForm1::btn_retour_Click); // Permet de lier le bouton � la fonction

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
	private: System::Data::DataSet^ dataLoadedFromSQL;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_results;

	private: System::Windows::Forms::Label^ lbl_resultats;

	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
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
			this->txt_results = (gcnew System::Windows::Forms::TextBox());
			this->lbl_resultats = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(13, 18);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(733, 220);
			this->dataGridView1->TabIndex = 0;
			// 
			// btn_ajouter
			// 
			this->btn_ajouter->Location = System::Drawing::Point(144, 267);
			this->btn_ajouter->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_ajouter->Name = L"btn_ajouter";
			this->btn_ajouter->Size = System::Drawing::Size(112, 55);
			this->btn_ajouter->TabIndex = 2;
			this->btn_ajouter->Text = L"AJOUTER";
			this->btn_ajouter->UseVisualStyleBackColor = true;
			this->btn_ajouter->Click += gcnew System::EventHandler(this, &MyForm1::btn_ajouter_Click);
			// 
			// btn_supprimer
			// 
			this->btn_supprimer->Location = System::Drawing::Point(144, 401);
			this->btn_supprimer->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_supprimer->Name = L"btn_supprimer";
			this->btn_supprimer->Size = System::Drawing::Size(112, 55);
			this->btn_supprimer->TabIndex = 3;
			this->btn_supprimer->Text = L"SUPPRIMER";
			this->btn_supprimer->UseVisualStyleBackColor = true;
			this->btn_supprimer->Click += gcnew System::EventHandler(this, &MyForm1::btn_supprimer_Click);
			// 
			// btn_modifier
			// 
			this->btn_modifier->Location = System::Drawing::Point(144, 335);
			this->btn_modifier->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_modifier->Name = L"btn_modifier";
			this->btn_modifier->Size = System::Drawing::Size(112, 55);
			this->btn_modifier->TabIndex = 4;
			this->btn_modifier->Text = L"MODIFIER";
			this->btn_modifier->UseVisualStyleBackColor = true;
			this->btn_modifier->Click += gcnew System::EventHandler(this, &MyForm1::btn_modifier_Click);
			// 
			// tb_nom
			// 
			this->tb_nom->Location = System::Drawing::Point(350, 312);
			this->tb_nom->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tb_nom->Name = L"tb_nom";
			this->tb_nom->Size = System::Drawing::Size(397, 24);
			this->tb_nom->TabIndex = 6;
			// 
			// tb_prenom
			// 
			this->tb_prenom->Location = System::Drawing::Point(350, 266);
			this->tb_prenom->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tb_prenom->Name = L"tb_prenom";
			this->tb_prenom->Size = System::Drawing::Size(397, 24);
			this->tb_prenom->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(295, 315);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 18);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(278, 269);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 18);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Prenom";
			// 
			// btn_retour
			// 
			this->btn_retour->Location = System::Drawing::Point(13, 420);
			this->btn_retour->Name = L"btn_retour";
			this->btn_retour->Size = System::Drawing::Size(112, 36);
			this->btn_retour->TabIndex = 4;
			this->btn_retour->Text = L"RETOUR";
			this->btn_retour->UseVisualStyleBackColor = true;
			this->btn_retour->Click += gcnew System::EventHandler(this, &MyForm1::btn_retour_Click);
			// 
			// txt_results
			// 
			this->txt_results->Location = System::Drawing::Point(350, 359);
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
			this->lbl_resultats->Font = (gcnew System::Drawing::Font(L"Inter", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_resultats->Location = System::Drawing::Point(268, 362);
			this->lbl_resultats->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_resultats->Name = L"lbl_resultats";
			this->lbl_resultats->Size = System::Drawing::Size(75, 19);
			this->lbl_resultats->TabIndex = 14;
			this->lbl_resultats->Text = L"Resultats";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(759, 486);
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
			this->MaximumSize = System::Drawing::Size(777, 533);
			this->MinimumSize = System::Drawing::Size(777, 533);
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
		// Runs when the form loads
	private: void refresh_datagrid()
	{
		this->dataGridView1->Refresh();
		this->dataGridView1->DataSource = this->dataLoadedFromSQL;
		this->dataGridView1->DataMember = "dataTable";

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

	private: System::Void btn_supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{

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