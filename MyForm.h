#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"	
#include "MyForm5.h"

namespace ProjetPOOGroupe2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Description r�sum�e de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ b_personnel;
	private: System::Windows::Forms::Button^ b_client;
	protected:

	protected:







	private: System::Windows::Forms::Button^ b_commandes;
	private: System::Windows::Forms::Button^ b_stocks;


	private: System::Windows::Forms::Button^ b_statistiques;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->b_personnel = (gcnew System::Windows::Forms::Button());
			this->b_client = (gcnew System::Windows::Forms::Button());
			this->b_commandes = (gcnew System::Windows::Forms::Button());
			this->b_stocks = (gcnew System::Windows::Forms::Button());
			this->b_statistiques = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// b_personnel
			// 
			this->b_personnel->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->b_personnel->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->b_personnel->Location = System::Drawing::Point(45, 93);
			this->b_personnel->Name = L"b_personnel";
			this->b_personnel->Size = System::Drawing::Size(176, 69);
			this->b_personnel->TabIndex = 6;
			this->b_personnel->Text = L"PERSONNEL";
			this->b_personnel->UseVisualStyleBackColor = false;
			this->b_personnel->Click += gcnew System::EventHandler(this, &MyForm::b_personnel_Click);
			// 
			// b_client
			// 
			this->b_client->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->b_client->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->b_client->Location = System::Drawing::Point(277, 93);
			this->b_client->Name = L"b_client";
			this->b_client->Size = System::Drawing::Size(176, 69);
			this->b_client->TabIndex = 7;
			this->b_client->Text = L"CLIENT";
			this->b_client->UseVisualStyleBackColor = false;
			this->b_client->Click += gcnew System::EventHandler(this, &MyForm::b_client_Click);
			// 
			// b_commandes
			// 
			this->b_commandes->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->b_commandes->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->b_commandes->Location = System::Drawing::Point(277, 203);
			this->b_commandes->Name = L"b_commandes";
			this->b_commandes->Size = System::Drawing::Size(176, 69);
			this->b_commandes->TabIndex = 8;
			this->b_commandes->Text = L"COMMANDES";
			this->b_commandes->UseVisualStyleBackColor = false;
			this->b_commandes->Click += gcnew System::EventHandler(this, &MyForm::b_commandes_Click);
			// 
			// b_stocks
			// 
			this->b_stocks->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->b_stocks->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->b_stocks->Location = System::Drawing::Point(45, 203);
			this->b_stocks->Name = L"b_stocks";
			this->b_stocks->Size = System::Drawing::Size(176, 69);
			this->b_stocks->TabIndex = 9;
			this->b_stocks->Text = L"STOCK";
			this->b_stocks->UseVisualStyleBackColor = false;
			this->b_stocks->Click += gcnew System::EventHandler(this, &MyForm::b_stocks_Click);
			// 
			// b_statistiques
			// 
			this->b_statistiques->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->b_statistiques->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->b_statistiques->Location = System::Drawing::Point(163, 300);
			this->b_statistiques->Name = L"b_statistiques";
			this->b_statistiques->Size = System::Drawing::Size(176, 69);
			this->b_statistiques->TabIndex = 10;
			this->b_statistiques->Text = L"STATISTIQUES";
			this->b_statistiques->UseVisualStyleBackColor = false;
			this->b_statistiques->Click += gcnew System::EventHandler(this, &MyForm::b_statistiques_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(499, 439);
			this->Controls->Add(this->b_statistiques);
			this->Controls->Add(this->b_stocks);
			this->Controls->Add(this->b_commandes);
			this->Controls->Add(this->b_client);
			this->Controls->Add(this->b_personnel);
			this->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"MyForm";
			this->Text = L"Accueil";
			this->ResumeLayout(false);

		}


#pragma endregion

	
	private: System::Void b_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ f1 = gcnew MyForm1();
		f1->Show();
	}

	private: System::Void b_client_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm2^ f2 = gcnew MyForm2();	   
		f2->Show();
	}

	private: System::Void b_commandes_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm3^ f3 = gcnew MyForm3();
		f3->Show();
	}

	private: System::Void b_stocks_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm4^ f4 = gcnew MyForm4();
		f4->Show();
	}

	private: System::Void b_statistiques_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm5^ f5 = gcnew MyForm5();
		f5->Show();
	}
};
}


