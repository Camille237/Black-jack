#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure pour repr�senter un utilisateur
typedef struct {
char nom[20]; // Nom de l'utilisateur
char prenom[20]; // Pr�nom de l'utilisateur
char email[50]; // Adresse e-mail de l'utilisateur
char motdepasse[20]; // Mot de passe de l'utilisateur
} Utilisateur;

// Fonction pour afficher le menu d'inscription
void afficher_menu() {
printf("Bienvenue dans black jack !\n");
printf("Que voulez-vous faire ?\n");
printf("1. S'inscrire\n");
printf("2. Se connecter\n");
printf("3. Quitter\n");
}

// Fonction pour saisir les informations d'un utilisateur
void saisir_utilisateur(Utilisateur *u) {
printf("Veuillez entrer les informations suivantes :\n");
printf("Nom : ");
scanf("%s", u->nom);
printf("Pr�nom : ");
scanf("%s", u->prenom);
printf("E-mail : ");
scanf("%s", u->email);
printf("Mot de passe : ");
scanf("%s", u->motdepasse);
}

// Fonction pour v�rifier si un utilisateur existe dans un fichier
int verifier_utilisateur(Utilisateur u, FILE *f) {
// D�claration d'un utilisateur temporaire
Utilisateur tmp;
// Parcours du fichier
while (fread(&tmp, sizeof(Utilisateur), 1, f) == 1) {
// Si l'e-mail et le mot de passe correspondent, on retourne 1
if (strcmp(tmp.email, u.email) == 0 && strcmp(tmp.motdepasse, u.motdepasse) == 0) {
return 1;
}
}
// Sinon, on retourne 0
return 0;
}

// Fonction pour inscrire un utilisateur dans un fichier
void inscrire_utilisateur(Utilisateur u, FILE *f) {
// �criture de l'utilisateur dans le fichier
fwrite(&u, sizeof(Utilisateur), 1, f);
// Affichage d'un message de confirmation
printf("Vous �tes bien inscrit !\n");
}

// Fonction pour connecter un utilisateur � partir d'un fichier
void connecter_utilisateur(Utilisateur u, FILE *f) {
// V�rification de l'utilisateur dans le fichier
int res = verifier_utilisateur(u, f);
// Si l'utilisateur existe, on affiche un message de bienvenue
if (res) {
printf("Vous �tes bien connect� !\n");
printf("Bonjour %s %s !\n", u.prenom, u.nom);
}
// Sinon, on affiche un message d'erreur
else {
printf("E-mail ou mot de passe incorrect !\n");
}
}

// Fonction principale
int main() {
// D�claration du choix de l'utilisateur
int choix;
// D�claration de l'utilisateur courant
Utilisateur u;
// D�claration du fichier des utilisateurs
FILE *f;
// Ouverture du fichier en mode lecture et �criture
f = fopen("utilisateurs.dat", "r+");
// Si le fichier n'existe pas, on le cr�e
if (f == NULL) {
f = fopen("utilisateurs.dat", "w+");
}
// Affichage du menu
afficher_menu();
// Saisie du choix
scanf("%d", &choix);
// Tant que le choix n'est pas 3, on continue
while (choix != 3) {
// Si le choix est 1, on s'inscrit
if (choix == 1) {
// Saisie des informations de l'utilisateur
saisir_utilisateur(&u);
// Inscription de l'utilisateur dans le fichier
inscrire_utilisateur(u, f);
}
// Si le choix est 2, on se connecte
else if (choix == 2) {
// Saisie des informations de l'utilisateur
saisir_utilisateur(&u);
// Connexion de l'utilisateur � partir du fichier
connecter_utilisateur(u, f);
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
// Fermeture du fichier
fclose(f);
// Affichage d'un message de sortie
printf("Vous avez quitt� le site internet, � bient�t !\n");
// Retour du programme
return 0;
}
