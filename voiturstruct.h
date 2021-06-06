#ifndef VOITURSTRUCT_H_INCLUDED
#define VOITURSTRUCT_H_INCLUDED

typedef struct Date
{
    int jj;
    int mm;
    int aa;
}date;

typedef struct voiture
{
    int idVoiture;
    char marque[15];
    char nomVoiture[15];
    char couleur[7];
    int nbplaces;
    int prixJour;
    char EnLocation[4];
} voiture;

typedef struct contraLocation
{
    float numContrat;
    int idVoiture;
    int idClient;
    date debut;
    date fin;
    int cout;
}contrat;

typedef struct Client
{
    int idClient;
    char nom[20];
    char prenom[20];
    int cin;
    char adresse[15];
    int telephone;
}client;





#endif // VOITURSTRUCT_H_INCLUDED
