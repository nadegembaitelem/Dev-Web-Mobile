#include <stdio.h>
#include <math.h>
#define PI 3.14

//Fonction pour calculer la surface d'un carré
double surfaceCarre(double cote){
    return cote * cote;
}

//Fonction pour calculer le périmètre d'un carré
double perimetreCarre(double cote){
    return 4 * cote;
}

//Fonction pour calculer la surface d'un rectangle
double surfaceRectangle(double longueur, double largeur){
    return longueur * largeur;
}

//Fonction pour calculer le périmètre d'un rectangle
double perimetreRectangle(double longueur, double largeur){
    return 2 * (longueur + largeur);
}

//Fonction pour calculer la surface d'un cercle
double surfaceCercle(double rayon){
    return PI * rayon * rayon;
}

//Fonction pour calculer le périmètre d'un cercle
double perimetreCercle(double rayon){
    return 2 * PI * rayon;
}

//Fonction pour calculer la surface d'une sphère
double surfaceSphere(double rayon){
    return 4 * PI * rayon * rayon;
}

//Fonction pour calculer le périmètre d'une sphère
double perimetreSphere(double rayon){
    return 2 * PI * rayon;
}

int main(){
    int choix;

    do{
        printf("Menu:\n");
        printf("Entrez 1 pour calculer la surface d'un carré\n");
        printf("Entrez 2 pour calculer la périmètre d'un carré\n");
        printf("Entrez 3 pour calculer la surface d'un rectangle\n");
        printf("Entrez 4 pour calculer la périmètre d'un rectangle\n");
        printf("Entrez 5 pour calculer la surface d'un cercle\n");
        printf("Entrez 6 pour calculer la périmètre d'un cercle\n");
        printf("Entrez 7 pour calculer la surface d'une sphère\n");
        printf("Entrez 8 pour calculer la périmètre d'une sphère\n");
        printf("Entrez 0 pour quitter le programme\n");

        printf("Votre choix:");
        scanf("%d", &choix);

        switch(choix){
            case 1:{
                double cote;
                printf("Entrez la valeur du côté(en m):");
                scanf("%lf", &cote);
                printf("La surface est: %.2f m²\n", surfaceCarre(cote));
                break;
            }
            case 2:{
                double cote;
                printf("Entrez la valeur du côté(en m):");
                scanf("%lf", &cote);
                printf("Le périmètre est: %.2f m\n", perimetreCarre(cote));
                break;
            }
            case 3:{
                double longueur, largeur;
                printf("Entrez la valeur de la longueur(en m):");
                scanf("%lf", &longueur);
                printf("Entrez la valeur de la largeur(en m):");
                scanf("%lf", &largeur);
                printf("La surface est: %.2f m²\n", surfaceRectangle(longueur, largeur));
                break;
            }
            case 4:{
                double longueur, largeur;
                printf("Entrez la valeur de la longueur(en m):");
                scanf("%lf", &longueur);
                printf("Entrez la valeur de la largeur(en m):");
                scanf("%lf", &largeur);
                printf("Le périmètre est: %.2f m\n", perimetreRectangle(longueur, largeur));
                break;
            }
            case 5:{
                double rayon;
                printf("Entrez la valeur du rayon(en m):");
                scanf("%lf", &rayon);
                printf("Le surface est: %.2f m²\n", surfaceCercle(rayon));
                break;
            }
            case 6:{
                double rayon;
                printf("Entrez la valeur du rayon(en m):");
                scanf("%lf", &rayon);
                printf("Le périmètre est: %.2f m\n", perimetreCercle(rayon));
                break;
            }
            case 7:{
                double rayon;
                printf("Entrez la valeur du rayon(en m):");
                scanf("%lf", &rayon);
                printf("Le surface est: %.2f m²\n", surfaceSphere(rayon));
                break;
            }
            case 8:{
                double rayon;
                printf("Entrez la valeur du rayon(en m):");
                scanf("%lf", &rayon);
                printf("Le périmètre est: %.2f m\n", perimetreSphere(rayon));
                break;
            }
            case 0:
            printf("Au revoir!\n");
            break;
            default:
            printf("Choix invalide! Veuillez réessayer.\n");
        }

        printf("\n");//Ligne vide entre les itérations
    }
    while (choix != 0);

    return 0;
}