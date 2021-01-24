 /* 
 
  ***#2***

a et b sont deux entiers saisies au clavier, calculez et affichez a+b, a-b, a*b, a/b, a%b en
format décimal, et en soignant l’interface homme/machine.
(a/b donne le quotient de la division, a%b donne le reste de la division)

 */
 
 #include <stdio.h>
main()
{
	int a, b;
	printf(" saisies nombres entiers  a b :");
	scanf("%i\n  %i", &a, &b); 
	printf("La somme est              :  %i\n", a+b);
	printf("La soustraction est       :  %i\n", a-b);
 	printf("Division entiere          :  %i\n", a/b);
	printf("Reste                     :  %i\n", a%b);
	printf("Quotient rationnel        :  %f\n", (float)a/b);
	return 0;
}