#include <stdio.h>
#include <string.h>
#include "util.h"

int nextInstruction(char *Word, double *key)
{
    int  returnV;

    fscanf(stdin, "%s", Word);

    if (strcmp(Word, "Stop")==0) return 1;
    if (strcmp(Word, "Print")==0) return 1;
    if (strcmp(Word, "Write")==0) return 1;
    if (strcmp(Word, "Max")==0) return 1;

    if (strcmp(Word, "Insert")==0){
        returnV = fscanf(stdin, "%lf", key);
        if (returnV == 1){
            return 1;
        }else{
            return 0;
        }
    }

    if (strcmp(Word, "Append")==0){
        returnV = fscanf(stdin, "%lf", key);
        if (returnV == 1){
            return 1;
        }else{
            return 0;
        }
    }

    if (strcmp(Word, "Delete")==0){
        returnV = fscanf(stdin, "%lf", key);
        if (returnV == 1){
            return 1;
        }else{
            return 0;
        }
    }

    return 0;
}
