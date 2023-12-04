#pragma once
ref class AccesBase
{
public:
    AccesBase();
    System::Data::DataSet^ getRows(System::String^, System::String^);
    void actionRows(System::String^);

protected:
    System::String^ sSql;
    System::String^ sCnx;
    System::Data::SqlClient::SqlConnection^ connection;
    System::Data::SqlClient::SqlCommand^ command;
    System::Data::SqlClient::SqlDataAdapter^ dataAdapter;
    System::Data::DataSet^ oDs;
};

