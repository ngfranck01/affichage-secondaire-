//--------Modification d'un etudiant--------
void modifierEtudiant()
{
        FILE *Fich,  *F;
        int num, i;
        char rep = 'n';
        printf("\n Entrez le numero de l'etudiant a modifier :");
        scanf("%d", &num);
        fflush(stdin);
        if(rech(num) == 1)
    {
        printf("\n Voulez vous vraiment modifier o/n");
        scanf("%c", &rep);
        fflush(stdin);
        printf("%c", rep);
        if (rep == 'o' ||  rep == 'o')
        {
            FILE *Fich, *F;
            F = fopen("Etudiant.txt", "a+");
            do
            {
                fscanf(F, "%d ;%s ;%s; %s;%s \n", &Etud.Num, &Etud.Nom, &Etud.Prenom, &Etud.Prenom, &Etud.email,&Etud.datenaiss);
                if (num == Etud.Num)
                 {
                        Etud.Num = num;
                        printf("\n Entre le Nouveau Nom : ");
                        gets(Etud.Nom);
                        fflush(stdin);
                        printf("\n Entre le Nouveau Prenom : ");
                        gets(Etud.Prenom);
                        fflush(stdin);
                        printf("\n Entre le Nouvel Email : ");
                        gets(Etud.email);
                        printf("\n Entre la Nouvelle Date naissance : ");
                        gets(Etud.datenaiss);
                        fflush(stdin);
                 }
                 fprintf(Fich,"%d;%s;%s;%s;%s \n", Etud.Num, Etud.Nom, Etud.Prenom, Etud.email,Etud.datenaiss);
            }while (!feof(F));
            fclose(Fich);
            fclose(F);
            remove("Etudiant.txt");
            rename("TempEtudiant.txt", "Etudiant.txt");
            printf("\n Modification a reussie");
        }
        else{
                printf("\n Modification a été annulé");
        }
    }
    else
    {
            printf("\n ce numero n'existe pas");
    }
}