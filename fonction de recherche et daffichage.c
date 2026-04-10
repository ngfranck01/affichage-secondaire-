/*-------recherche et affichage-------*/
void Rechercher()
{
     int NumR;
     printf("Entrer le numero de l'etudiant a rechercher\n");
     scanf("%d", &NumR);
     FILE *F;
     F = fopen("Etudiant.txt", "a+");
     do
    {
        fscanf(F, "%d ;%s ;%s; %s ;%s\n", &Etud.Num, Etud.Nom, &Etud.Prenom, &Etud.email, Etud.datenaiss);
        if  (NumR == Etud.Num)
    {
        printf("--------Informations Sur l'Etudiant--------:\n \n");
        printf("Numero\t: %d \n", Etud.Num);
        printf("Nom\t: %s \n", Etud.Nom);
        printf("Prenom\t: %s \n", Etud.Prenom);
        printf("email\t: %s \n", Etud.email);
        printf("date naissance\t: %s \n", Etud.datenaiss);
    }
    
}  while(!feof(F));
fclose(F);











}