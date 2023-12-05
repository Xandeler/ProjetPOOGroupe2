#pragma once

using namespace System;

ref class Personne
{
protected:
	int^ ID_Personne;
	String^ Nom;
	String^ Prenom;
	System::String^ tableName = "";        //Nom de la table dans la base de donnees au format [dataBase].[dbo].[tableName]

public:
	int^ get_ID_Personne();
	void set_ID_Personne(int^ ID);
	String^ get_Nom();
	void set_Nom(String^ nom);
	String^ get_Prenom();
	void set_Prenom(String^ prenom);
	Personne();
	Personne(int^ ID, String^ nom, String^ prenom);
};