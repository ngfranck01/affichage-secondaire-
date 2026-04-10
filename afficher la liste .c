//--------Afficher la liste des etudiants--------
void AfficherTt()
{
    FILE *F;
    F = fopen("Etudiant.txt", "a+");
    printf("\n La liste des Etudiants est :");
    printf("\n Numero \t Nom \t Prenom \t Filiere:\n");
    printf("\n");
    do
    {
        fscanf(F, "%d ,%s ,%s, %s , %s\n", &Etud.Num, &Etud.Nom, &Etud.Prenom, &Etud.email, &Etud.datenaiss);
        fflush(stdin);
        printf("%d \t", Etud.Num);
        printf("\t %s",Etud.Nom);
        printf("\t %s",Etud.Prenom);
        printf("\t %s",Etud.email);
        printf("\t %s",Etud.datenaiss);
        printf("\n");
    } while (!feof(F));
    fclose(F);
}