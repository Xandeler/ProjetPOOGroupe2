#include "log.h"



L::log::log()
{
}

String^ L::log::accespersonnel()
{
	String^ requete = "INSERT INTO Log(DateHeure, Action) ";
	requete += "VALUES(CONVERT(VARCHAR(19), GETDATE(), 120), 'Gestion Personnel');";

	return requete;
}

String^ L::log::accesclient()
{
	String^ requete = "INSERT INTO Log(DateHeure, Action) ";
	requete += "VALUES(CONVERT(VARCHAR(19), GETDATE(), 120), 'Gestion Client');";

	return requete;
}

String^ L::log::accescommande()
{
	String^ requete = "INSERT INTO Log(DateHeure, Action) ";
	requete += "VALUES(CONVERT(VARCHAR(19), GETDATE(), 120), 'Gestion Commande');";

	return requete;
}

String^ L::log::accesstock()
{
	String^ requete = "INSERT INTO Log(DateHeure, Action) ";
	requete += "VALUES(CONVERT(VARCHAR(19), GETDATE(), 120), 'Gestion Stock');";

	return requete;
}

String^ L::log::accesstatistiques()
{
	String^ requete = "INSERT INTO Log(DateHeure, Action) ";
	requete += "VALUES(CONVERT(VARCHAR(19), GETDATE(), 120), 'Acces Statistiques');";

	return requete;
}

String^ L::log::acceslog()
{
	String^ requete = "INSERT INTO Log(DateHeure, Action) ";
	requete += "VALUES(CONVERT(VARCHAR(19), GETDATE(), 120), 'Acces Log');";

	return requete;
}

String^ L::log::afficherlog()
{
	String^ requete = "SELECT * FROM Log ";
	requete += "ORDER BY DateHeure DESC";

	return requete;
}