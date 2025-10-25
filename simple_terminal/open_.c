#include <stdio.h>
#include <string.h>
#include "command.h"

int open_(char file[20]){
    printf("Mode:\n\n");
    printf("write\nread\nadd\n\n");
    char modes[3][8] = {
        {'a','d','d','\0'},
        {'r','e','a','d','\0'},
        {'w','r','i','t','e','\0'}
    };
    char mode;
    char input[8];
    printf("Please select a mode>");
    scanf("%7s",input);
    getchar();
    if(strcmp(input,"add") == 0){
        mode = 'a';
    }else if(strcmp(input,"read") == 0){
        mode = 'r';
    }else if(strcmp(input,"write") == 0){
        mode = 'w';
    }else{
        printf("Unknown mode\n");
        return 1;
    }
    if(mode == 'a'){
        FILE *path = fopen(file,"a");
        if(path == NULL){
            return 1;
        }
        char content[40];
        printf("Please enter your text>");
        scanf("%s",content);
        fprintf(path,"%s\n",content);
        printf("Successed");
        fclose(path);
    }else if(mode == 'r'){
        FILE *path = fopen(file,"r");
        if(path == NULL){
            return 1;
        }
        char content[256];
        while(fgets(content,sizeof(content),path) != NULL){
            printf("%s",content);
        }
        fclose(path);
    }
    return 0;
}
