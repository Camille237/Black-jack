#include <stdio.h>
#include <stdlib.h>

// Fonction pour afficher le menu d'accueil
void afficher_menu() {
printf("Bienvenue sur le jeu de blackjack !\n");
printf("Que voulez-vous faire ?\n");
printf("1. Jouer\n");
printf("2. Voir les r�gles\n");
printf("3. Quitter\n");
}

// Fonction pour afficher les r�gles du jeu
void afficher_regles() {
printf("Le but du jeu est d'obtenir un total de points le plus proche de 21 sans le d�passer.\n");
printf("Vous jouez contre le croupier, qui doit respecter certaines r�gles de tirage.\n");
printf("Les cartes ont la valeur de leur nombre, sauf les figures qui valent 10 et l'as qui vaut 1 ou 11.\n");
printf("Vous pouvez tirer autant de cartes que vous voulez, mais attention � ne pas d�passer 21.\n");
printf("Vous pouvez aussi doubler votre mise, s�parer deux cartes identiques ou prendre une assurance.\n");
printf("Si vous faites 21 avec vos deux premi�res cartes, vous faites un blackjack et gagnez 3/2 de votre mise.\n");
printf("Si vous avez un meilleur total que le croupier ou que celui-ci d�passe 21, vous gagnez votre mise.\n");
printf("Si vous avez le m�me total que le croupier, il y a �galit� et vous r�cup�rez votre mise.\n");
printf("Si vous avez un total inf�rieur au croupier ou que vous d�passez 21, vous perdez votre mise.\n");
}

// Fonction pour jouer au blackjack
void jouer_blackjack() {
// Ici, vous pouvez appeler la fonction que vous avez �crite pour le jeu de blackjack
// Par exemple : play_blackjack();
}

// Fonction principale
int main() {
// D�claration du choix de l'utilisateur
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
// Si le choix est 2, on affiche les r�gles
else if (choix == 2) {
// Appel de la fonction d'affichage des r�gles
afficher_regles();
}
// Sinon, le choix est invalide
else {
printf("Choix invalide, veuillez r�essayer !\n");
}
// Affichage du menu
afficher_menu();
// Saisie du choix
scanf("%d", &choix);
}
// Affichage d'un message de sortie
printf("Vous avez quitt� le jeu de blackjack, � bient�t !\n");
// Retour du programme
return 0;
}
