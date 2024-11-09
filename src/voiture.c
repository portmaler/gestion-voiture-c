#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"structure.h"
#include"prototype.h"

/******** Lafichage de la liste des voiture **********/

void ListeVoiture()
{
    voiture v;
    F=fopen("voiture.txt")
    do{
        F=fopen("voiture.txt")
        fscanf(F,"%d,%s,%s,%s,%d,%d,%s \n",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbplaces,v.prixJour,v.EnLocation);
        fflush(stdin);
        printf("%d,%s,%s,%s,%d,%d,%s \n",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbplaces,v.prixJour,v.EnLocation);


    }while(!feof(F));
    fclose(F);



}








//*******************Lajout d'une nouvelle voiture*********************//

void ajoutervoiture()
{
    voiture v;
    FILE*F
    int num,nbp,prixj;
    F=fopen("voiture.txt","a");
    printf("\n entrez idvoiture ");
    scanf("%d",%num);
    while(rech(num)==1)
    {
         printf("\n entrez idvoiture ");
         printf("\n entrez idvoiture ");
         scanf("%d",&num);
    }
    v.idVoiture=num;
    printf("entrez la marque;=:");
    gets(v.marque);
    fflush(stdin);
    printf("entrez le nom de voiture ;=:");
    gets(v.nomVoiture);
    fflush(stdin);
    printf("entrez la couleur;=:");
    gets(v.couleur);
    fflush(stdin);
    printf("\n entrez nombre de places ");
    scanf("%d",&nbp);
    printf("\n entrez le prix par jour ");
    scanf("%d",&prixj);
    printf("en location oui/non:");
    gets(v.EnLocation);
    fflush(stdin);

    fprintf(F,"%d,%s,%s,%s,%d,%d,%s \n",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbplaces,v.prixJour,v.EnLocation);
    close(F);

}

int rechv(int Numrech)
{
    voiture v;
    File *F;
    F=fopen("voiture.txt","r");
    do{
        fscanf(F,"%d,%s,%s,%s,%d,%d,%s \n",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbplaces,v.prixJour,v.EnLocation;
        fflush(stdin);

        if(v.idVoiture==Numrech)
        {
            fclose(F);
            return 1;
        }


    }while(!feof(F));
    fclose(F);
    return -1;
}

/*****************Suppression dune voiture************/

void supprimervoiture()
{
    File *F,Fich;
    char rep;
    int NumRech;
    printf("\n entrez le id de voiture  ");
    scanf("%d",&NumRech);
    fflush(stdin);

    while(rechv(Numrech)==1)
    {
         printf("\n Voulez vous Vraiment supprimer la voiture o/n ");
         scanf("%c",&rep);
         fflush(stdin);
         if(rep == 'o' || rep == 'O')
         {

             F = fopen("voiture.txt","r");
             Fich = fopen("tempvoiture.txt","a");
             do
             {
                 fscanf(F,"%d,%s,%s,%s,%d,%d,%s \n",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbplaces,v.prixJour,v.EnLocation);
                 if{Numrech != v.idVoiture}
                 {
                     fprintf(Fich,"%d,%s,%s,%s,%d,%d,%s \n",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbplaces,v.prixJour,v.EnLocation);
                 }
             }
             while(!feof(F));

             fclose(Fich);
             fclose(F);
             remove("voiture.txt");
             rename("tempvoiture.txt","voiture.txt");
             printf("Suppression effectue avec succes")
         }
    }

}


/****************Modifier une voiture*********/
void modifiervoiture()
{
    voiture v;
    File *F,Fich;
    char rep='n;
    int NumRech;
    printf("\n entrez le id de voiture  ");
    scanf("%d",&NumRech);
    fflush(stdin);

    if(rechv(Numrech)==1)
    {
         printf("\n Voulez vous Vraiment supprimer la voiture o/n ");
         scanf("%c",&rep);
         fflush(stdin);
    }
         if(rep == 'o' || rep == 'O')
         {

             F = fopen("voiture.txt","r");
             Fich = fopen("tempvoiture.txt","a");
             do
             {
                 fscanf(F,"%d,%s,%s,%s,%d,%d,%s \n",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbplaces,v.prixJour,v.EnLocation);
                 if{Numrech != v.idVoiture}
                 {
                     v.idVoiture = Numrech;
                     printf("\n entre le nouveau marque");
                     gets(v.marque);
                     fflush(stdin);
                     printf("\n entre le nouveau nom");
                     gets(v.marque);
                     fflush(stdin);
                     printf("\n entre le nouveau couleur");
                     gets(v.marque);
                     fflush(stdin);
                     printf("\n entrez le nouveau nombre de places ");
                     scanf("%d",v.nbplaces);
                     printf("\n entrez  le nouveau le prix par jour ");
                     scanf("%d",v.prixJour);
                     printf("en location oui/non:");
                     gets(v.EnLocation);
                     fflush(stdin);
                 }
                 fprintf(Fich,"%d,%s,%s,%s,%d,%d,%s \n",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbplaces,v.prixJour,v.EnLocation);

             }
             while(!feof(F));

             fclose(Fich);
             fclose(F);
             remove("voiture.txt");
             rename("tempvoiture.txt","voiture.txt");
             printf("Modification est effectue avec succes")
         }
         else{
            printf("La modification est annulee")
         }
    }

}




