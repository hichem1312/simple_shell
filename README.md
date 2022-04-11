# simple_shell
** Simple shell 
[MY github repostorie](https://github.com/hichem1312/simple_shell)
* hello my name is abdelkaderraddai today as a colaboration between me and my friend hichemmaatoug we created our simple shell that do Basic lifetime of a shell
Let’s look at a shell from the top down. A shell does three main things in its lifetime.

Initialize: In this step, a typical shell would read and execute its configuration files. These change aspects of the shell’s behavior.
Interpret: Next, the shell reads commands from stdin (which could be interactive, or a file) and executes them.
Terminate: After its commands are executed, the shell executes any shutdown commands, frees up any memory, and terminates.
These steps are so general that they could apply to many programs, but we’re going to use them for the basis for our shell. Our shell will be so simple that there won’t be any configuration files, and there won’t be any shutdown command. So, we’ll just call the looping function and then terminate. But in terms of architecture, it’s important to keep in mind that the lifetime of the program is more than just looping.

![alt text](https://media.geeksforgeeks.org/wp-content/uploads/cli_example.png)
*Basic loop of a shell
So we’ve taken care of how the program should start up. Now, for the basic program logic: what does the shell do during its loop? Well, a simple way to handle commands is with three steps:

Read: Read the command from standard input.
Parse: Separate the command string into a program and arguments.
Execute: Run the parsed command.

![alt text](https://upload.wikimedia.org/wikipedia/commons/thumb/6/67/Collaboration_logo_V2.svg/1280px-Collaboration_logo_V2.svg.png)