#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include"structure.h"
#include"prototype.h"

//#define  int supcond 20
//#define  int bebe 15
//#define  int livraison 20

/*******function pour visuqliser les contrqts*****/

void VisualiserContrat(int Numrech)
{
    contraLocation c;
    File *F;
    F=fopen("contrat.txt","r");
    do{
        fscanf(F,"%f,%d,%d,%d,%d,%d \n",c.numContrat,c.idVoiture,c.idClient,c.debut,c.fin,c.cout);
        fflush(stdin);

        if(c.numContrat==Numrech)
        {
        	printf("numcontrat: %f,idvoiture: %d,idclient: %d,date debut : %d,date fin : %d, cout: %d \n",c.numContrat,c.idVoiture,c.idClient,c.debut,c.fin,c.cout); 
        }


    }while(!feof(F));
    fclose(F);
    
}

/*****recheche de contrat par son num******/

int rechc(int Numrech)
{
    contraLocation c;
    File *F;
    F=fopen("contrat.txt","r");
    do{
        fscanf(F,"%f,%d,%d,%d,%d,%d \n",c.numContrat,c.idVoiture,c.idClient,c.debut,c.fin,c.cout);
        fflush(stdin);

        if(c.numContrat==Numrech)
        {
            fclose(F);
            return 1;
        }


    }while(!feof(F));
    fclose(F);
    return -1;
}



/*********function pour louer une voiture*************/

void LouerVoiture()
{
	FILE *F1,*F2,F3;
	Client cl;
	voiture v1,v2;
	contraLocation con;
	char nom[20],prernom[20];
	printf("veulliez entrez votre nom\n");
	gets(nom);
    fflush(stdin);
    printf("veulliez entrez votre prenom\n");
	gets(prenomnom);
    fflush(stdin);
    
    printf("entrez la marque;=:");
    gets(v1.marque);
    fflush(stdin);
    printf("entrez le nom de voiture ;=:");
    gets(v1.nomVoiture);
    fflush(stdin);
    printf("entrez la couleur;=:");
    gets(v1.couleur);
    fflush(stdin);
    printf("\n entrez nombre de places ");
    scanf("%d",v1.nbplaces);
    
    File *F1;
    F1=fopen("client.txt","r");
    do{
        fscanf(F,"%d,%s,%s,%d,%s,%d \n",cl.idClient,cl.nom,cl.prenom,cl.cin,cl.adresse,c.telephone);
        fflush(stdin);

        if(cl.nom == nom || cl.prenom == prenom)
        {
        	res = 1;
        	//printf("numcontrat: %f,idvoiture: %d,idclient: %d,date debut : %d,date fin : %d, cout: %d \n",c.numContrat,c.idVoiture,c.idClient,c.debut,c.fin,c.cout); 
        }
        else
        {
        	printf("veullez s'enregistrer dans le menu Client'");
		}
        
        int idClient;


    }while(!feof(F1));
    fclose(F1);
    
    if(res = 1)
    {
    	
    	do{
        F2=fopen("voiture.txt")
        fscanf(F,"%d,%s,%s,%s,%d,%d,%s \n",v2.idVoiture,v2.marque,v2.nomVoiture,v2.couleur,v2.nbplaces,v2.prixJour,v2.EnLocation);
        fflush(stdin);
        if(v1.marque == v2.marque && v1.nomVoiture == v2.nomVoiture && v1.couleur == v2.couleur && v1.nbplaces == v2.nbplaces && v2.EnLocation == "Non" || v2.EnLocation == 'non')
        {
        	v2.EnLocation = "Oui";
        	printf("*****ajouter un contrat*****\n");         float numContrat;
			do{
				printf("entrez le num de contrat");
				scanf("%d",con.numContrat);
			}while(rechc(int Numrech));										    int idVoiture;
															    int idClient;
															    date debut;
															    date fin;
															    int cout;
        	printf("entrez le id de voiture:\n");
		    scanf("%d",con.idVoiture);
		    fflush(stdin);
		    printf("entrez le id de client:\n");
		    gets(con.idClient);
		    fflush(stdin);
		    printf("entrez la date de debut:\n");
		    scanf("%d",con.debut);
		    fflush(stdin);
		    printf("\n entrez la date de fin \n");
		    scanf("%d",con.fin);
		    printf("\n entrez le prix par jour \n");
		    scanf("%d",con.cout);
		    printf("en location oui/non:");
		    fflush(stdin);
        	
		}
		else
		{
			printf("la voiture n’est pas disponible");
		}
        //printf("%d,%s,%s,%s,%d,%d,%s \n",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbplaces,v.prixJour,v.EnLocation);


    	}while(!feof(F2));
    	fclose(F2);
    	
    	contraLocation c;
	    F3=fopen("contrat.txt","r");
	    do{
	        fprintf(F,"%f,%d,%d,%d,%d,%d \n",con.numContrat,con.idVoiture,con.idClient,con.debut,con.fin,con.cout);
	        fflush(stdin);
	
	    
	
	    }while(!feof(F3));
	    fclose(F3);
    	
    	
	}
    
    
}

/******** fucntion de retourner voiture *************************/

void retournerVoiture()
{
	
	voiture v;
	contraLocation c;
	File *F,*Fich;
	int idv,numc;
	printf("entrez le id de voiture:\n");
	scanf("%d",idv);
	
	
    
    F=fopen("voiture.txt","r");
    do{
        fscanf(F,"%d,%s,%s,%s,%d,%d,%s \n",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbplaces,v.prixJour,v.EnLocation;
        fflush(stdin);
		if(v.idVoiture == idv)
		{
			if(v.EnLocation == "Oui")
        	{
	        	v.EnLocation = "Non";
	            
       		}
		}
    }while(!feof(F));
    fclose(F);
    
    printf("entrer le num de contrat")
    scanf("%d",numc);
    
    while(rechc(numc)==1)
    {
         printf("\n Voulez vous Vraiment supprimer cete contrat o/n ");
         scanf("%c",&rep);
         fflush(stdin);
         if(rep == 'o' || rep == 'O')
         {

             F = fopen("contrat.txt","r");
             Fich = fopen("tempcontrat.txt","a");
             do
             {
                 fscanf(F,"%f,%d,%d,%d,%d,%d \n",c.numContrat,c.idVoiture,c.idClient,c.debut,c.fin,c.cout);
                 fflush(stdin);
                 if{numc != c.numContrat}
                 {
                     fprintf(F,"%f,%d,%d,%d,%d,%d \n",c.numContrat,c.idVoiture,c.idClient,c.debut,c.fin,c.cout);
                 }
             }
             while(!feof(F));

             fclose(Fich);
             fclose(F);
             remove("contrat.txt");
             rename("tempcontrat.txt","voiture.txt");
             printf("Suppression effectue avec succes");
         }
    }
}

/**********************function de modifier contrat****************/

void ModifierContrat()
{
	
	contratLocation c,con;
    File *F,Fich;
    char rep='n;
    int NumRech;
    printf("\n entrez le id de voiture  ");
    scanf("%d",&NumRech);
    fflush(stdin);

    if(rechc(Numrech)==1)
    {
         printf("\n Voulez vous Vraiment supprimer la contrat o/n ");
         scanf("%c",&rep);
         fflush(stdin);
    }
         if(rep == 'o' || rep == 'O')
         {

             F = fopen("contrat.txt","r");
             Fich = fopen("tempcontrat.txt","a");
             do
             {
                 fscanf(F,"%f,%d,%d,%d,%d,%d \n",c.numContrat,c.idVoiture,c.idClient,c.debut,c.fin,c.cout);
                 if{Numrech != c.numContrat}
                 {
                     con.numContrat = Numrech;
                     printf("entrez le nouveaux id de voiture:\n");
					    scanf("%d",con.idVoiture);
					    fflush(stdin);
					    printf("entrez le le nouveaux id de client:\n");
					    gets(con.idClient);
					    fflush(stdin);
					    printf("entrez le le nouveaux date de debut:\n");
					    scanf("%d",con.debut);
					    fflush(stdin);
					    printf("\n entrez le le nouveaux date de fin \n");
					    scanf("%d",con.fin);
					    printf("\n entrez le nouveauxprix par jour \n");
					    scanf("%d",con.cout);
					    fflush(stdin);
                 }
                 fprintf(Fich,"%f,%d,%d,%d,%d,%d \n",con.numContrat,con.idVoiture,con.idClient,con.debut,con.fin,con.cout);

             }
             while(!feof(F));

             fclose(Fich);
             fclose(F);
             remove("contrat.txt");
             rename("tempcontrat.txt","contrat.txt");
             printf("Modification est effectue avec succes")
         }
         else{
            printf("La modification est annulee")
         }
    }
}

/***************suprimerContrat***********/

void SupprimerContrat()
{
	
	contratLocation c,con;
    File *F,Fich;
    char rep='n;
    int NumRech;
    printf("\n entrez le id de voiture  ");
    scanf("%d",&NumRech);
    fflush(stdin);

    if(rechc(Numrech)==1)
    {
         printf("\n Voulez vous Vraiment supprimer la contrat o/n ");
         scanf("%c",&rep);
         fflush(stdin);
    }
         if(rep == 'o' || rep == 'O')
         {

             F = fopen("contrat.txt","r");
             Fich = fopen("tempcontrat.txt","a");
             do
             {
                 fscanf(F,"%f,%d,%d,%d,%d,%d \n",c.numContrat,c.idVoiture,c.idClient,c.debut,c.fin,c.cout);
                 if{Numrech != c.numContrat}
                 {
                     fprintf(Fich,"%f,%d,%d,%d,%d,%d \n",c.numContrat,c.idVoiture,c.idClient,c.debut,c.fin,c.cout);
                 }
                 

             }
             while(!feof(F));

             fclose(Fich);
             fclose(F);
             remove("contrat.txt");
             rename("tempcontrat.txt","contrat.txt");
             printf("La suppression est effectue avec succes")
         }
         else{
            printf("La suppression est annulee")
         }
    }
}



