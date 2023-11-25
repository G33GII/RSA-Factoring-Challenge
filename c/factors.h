#ifndef FACTORS_H
#define FACTORS_H


#define _GNU_SOURCE

#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include <ctype.h>
#include <gmp.h>

/**
 *
*/
typedef struct _fact
{
    char *Gline;
    FILE *Fptr;
    int Rd;


}_GLV_;

extern _GLV_ EX;    /* GLV Global Variable */

void _find_div(void);
void largenum(void);
void smallnum(void);
void slt_num(void);



#endif /* End of Include Guard */
