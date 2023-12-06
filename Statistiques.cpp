#include "Statistiques.h"

Statistiques::Statistiques()
{
    
}

String^ Statistiques::Calcul_Panier_Moyen()
{
    // Créer une variable qui va contenir le résultat.
    // Mettre les prix TTC totaux de toutes les commandes dans un tableau.
    // Parcourir le tableau et additionner chaque prix TTC avec le résultat.
    // Retourner le résultat. 
}

String^ Statistiques::Calcul_Chiffre_Affaires()
{
    // Créer une variable qui va contenir le résultat.
    // Créer une variable qui va contenir le total HT.
    // Créer une variable qui va contenir le total TTC.
    // Mettre les prix HT totaux de toutes les commandes dans un tableau.
    // Mettre les prix TTC totaux de toutes les commandes dans un tableau.
    // Parcourir le tableau HT et additionner chaque prix HT avec le total HT.
    // Parcourir le tableau TTC et additionner chaque prix TTC avec le total TTC.
    // Le résultat doit contenir la différence entre le total TTC et le total HT.
    // Retourner le résultat.
}

String^ Statistiques::Produit_A_Commander()
{
    // Créer une variable qui va contenir le résultat.
    // Récupérer la liste des articles où la quantité est inférieure au seuil de réapprovisionnement.
    // Le résultat doit contenir tous les noms des articles de la liste séparés par des virgules/points virgules.
    // Retourner le résultat.   
}

String^ Statistiques::Calcul_Montant_Client(int^ id)
{
    // Créer une variable qui va contenir le résultat.
    // Récupérer la liste des commandes effectuées par le client dont l'ID est "id".
    // Mettre tous les prix TTC des commandes de ce client dans un tableau.
    // Parcourir le tableau et additionner chaque prix TTC au résultat.
    // Retoruner le résultat.              
}

String^ Statistiques::Articles_Plus_Vendus()
{
    // Créer une variable qui va contenir le résultat.
    // Utiliser la table qui fait la liaison entre les commandes et les articles contenus dans chaque commande.
    // Trier les articles par le nombre de fois que chacun apparaît dans la table dans l'ordre décroissant.
    // (Essayer d'intégrer la quantité de chaque article sur une même commande.)
    // Le résultat doit contenir le nom des dix premiers articles séparés par des virgules/points virgules.   
}

String^ Statistiques::Articles_Moins_Vendus()
{
    // Créer une variable qui va contenir le résultat.
    // Utiliser la table qui fait la liaison entre les commandes et les articles contenus dans chaque commande.
    // Trier les articles par le nombre de fois que chacun apparaît dans la table dans l'ordre croissant.
    // (Essayer d'intégrer la quantité de chaque article sur une même commande.)
    // Le résultat doit contenir le nom des dix premiers articles séparés par des virgules/points virgules.          
}

String^ Statistiques::Calcul_Valeur_Commerciale_Stock()
{
    // Créer une variable qui va contenir le résultat.
    // Mettre les prix TTC de tous les articles du stock dans un tableau.
    // Parcourir le tableau et additionner chaque prix TTC avec le résultat.
    // Retourner le résultat.                                                 
}

String^ Statistiques::Calcul_Valeur_Achat_Stock()
{
    // Créer une variable qui va contenir le résultat.
    // Mettre les prix HT de tous les articles du stock dans un tableau.
    // Parcourir le tableau et additionner chaque prix HT avec le résultat.
    // Retourner le résultat.                                             
}

String^ Statistiques::Simulation_Variations()
{
    
}
