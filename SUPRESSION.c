//--------supression d'etudiants--------
void supprimerEtudiant()
{
    char rep;
    int NumRech;
    printf("Entrez le numero de l'Etudiant a supprimer");
    scanf("%d", &NumRech);
    fflush(stdin);
    if (rech(NumRech) == 1)
    {
        printf("\n voulez vous vraiment supprimer o/n");
        scanf("%c", &rep);
        fflush(stdin);
        if (rep == 'o' || rep == 'o')
        {
            FILE *Fich, *F;
            F = fopen("Etudiant.txt", "a+");
            do
            {
                fscanf(F, "%d ;%S ;%s; %s;%s \n", &Etud.Num, &Etud.Nom, &Etud.Prenom, &Etud.email,&Etud.datenaiss);
                if (NumRech != Etud.Num)
                {
                    fprintf(Fich, "%d,%s,%s,%s,%s\n", Etud.Num,Etud.Nom, Etud.Prenom, Etud.email,Etud.datenaiss); 
                }

            } while (!feof(F));
            fclose(Fich);
            remove("Etudiant.txt");
            rename("TempEtudiant.txt", "Etudiant.txt");
            printf("Suppression Effectuée avec sucess");
        }
        else
        }
            printf("\n ce numero d'etudiant n'existe pas");
}