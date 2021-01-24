/*

step 1

***#1***

ce programme en C qui va te permettre d'afficher vos informations personnelles :
Nom, prénom , Age , Sexe et numéro de téléphone.
Les données sont saisies à partir du clavier. */


#include <stdio.h>


    char nom[10] ;
    char prenom[11];
    int age;
    char sexe[11];
    char num[16];



    int main()

{

printf("veullez saisir votre nom  :\n");
scanf("%s",&nom);


printf("veullez saisir votre prenom:\n");
scanf("%s",&prenom);


printf("veullez saisir votre age  :\n");
scanf("%d",&age);

printf("vous etes H/F:?\n");
scanf("%s",&sexe);

printf("veullez saisir votre num :\n");
scanf("%s",&num);



printf("Nom: %s\n Prenom: %s\n Age: %d\n Sexe: %s\n Num de tel: %s\n ",&nom,&prenom,&age,&sexe,&num);

return 0;
}
