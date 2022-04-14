# simple_shell
* hello my name is abdelkaderraddai today as a colaboration between me and my friend hichemmaatoug we created our simple shell that do Basic lifetime of a shell
Let’s look at a shell from the top down. A shell does three main things in its lifetime.
# How does the shell work
Initialize: In this step, a typical shell would read and execute its configuration files. These change aspects of the shell’s behavior.
Interpret: Next, the shell reads commands from stdin (which could be interactive, or a file) and executes them.
Terminate: After its commands are executed, the shell executes any shutdown commands, frees up any memory, and terminates.
These steps are so general that they could apply to many programs, but we’re going to use them for the basis for our shell. Our shell will be so simple that there won’t be any configuration files, and there won’t be any shutdown command. So, we’ll just call the looping function and then terminate. But in terms of architecture, it’s important to keep in mind that the lifetime of the program is more than just looping.
 # usage 
 check this repo to get our code (https://github.com/hichem1312/simple_shell)
 # exemple 
(![278577448_336841465102819_4728936921020978210_n (1)](https://user-images.githubusercontent.com/98315662/163293475-6dc74a43-d613-40b2-a368-c5cc54dfa467.gif)
)
* $ ./hsh
* ($) /bin/ls
* hsh main.c shell.c
* ($)
* ($) exit
* $ 
* $ echo "/bin/ls" | ./hsh
* hsh main.c shell.c test_ls_2
* $
* $ cat test_ls_2
* /bin/ls
*/bin/ls
* $
* $ cat test_ls_2 | ./hsh
* hsh main.c shell.c test_ls_2
* hsh main.c shell.c test_ls_2
* $




*Basic loop of a shell
So we’ve taken care of how the program should start up. Now, for the basic program logic: what does the shell do during its loop? Well, a simple way to handle commands is with three steps:

Read: Read the command from standard input.
Parse: Separate the command string into a program and arguments.
Execute: Run the parsed command.
# compile 
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

# execute :
./hsh


# systeme call            |
--------------------------||
* execve (man 2 execve)     |
* exit (man 3 exit)         |      |
* fflush (man 3 fflush)     |
* fork (man 2 fork)         |
* free (man 3 free)         |
* getcwd (man 3 getcwd)         |
* isatty (man 3 isatty)     |
* kill (man 2 kill)         |
* malloc (man 3 malloc)     |
* open (man 2 open)         |
* opendir (man 3 opendir)   |
* perror (man 3 perror)     |
* read (man 2 read)         |  |
* stat (__xstat)                   |
* strtok (man 3 strtok)     |
* wait (man 2 wait)         |
* waitpid (man 2 waitpid)   |      |
* write (man 2 write)       |
# Collaborators 
Hichem maatoug
Abdelkader raddadi
![alt text](https://upload.wikimedia.org/wikipedia/commons/thumb/6/67/Collaboration_logo_V2.svg/1280px-Collaboration_logo_V2.svg.png)
