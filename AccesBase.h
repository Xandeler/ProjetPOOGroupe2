#pragma once

namespace AB
{
	ref class AccesBase
	{
	public:
		AccesBase(void);
		System::Data::DataSet^ getRows(System::String^, System::String^);
		void actionRows(System::String^);
		void set_oDs(System::Data::DataSet^ ods);
		System::Data::DataSet^ get_oDs();

	protected:
		System::String^ sSql;
		System::String^ sCnx;
		System::Data::SqlClient::SqlConnection^ connection;
		System::Data::SqlClient::SqlCommand^ command;
		System::Data::SqlClient::SqlDataAdapter^ dataAdapter;
		System::Data::DataSet^ oDs;
	};
}
