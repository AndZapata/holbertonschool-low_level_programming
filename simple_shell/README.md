___

# Simple Shell

`0x15.c` proyect from holberton school, it's a proyect to implement a simple
shell,
which is doing in C programming language. Inside the code this proyect contains:
  - A function to take the lenght of a string.
  - A function to concatenate two strings.
  - A function to compare strings.
  - A function to duplicate strings.
  - A function to convert strings of numbers to integers.
  - Functions to parsed strings and take the token symbol.
  - Functions to take the "PATH", and divide it into directories
  - A function to "exit" in a correct close process.
  - Functions to free() all mallocs used.
  - A function excecute that use the exec function to execute the arguments.
  - Prompt that is the terminal o shell where you input the commands.

___

### Shell Description

> Shell is a user interface for access to
> an operating system's services. In other
> words a command-line interface, or a
> graphical user interface. About a Unix
> shell, is both an interactive command
> language and a scripting language, and
> is used by the operating system to control
> the execution of the system using shell scripts.

___

### How to compile
> Use the next code to compile the shell in your command prompt:
 ```sh
 gcc -g -Wall -Werror -Wextra -pedantic *.c -o hsh --debug
 ```
 - Where the gcc is the compiler used to compile the program.
 - The `-g` and `--debug` flag is for show all the descriptions in debug format.
 - The  flags `-Wall -Werror -Wextra -pedantic` show all warnings treat as an error.
 - The "`*.c`" means that all the files with .c extention will be compiled.
 - The `-o` flag is used for the output file direction.

 ___

### How to use

 - You need to include the shell.h local library or header file.
 - After the compilation process use the excecutable command: `./hsh` and
click on
 enter "`\n`".
 - If you want to verify the free() process in the shell I recommend to use
 valgrind and the executable

___

### In the present shell is posible to use common commands like:

| command | Meaning |
| --- | --- |
| `ls` | List the file in PATH (It's possible to use the flags) |
| `pwd` | Print the current directory |
| `env` | Print the environment |
| `echo` | Print the next argument after write the echo command |
| `exit` | Close the shell in a correct end process |

___

### Interactive case example
```hs
vagrant@vagrant-ubuntu-trusty-64:~$ ./hsh
$(╯°□°）╯  ls
$(╯°□°）╯  0x15.c holbertonschool-zero_day pruebaprintf.c Betty
my_first_repository pruebas holberton-system_engineering-devops pr_shell
shell_test holbertonschool-low_level_programming printf
$(╯°□°）╯
```
### Valgrind case example in a interactive mode

```hs
vagrant@vagrant-ubuntu-trusty-64:~$ valgrind ./hsh
==3864== Memcheck, a memory error detector
==3864== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==3864== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==3864== Command: ./juanito
==3864==
$(╯°□°）╯  exit
==3864==
==3864== HEAP SUMMARY:
==3864==     in use at exit: 0 bytes in 0 blocks
==3864==   total heap usage: 22 allocs, 22 frees, 16,768 bytes allocated
==3864==
==3864== All heap blocks were freed -- no leaks are possible
==3864==
==3864== For counts of detected and suppressed errors, rerun with: -v
==3864== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
___

### Script mode example

```hs
vagrant@vagrant-ubuntu-trusty-64:~$ /bin/ls | ./hsh
$(╯°□°）╯  0x15.c holbertonschool-zero_day pruebaprintf.c Betty
my_first_repository pruebas holberton-system_engineering-devops pr_shell
shell_test holbertonschool-low_level_programming printf
vagrant@vagrant-ubuntu-trusty-64:~$
```

### Valgrind case example in the script mode

```hs
vagrant@vagrant-ubuntu-trusty-64:~$ valgrind /bin/ls ./hsh
==3864== Memcheck, a memory error detector
==3864== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==3864== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==3864== Command: ./juanito
==3864==
$(╯°□°）╯  /bin/ls
==3864==
==3864== HEAP SUMMARY:
==3864==     in use at exit: 0 bytes in 0 blocks
==3864==   total heap usage: 22 allocs, 22 frees, 16,768 bytes allocated
==3864==
==3864== HEAP SUMMARY:
==3864==     in use at exit: 0 bytes in 0 blocks
==3864==   total heap usage: 22 allocs, 22 frees, 16,768 bytes allocated
==3864==
==3864== All heap blocks were freed -- no leaks are possible
==3864==
==3864== For counts of detected and suppressed errors, rerun with: -v
==3864== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
___
#### AUTHORS

Paula Gutierrez | First Bogota Cohort | [![N|Solid](https://www.allininteractive.com/wp-content/uploads/2015/04/twitter.png)](https://twitter.com/AndZapata1) |

Samuel Florez | First Bogota Cohort | [![N|Solid](https://www.allininteractive.com/wp-content/uploads/2015/04/twitter.png)](https://twitter.com/samscode) |


________