/*
  INF3105 - Structures de données et algorithmes
  UQAM / Département d'informatique
  
  Squelette de départ. Vous pouvez modifier ce fichier à votre guise.
  Vous n'êtes pas oubligés de l'utiliser.
*/

#include "stock.h"



std::istream& operator >> (std::istream& is, Recette& recette){

    std::string chaine;
    int quantite;


    for(;;) {
        is >> chaine;
        if(chaine == ";")
            break;
        is >> quantite;

        // TODO
    }


    return is;
}

Stock::Stock(){



}



void Stock::ajout(std::string nomingredient, std::string date, int nombre){






}


void Stock::retrait(std::string nomingredient, int nombre){



}


void Stock::affichage(){




}


std::string Stock::dateExpiration(const Recette& recette) const{


return "";

}
