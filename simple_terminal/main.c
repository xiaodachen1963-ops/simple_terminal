#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "command.h"

int main(){
    char input[20];
    printf("Simple-terminal(version 1.1.2.24.10.2025)\n\n");
    while(1){
        printf("simple-cline>");
        if(fgets(input,sizeof(input),stdin) == NULL){
            break;
        }
        input[strcspn(input,"\n")] = 0;
        if(strcmp(input,"of -tx") == 0){
            printf("Please input file name>");
            if(fgets(input,sizeof(input),stdin) == NULL){
                break;
            }
            input[strcspn(input,"\n")] = 0;
            open_(input);
        }else if(strcmp(input,"cf -tx") == 0){
            printf("Please input file name>");
            if(fgets(input,sizeof(input),stdin) == NULL){
                break;
            }
            input[strcspn(input,"\n")] = 0;
            create_file_(input);
        }else if(strcmp(input,"ex") == 0){
            break;
        }else if(strcmp(input,"clang -c") == 0){
            char file[20];
            char program[20];
            printf("Please input a compile file>");
            if(fgets(file,sizeof(file),stdin) != NULL){
                file[strcspn(file,"\n")] = 0;
            }else{
                return 1;
            }
            printf("Please input a name of program>");
            if(fgets(program,sizeof(program),stdin) != NULL){
                program[strcspn(program,"\n")] = 0;
            }else{
                return 1;
            }
            clang_(file,program);
        }else if(strcmp(input,"cf") == 0){
            printf("Please input a name for folder>");
            if(fgets(input,sizeof(input),stdin) == NULL){
                break;
            }
            input[strcspn(input,"\n")] = 0;
            create_folder_(input);
        }else if(strcmp(input,"pf") == 0){
            print_file_();
        }else if(strcmp(input,"of") == 0){
            printf("Please input a folder name>");
            if(fgets(input,sizeof(input),stdin) == NULL){
                break;
            }
            input[strcspn(input,"\n")] = 0;
            open_folder_(input);
        }else if(strcmp(input,"rf") == 0){
            return_();
        }else if(strcmp(input,"df") == 0){
            printf("Please input a folder name to delete>");
            if(fgets(input,sizeof(input),stdin) == NULL){
                break;
            }
            input[strcspn(input,"\n")] = 0;
            delete_folder_(input);
        }else if(strcmp(input,"s") == 0){
            printf("Please input a commmand to implement>");
            if(fgets(input,sizeof(input),stdin) == NULL){
                break;
            }
            input[strcspn(input,"\n")] = 0;
            system_(input);
        }else if(strcmp(input,"h") == 0){
            help_();
        }else{
            printf("Unknown command: %s\n",input);
        }
    }
    return 0;
}
