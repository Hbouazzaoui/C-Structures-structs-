#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char ville[20];
    char rue[20];
    int code_postale;

}Adress;

typedef struct 
{
    char nom[20];
    char prenom[20];
    int age;
    float note;
    Adress adress;
}Apprenant;
Apprenant ap;

void cree()
{
    printf("Enter votre nom : ");
    scanf("%s",ap.nom);
    printf("Enter votre prenom : ");
    scanf("%s",ap.prenom);
    printf("Enter votre Age :");
    scanf("%d",&ap.age);
    printf("Enter votre note :");
    scanf("%f",&ap.note);
    printf("Enter votre ville :");
    scanf("%s",ap.adress.ville);
    printf("Enter votre rue :");
    scanf("%s",ap.adress.rue);
    printf("Enter votre Code postale :");
    scanf("%d",&ap.adress.code_postale);

}
void afficher()
{
     if (ap.age == 0)
     {
        printf("Aucun apprenant n'est disponible a mettre a jour.\n");
        return;
     }
    printf("voter nom est :%s\n",ap.nom);
    printf("voter prenom est :%s\n",ap.prenom);
    printf("voter age est : %d\n",ap.age);
    printf("voter note est : %f\n",ap.note);
    printf("voter ville est :%s\n",ap.adress.ville);
    printf("voter rue est : %s\n",ap.adress.rue);
    printf("voter code postale est : %d\n",ap.adress.code_postale);
}

void Mettre_a_jour()
{
     if (ap.age == 0)
     {
        printf("Aucun apprenant n'est disponible a mettre a jour.\n");
        return;
     }
    printf("Enter nouveau nom :");
    scanf("%s",ap.nom);
    printf("Enter nouveau prenom :";
    scanf("%s",ap.prenom);
    printf("Enter nouveau l'age :");
    scanf("%d",&ap.age);
    printf("Enter nouveau l'age :");
    scanf("%f",&ap.note);
    printf("Enter nouveau ville :");
    scanf("%s",ap.adress.ville);
    printf("Enter nouveau rue :)");
    scanf("%s",ap.adress.rue);
    printf("Enter nouveau code postale :");
    scanf("%d",&ap.adress.code_postale);
}

void Supprimer()
{
    ap.nom[0] = '\0';
    ap.prenom[0] = '\0';
    ap.age = 0;
    ap.note = 0.0;
    ap.adress.ville[0] = '\0';
    ap.adress.rue[0] = '\0';
    ap.adress.code_postale = 0;

    printf("Les informations ete supprimees avec succes.\n");
}

int main(int argc, char *argv[]) 
{
    int p;
    do{
        printf("\n Menu \n");
        printf("1-Cree\n");
        printf("2-Lire et afficher\n");
        printf("3-Mettre a jour\n");
        printf("4-Supprimer\n");
        printf("5-Quitter\n");
        printf("Enter votre choix : ");
        scanf("%d",&p);
        switch(p)
        {
            case 1:
                cree();
                break;
            case 2:
                afficher();
                break;
            case 3:
                Mettre_a_jour();
                break;
            case 4:
                Supprimer() ;
                break;
            case 5:
                printf("Au revoir!\n");
                break;
            default:
                printf("Veuillez reessayer.\n");
        }
    }while(p!=5);

    return 0;
}