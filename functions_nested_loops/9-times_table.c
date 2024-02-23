/* Déclaration de la fonction times_table */
void times_table(void) {
    int multiplicateur = 0;
    int resultat;

    printf("Table de multiplication de 9 :\n");

    while (multiplicateur <= 10) {
        resultat = 9 * multiplicateur;
        printf("9 * %d = %d\n", multiplicateur, resultat);
        multiplicateur++;
    }
}
