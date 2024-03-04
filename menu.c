#include <stdio.h>
#include <stdlib.h>

// Fonction pour afficher le menu d'accueil
void afficher_menu() {
printf("Bienvenue sur le jeu de blackjack !\n");
printf("Que voulez-vous faire ?\n");
printf("1. Jouer\n");
printf("2. Voir les règles\n");
printf("3. Quitter\n");
}

// Fonction pour afficher les règles du jeu
void afficher_regles() {
printf("Le but du jeu est d'obtenir un total de points le plus proche de 21 sans le dépasser.\n");
printf("Vous jouez contre le croupier, qui doit respecter certaines règles de tirage.\n");
printf("Les cartes ont la valeur de leur nombre, sauf les figures qui valent 10 et l'as qui vaut 1 ou 11.\n");
printf("Vous pouvez tirer autant de cartes que vous voulez, mais attention à ne pas dépasser 21.\n");
printf("Vous pouvez aussi doubler votre mise, séparer deux cartes identiques ou prendre une assurance.\n");
printf("Si vous faites 21 avec vos deux premières cartes, vous faites un blackjack et gagnez 3/2 de votre mise.\n");
printf("Si vous avez un meilleur total que le croupier ou que celui-ci dépasse 21, vous gagnez votre mise.\n");
printf("Si vous avez le même total que le croupier, il y a égalité et vous récupérez votre mise.\n");
printf("Si vous avez un total inférieur au croupier ou que vous dépassez 21, vous perdez votre mise.\n");
}

// Fonction pour jouer au blackjack
void jouer_blackjack() {
// Ici, vous pouvez appeler la fonction que vous avez écrite pour le jeu de blackjack
// Par exemple : play_blackjack();
}

// Fonction principale
int main() {
// Déclaration du choix de l'utilisateur
int choix;
// Affichage du menu
afficher_menu();
// Saisie du choix
scanf("%d", &choix);
// Tant que le choix n'est pas 3, on continue
while (choix != 3) {
// Si le choix est 1, on joue
if (choix == 1) {
// Appel de la fonction de jeu
jouer_blackjack();
}
// Si le choix est 2, on affiche les règles
else if (choix == 2) {
// Appel de la fonction d'affichage des règles
afficher_regles();
}
// Sinon, le choix est invalide
else {
printf("Choix invalide, veuillez réessayer !\n");
}
// Affichage du menu
afficher_menu();
// Saisie du choix
scanf("%d", &choix);
}
// Affichage d'un message de sortie
printf("Vous avez quitté le jeu de blackjack, à bientôt !\n");
// Retour du programme
return 0;
}
