#include <unistd.h> 
#include <stdio.h> 
#include <string.h>

/*
    wrote by: Leonardo Nunes Aragão
    date: 04/01/2025

    Compile with:
        gcc main.c -o chdir 
    
    Run with:
        ./chdir [SOMETHING]

    To try every scenary use:
        mkdir a
        ./chdir -> will return to upper directory
        ./chdir a -> will change the directory to /a
        ./chdir b -> return error because b doesn't exist
        ./chdir a b -> return error too many arguments

*/

void example() {
    int buffSize = 100;
    char s[buffSize]; 
 
    printf("%s\n", getcwd(s, buffSize)); 
    chdir(".."); 
    //setenv("pwd",getcwd(s, buffSize));
    printf("%s\n", getcwd(s, buffSize));

    return;
}

int main(int numArgs, char ** args) {

    int buffSize = 100;
    char s[buffSize]; 

    //No args return to upper directory
    if(numArgs == 1){
        chdir("..");
        printf("%s\n", getcwd(s, buffSize));
    }
    else if(numArgs == 2)
        // Changing the current working directory(cwd) 
        if (chdir(args[1]) != 0) {
            char message[] = "Error: chdir failed trying to change to /";
            strcat(message, args[1]);
            perror(message); 
        }
        else{    
            printf("%s\n", getcwd(s, buffSize));
    }
    else {
        printf("Error: too many arguments\n"); 
        return 1;
    }
    return 0;
 
} 
