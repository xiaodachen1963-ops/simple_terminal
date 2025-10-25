#include <stdio.h>
#include <direct.h>
#include "command.h"

int return_(){
    int ret = _chdir("..");
    if(ret == 0){
        char path[260];
        _getcwd(path,sizeof(path));
        printf("Moved back to: %s\n",path);
    }else{
        printf("Failed to move back\n");
    }
    return 0;
}
