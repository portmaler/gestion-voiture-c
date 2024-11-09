#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"structure.h"
#include"prototype.h"

/******** Lafichage de la liste des clients **********/

void ListeClient()
{
	FILE *F;
    Client cl;
    F=fopen("client.txt")
    do{
        
        fscanf(F,"%d,%s,%s,ds,%s,%d \n",cl.nom,cl.prenom,cl.cin,cl.adresse,cl.telephone);
        fflush(stdin);
        printf("%d,%s,%s,ds,%s,%d \n",cl.nom,cl.prenom,cl.cin,cl.adresse,cl.telephone);
    }while(!feof(F));
    fclose(F);

}








//*******************Lajout d'un nouvel client*********************//

void ajouterclient()
{
    client cl;
    FILE *F
    int num,nbp,prixj;
    F=fopen("client.txt","a");
    printf("\n entrez id de client ");
    scanf("%d",%num);
    
    int idClient;
    char nom[20];
    char prenom[20];
    int cin;
    char adresse[15];
    int telephone;
    while(rechcl(num)!=1)
    {
         
    v.idVoiture=num;
    printf("entrez le nom:");
    gets(cl.nom);
    fflush(stdin);
    printf("entrez le prenom ;=:");
    gets(cl.prenom);
    fflush(stdin);
    printf("entrez la cin=:");
    scanf("%d",v.couleur);
    fflush(stdin);
    printf("\n entrez l'adresse' ");
    scanf("%d",cl.adresse);
    printf("\n entrez le telephone ");
    scanf("%d",cl.telephone);
    fflush(stdin);
    }
    

    fprintf(F,"%d,%s,%s,ds,%s,%d \n",cl.nom,cl.prenom,cl.cin,cl.adresse,cl.telephone);
    close(F);

}

int rechcl(int Numrech)
{
    client cl;
    File *F;
    F=fopen("client.txt","r");
    do{
        fscanf(F,"%d,%s,%s,ds,%s,%d \n",cl.nom,cl.prenom,cl.cin,cl.adresse,cl.telephone);
        fflush(stdin);

        if(cl.idClient==Numrech)
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
    client cl;
    char rep;
    int NumRech;
    printf("\n entrez le id de client a supprimer  ");
    scanf("%d",&NumRech);
    fflush(stdin);

    while(rechcl(Numrech)==1)
    {
         printf("\n Voulez vous Vraiment supprimer le client o/n ");
         scanf("%c",&rep);
         fflush(stdin);
         if(rep == 'o' || rep == 'O')
         {

             F = fopen("client.txt","r");
             Fich = fopen("tempclient.txt","a");
             do
             {
                 fscanf(F,"%d,%s,%s,ds,%s,%d \n",cl.nom,cl.prenom,cl.cin,cl.adresse,cl.telephone);
                 if{Numrech != cl.idClient}
                 {
                     fprintf(Fich,"%d,%s,%s,ds,%s,%d \n",cl.nom,cl.prenom,cl.cin,cl.adresse,cl.telephone);
                 }
             }
             while(!feof(F));

             fclose(Fich);
             fclose(F);
             remove("client.txt");
             rename("tempclient.txt","client.txt");
             printf("Suppression effectue avec succes")
         }
    }

}


/****************Modifier une voiture*********/
void modifiervoiture()
{
    client cl;
    File *F,Fich;
    char rep='n;
    int NumRech;
    printf("\n entrez le id de c;lient a modifier  ");
    scanf("%d",&NumRech);
    fflush(stdin);

    if(rechcl(Numrech)==1)
    {
         printf("\n Voulez vous Vraiment supprimer le client o/n ");
         scanf("%c",&rep);
         fflush(stdin);
    }
         if(rep == 'o' || rep == 'O')
         {

             F = fopen("client.txt","r");
             Fich = fopen("tempvoiture.txt","a");
             do
             {
                 fscanf(F,"%d,%s,%s,ds,%s,%d \n",cl.idClient,cl.nom,cl.prenom,cl.cin,cl.adresse,cl.telephone);
                 if(Numrech == cl.idClient){
                    cl.idClient=Numrech;
				    printf("entrez le nouveau nom:");
				    gets(cl.nom);
				    fflush(stdin);
				    printf("entrez le nouveau prenom ;=:");
				    gets(cl.prenom);
				    fflush(stdin);
				    printf("entrez la nouveau cin=:");
				    scanf("%d",v.couleur);
				    fflush(stdin);
				    printf("\n entrez la nouvelle adresse' ");
				    scanf("%d",cl.adresse);
				    printf("\n entrez le nouveautelephone ");
				    scanf("%d",cl.telephone);
				    fflush(stdin);
                 }
                 fprintf(Fich,"%d,%s,%s,ds,%s,%d \n",cl.idClient,cl.nom,cl.prenom,cl.cin,cl.adresse,cl.telephone);

             }
             while(!feof(F));

             fclose(Fich);
             fclose(F);
             remove("client.txt");
             rename("tempclient.txt","client.txt");
             printf("Modification est effectue avec succes")
         }
         else{
            printf("La modification est annulee")
         }
    }

}

