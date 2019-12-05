#include "../headers/menu.h"

// affiche un menu qui propose un choix d'action à l'utilisateur
int afficherMenu () {
  int choix;
  printf("=======================================================\n");
  printf("====                     GROUPE 11                 ====\n");
  printf("=======================================================\n");
  printf("\n Entrez:\n");
  printf("1- POUR AFFICHER LE MENU\n");
  printf("0- POUR QUITTER LE PROGRAMME\n");
  scanf("%d", &choix);
  if (choix == 1) {
    choix = -1;
    printf("\n ************* MENU ***************\n TAPEZ\n");
    printf("0  - Pour Quitter ce programme.\n");
    printf("1  - Pour Afficher les donnees du fichier CSV.\n");
    printf("2  - Pour Afficher les donnees dans l'ordre croissant du temps.\n");
    printf("3  - Pour Afficher les donnees dans l'ordre decroissant du temps.\n");
    printf("4  - Pour Afficher les donnees dans l'ordre croissant du pouls.\n");
    printf("5  - Pour Afficher les donnees dans l'ordre decroissant du pouls.\n");
    printf("6  - Pour Rechercher et afficher le pouls d'un temps donn\x82.\n");
    printf("7  - Pour Afficher la moyenne de pouls pour une plage de temps donn\x82.\n");
    printf("8  - Pour Afficher le nombre de lignes de donnees en m\x82moire.\n");
    printf("9  - Pour Rechercher et afficher les max et min du pouls avec leur temps associ\x82.\n");
    printf("10 - Pour Afficher la mediane du pouls et son temps associ\x82 \nVotre choix : ");
    scanf("%i", &choix);
  }
  while (choix < 0 || choix > 10) {
    printf("Cette tache n'existe pas, veuillez saisir une valeur de tache valide : ");
    scanf("%d", &choix);
  }
  printf("\n");
  return choix;
}

// declenche un action selon le choix de l'utilisateur
void tacheChoisie(int choix, Bpm *tab, int compteur) {
  switch (choix) {
  case 1:
    afficherDonneesOrdreCSV(tab, compteur);
    break;
  case 2:
    afficherDonneesTempsCrois(tab, compteur);
    break;
  case 3:
    afficherDonneesTempsDecrois(tab, compteur);
    break;
  case 4:
    afficherDonneesPoulsCrois(tab, compteur);
    break;
  case 5:
    afficherDonneesPoulsDecrois(tab, compteur);
    break;
  case 6:
    afficherPoulsTempsDonne(tab, compteur);
    break;
  case 7:
    afficherMoyPoulsPlageTemps(tab, compteur);
    break;
  case 8:
    afficherNbrLignes(compteur);
    break;
  case 9:
    afficherMaxMin(tab, compteur);
    break;
  case 10:
    afficherMediane(tab, compteur);
    break;
  default:
    printf("La valeur saisie ne correspond \x85 aucune tache...");
    break;
  }
}
