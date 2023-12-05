#include "StockageCommandes.h"

StockageCommandes::StockageCommandes()
{
   
}

void StockageCommandes::ajouter()
{
    
}

void StockageCommandes::supprimer()
{
   
}

void StockageCommandes::modifier()
{
    
}

void StockageCommandes::afficher()
{
    
}

void StockageCommandes::imprimer()
{
    String^ chemin_acces = "";

    StreamWriter^ ecriture = gcnew StreamWriter(chemin_acces);

    ecriture->WriteLine("Ce que l'on souhaite ecrire.");
}
