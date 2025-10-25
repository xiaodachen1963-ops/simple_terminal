#include <direct.h>
#include <stdio.h>
#include "command.h"

int open_folder_(char name[20]){
    int ret = _chdir(name);  // 尝试切换当前目录
    if (ret == 0) {
        printf("Changed directory to: %s\n", name);
    } else {
        printf("Failed to enter folder: %s (maybe not exist)\n", name);
    }
    return 0;
}
