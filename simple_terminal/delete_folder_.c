#include <stdio.h>
#include <stdlib.h>
#include "command.h"

#ifdef _WIN32
#include <direct.h>
#define IS_WINDOWS 1
#else
#include <unistd.h>
#define IS_WINDOWS 0
#endif

int delete_folder_(char name[20]){
    int ret;
    if(IS_WINDOWS){
        char cmd[512];
        snprintf(cmd, sizeof(cmd), "rmdir /s /q \"%s\"",name);
        ret = system(cmd);
    }else{
        char cmd[512];
        snprintf(cmd, sizeof(cmd), "rm -rf \"%s\"",name);
        ret = system(cmd);
    }
    if(ret == 0){
        printf("Folder '%s' deleted successfully.\n",name);
        return 0;
    }else{
        perror("Error deleting folder");
        return 1;
    }
}
