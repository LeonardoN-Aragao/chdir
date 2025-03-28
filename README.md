# chdir
Implementation in C for Unix cd comand

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
