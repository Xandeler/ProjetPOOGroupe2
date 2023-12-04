#include "AccesBase.h"
#include "nommachine.h"

AccesBase::AccesBase(void)
{

    ////FAIRE UN FICHIER DE CONFIGURATION POUR LA CONNEXION////
    this->sCnx = "Data Source=PC-PORTABLE-LEO;Initial Catalog=BDP6;Persist Security Info=True;User ID=NOOOOOOOOOO;Password=NOOOOOOOOOO";

    this->sSql = "Rien";

    this->connection = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
    this->command = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->connection);
    this->dataAdapter = gcnew System::Data::SqlClient::SqlDataAdapter();
    this->oDs = gcnew System::Data::DataSet();

    this->command->CommandType = System::Data::CommandType::Text;
}
System::Data::DataSet^ AccesBase::getRows(System::String^ sSql, System::String^ sDataTableName)
{
    this->oDs->Clear();
    this->sSql = sSql;
    this->command->CommandText = this->sSql;
    this->dataAdapter->SelectCommand = this->command;
    this->dataAdapter->Fill(this->oDs, sDataTableName);

    return this->oDs;
}
void AccesBase::actionRows(System::String^ sSql)
{
    this->sSql = sSql;
    this->command->CommandText = this->sSql;
    this->dataAdapter->SelectCommand = this->command;
    this->connection->Open();
    this->command->ExecuteNonQuery();
    this->connection->Close();
}