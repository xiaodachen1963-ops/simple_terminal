#include <stdio.h>
#include <string.h>
#include "command.h"

int create_file_(char file[20]){
    char content[40];
    char bool_[4];
    printf("Do you want create file with content? Y/N>");
    if(fgets(bool_,sizeof(bool_),stdin) == NULL){
    }
    bool_[strcspn(bool_,"\n")] = 0;
    if((strcmp(bool_,"Y\0") == 0) || (strcmp(bool_,"y\0") == 0)){
        printf("Please input your content to this file>");
        scanf("%s",content);
        printf("Creating file\n");
        FILE *path = fopen(file,"w");
        fprintf(path,"%s\n",content);
        printf("Successed\n");
        fclose(path);
    }else if((strcmp(bool_,"N\0") == 0) || (strcmp(bool_,"n\0") == 0)){
        printf("Creating file\n");
        FILE *path = fopen(file,"a");
        printf("Successed\n");
        fclose(path);
        return 0;
    }
    return 0;
}
