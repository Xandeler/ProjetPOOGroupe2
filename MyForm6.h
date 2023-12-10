#pragma once
#include "servicelog.h"
#include "AccesBase.h"
#include "log.h"

namespace ProjetPOOGroupe2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		MyForm6(void)
		{
			InitializeComponent();
		}

	protected:

		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ datagridview_log;

	private: System::Windows::Forms::Button^ btn_retour;
	private: System::ComponentModel::Container ^components;
	private: servL::servicelog^ service_log = gcnew servL::servicelog();
	private: L::log^ Log = gcnew L::log();
	private: AB::AccesBase^ Acces_Base = gcnew AB::AccesBase();
	private: System::Windows::Forms::Label^ label_stock;
	private: System::Data::DataSet^ oDs;


#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm6::typeid));
			this->datagridview_log = (gcnew System::Windows::Forms::DataGridView());
			this->btn_retour = (gcnew System::Windows::Forms::Button());
			this->label_stock = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datagridview_log))->BeginInit();
			this->SuspendLayout();
			// 
			// datagridview_log
			// 
			this->datagridview_log->AllowUserToAddRows = false;
			this->datagridview_log->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->datagridview_log->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->datagridview_log->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datagridview_log->Location = System::Drawing::Point(13, 32);
			this->datagridview_log->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->datagridview_log->MultiSelect = false;
			this->datagridview_log->Name = L"datagridview_log";
			this->datagridview_log->ReadOnly = true;
			this->datagridview_log->RowHeadersWidth = 51;
			this->datagridview_log->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->datagridview_log->Size = System::Drawing::Size(317, 617);
			this->datagridview_log->TabIndex = 1;
			// 
			// btn_retour
			// 
			this->btn_retour->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_retour->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_retour->Location = System::Drawing::Point(337, 613);
			this->btn_retour->Name = L"btn_retour";
			this->btn_retour->Size = System::Drawing::Size(112, 36);
			this->btn_retour->TabIndex = 5;
			this->btn_retour->Text = L"RETOUR";
			this->btn_retour->UseVisualStyleBackColor = false;
			this->btn_retour->Click += gcnew System::EventHandler(this, &MyForm6::btn_retour_Click);
			// 
			// label_stock
			// 
			this->label_stock->AutoSize = true;
			this->label_stock->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label_stock->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_stock->Location = System::Drawing::Point(12, 9);
			this->label_stock->Name = L"label_stock";
			this->label_stock->Size = System::Drawing::Size(36, 18);
			this->label_stock->TabIndex = 35;
			this->label_stock->Text = L"LOG";
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(455, 654);
			this->Controls->Add(this->label_stock);
			this->Controls->Add(this->btn_retour);
			this->Controls->Add(this->datagridview_log);
			this->Name = L"MyForm6";
			this->Text = L"Log";
			this->Load += gcnew System::EventHandler(this, &MyForm6::MyForm6_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datagridview_log))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_retour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}

	private: System::Void MyForm6_Load(System::Object^ sender, System::EventArgs^ e) {
		this->datagridview_log->Refresh();
		this->oDs = this->service_log->afficherlogSERVICE(this->Log, "Log");
		this->datagridview_log->DataSource = this->oDs;
		this->datagridview_log->DataMember = "Log";
	}

};
}
