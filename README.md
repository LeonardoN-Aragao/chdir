# chdir
Implementation in C for Unix cd comand

Compile with:
    ```$ gcc main.c -o chdir ```

Run with:
    ```$ ./chdir [SOMETHING]```

-----

To try every scenary use: <br/>
    + ```$ mkdir a```<br/>
    + ```$ ./chdir -> will return to upper directory```<br/>
    + ```$ ./chdir a -> will change the directory to /a```<br/>
    + ```$ ./chdir b -> return error because b doesn't exist```<br/>
    + ```$ ./chdir a b -> return error too many arguments```<br/>
