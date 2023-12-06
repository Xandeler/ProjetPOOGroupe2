#include "Statistiques.h"

Statistiques::Statistiques()
{
    
}

String^ Statistiques::Calcul_Panier_Moyen()
{
    // Cr�er une variable qui va contenir le r�sultat.
    // Mettre les prix TTC totaux de toutes les commandes dans un tableau.
    // Parcourir le tableau et additionner chaque prix TTC avec le r�sultat.
    // Retourner le r�sultat. 
}

String^ Statistiques::Calcul_Chiffre_Affaires()
{
    // Cr�er une variable qui va contenir le r�sultat.
    // Cr�er une variable qui va contenir le total HT.
    // Cr�er une variable qui va contenir le total TTC.
    // Mettre les prix HT totaux de toutes les commandes dans un tableau.
    // Mettre les prix TTC totaux de toutes les commandes dans un tableau.
    // Parcourir le tableau HT et additionner chaque prix HT avec le total HT.
    // Parcourir le tableau TTC et additionner chaque prix TTC avec le total TTC.
    // Le r�sultat doit contenir la diff�rence entre le total TTC et le total HT.
    // Retourner le r�sultat.
}

String^ Statistiques::Produit_A_Commander()
{
    // Cr�er une variable qui va contenir le r�sultat.
    // R�cup�rer la liste des articles o� la quantit� est inf�rieure au seuil de r�approvisionnement.
    // Le r�sultat doit contenir tous les noms des articles de la liste s�par�s par des virgules/points virgules.
    // Retourner le r�sultat.   
}

String^ Statistiques::Calcul_Montant_Client(int^ id)
{
    // Cr�er une variable qui va contenir le r�sultat.
    // R�cup�rer la liste des commandes effectu�es par le client dont l'ID est "id".
    // Mettre tous les prix TTC des commandes de ce client dans un tableau.
    // Parcourir le tableau et additionner chaque prix TTC au r�sultat.
    // Retoruner le r�sultat.              
}

String^ Statistiques::Articles_Plus_Vendus()
{
    // Cr�er une variable qui va contenir le r�sultat.
    // Utiliser la table qui fait la liaison entre les commandes et les articles contenus dans chaque commande.
    // Trier les articles par le nombre de fois que chacun appara�t dans la table dans l'ordre d�croissant.
    // (Essayer d'int�grer la quantit� de chaque article sur une m�me commande.)
    // Le r�sultat doit contenir le nom des dix premiers articles s�par�s par des virgules/points virgules.   
}

String^ Statistiques::Articles_Moins_Vendus()
{
    // Cr�er une variable qui va contenir le r�sultat.
    // Utiliser la table qui fait la liaison entre les commandes et les articles contenus dans chaque commande.
    // Trier les articles par le nombre de fois que chacun appara�t dans la table dans l'ordre croissant.
    // (Essayer d'int�grer la quantit� de chaque article sur une m�me commande.)
    // Le r�sultat doit contenir le nom des dix premiers articles s�par�s par des virgules/points virgules.          
}

String^ Statistiques::Calcul_Valeur_Commerciale_Stock()
{
    // Cr�er une variable qui va contenir le r�sultat.
    // Mettre les prix TTC de tous les articles du stock dans un tableau.
    // Parcourir le tableau et additionner chaque prix TTC avec le r�sultat.
    // Retourner le r�sultat.                                                 
}

String^ Statistiques::Calcul_Valeur_Achat_Stock()
{
    // Cr�er une variable qui va contenir le r�sultat.
    // Mettre les prix HT de tous les articles du stock dans un tableau.
    // Parcourir le tableau et additionner chaque prix HT avec le r�sultat.
    // Retourner le r�sultat.                                             
}

String^ Statistiques::Simulation_Variations()
{
    
}
