/*-------procédure d'ajout---------*/
void AjouterEtudiant()
{

      Etudiant Etud;
      FILE *F;
      int num;
      F = fopen("Etudiant.txt", "a+");
    printf("\n Entrez le numero du nouvel etudiant : ");
    scanf("%d",&num);
    fflush(stdin);
    while(rech(num) == 1)
{
    
    printf("\n ce numero existe deja : ");
    printf("\nEntrer le numero Etudiant");
    scanf("%d", &num);
}
Etud.Num = num;
printf("\n Entrer le Nom : ");
gets(Etud.Nom);
fflush(stdin);
printf("\n Entrer le Prenom : ");
gets(Etud.Prenom);
fflush(stdin);
printf("\n Entrer votre email : ");
gets(Etud.email);
printf("\n Entrer votre date de naissance : ");
gets(Etud.datenaiss);
fflush(stdin);
fprintf(F, "%d,%s,%s,%s,%s\n",  Etud.Num, Etud.Nom, Etud.Prenom, Etud.email, Etud.datenaiss);
fclose(F);
}