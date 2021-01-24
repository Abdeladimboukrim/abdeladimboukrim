 /* 
 ## ***#3*:**

Écrire un programme qui affiche la moyenne d'une suite d'entiers positifs entrés au clavier. On arrêtera la saisie quand le nombre -1 est entré comme dans l'exemple suivant :
Entrez un entier positif : 5
Entrez un entier positif :2
Entrez un entier positif :3
Entrez un entier positif :-1
La moyenne de ces 3 entiers vaut 3.333333
 */
 
 #include <stdio.h>


int main()
{
    int nombre;
    int somme = 0;
    int rep = 0;
    float moyen;

    do{
        printf("Veuillez saisir un nombre :");
        scanf("%d", &nombre);

        if(nombre > -1){
            somme += nombre;
            rep++;
        }
    }while(nombre > -1);
    
    moyen = (float)somme / rep;

        printf("le moyen est : %.2f" , moyen);

    return 0;
}