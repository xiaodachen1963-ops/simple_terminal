#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "command.h"

int system_(char command[20]){
    char string[21];
    snprintf(string,sizeof(string),"%s",command);
    int ret = system(string);
    return ret;
}
