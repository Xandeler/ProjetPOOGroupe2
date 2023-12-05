#pragma once

using namespace System;

ref class Ville
{
private:
	int^ ID_Ville;
	String^ Nom;

public:
	Ville();
	Ville(int^ id, String^ nom);
	void ajouter();
	void supprimer(int^id);
	int^ get_ID_Ville();
	void set_ID_Ville(int^ id);
	String^ get_Nom();
	void set_Nom(String^ nom);
};