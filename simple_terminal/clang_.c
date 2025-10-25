#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "command.h"

int clang_(char file[20],char result[20]){
    char string[80];
    snprintf(string,sizeof(string),"clang -std=c17 -o2 %s -o %s",file,result);
    int ret = system(string);
    return ret;
}
