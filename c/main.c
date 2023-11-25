#include "factors.h"

_GLV_ EX = {NULL, NULL, 0};

/**
 * main - main function
 * @ac:
 * @av:
 * Return:
*/
int main (int ac, char **av)
{
    FILE *FP;            /* FILE ptr for getline */
    char *BFF = NULL;   /* Ptr to getline generated buffer */
    size_t LN = 0, RD = 0; /* LN: Ptr to size of buffer | RD: Len of chars copied */
    int len;

    (void)ac;
    if ((FP = fopen(av[1], "r")) == NULL)
    {
        perror("Error opening the file");
        return (1);
    }
    EX.Fptr = FP;

    while (RD != EOF)
    {
        RD = getline(&BFF, &LN, FP);
        EX.Gline = BFF;
        printf("%s\n", BFF);
        EX.Rd = RD;
        slt_num();
    }

    free(EX.Gline);
    fclose(EX.Fptr);
    return (0);
}
