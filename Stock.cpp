#include "Stock.h"

Stock::Stock()
{
    
}

void Stock::set_Article(String^ nom, int^ quantite, double^ prix_ht, double^ taux_tva, int^ seuil_reapprovisionnement, int^ seuil_reduction)
{
    this->article->set_Nom(nom);
    this->article->set_Quantite(quantite);
    this->article->set_Prix_HT(prix_ht);
    this->article->set_Taux_TVA(taux_tva);
    this->article->set_Prix_TTC();
    this->article->set_Seuil_Reapprovisionnement(seuil_reapprovisionnement);
    this->article->set_Seuil_Reduction(seuil_reduction);
}

Article^ Stock::get_Article()
{
    return this->article;
}

void Stock::ajouter()
{
    
}

void Stock::supprimer()
{
    
}

void Stock::modifier()
{
    
}

void Stock::afficher()
{
    
}
