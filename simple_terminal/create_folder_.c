#include <stdio.h>
#include <stdlib.h>
#include "command.h"

int create_folder_(char name[20]){
    char string[24];
    snprintf(string,sizeof(string),"mkdir %s",name);
    int ret = system(string);
    return ret;
}
