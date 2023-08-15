# Dr-Quine
[Quine](https://en.wikipedia.org/wiki/Quine) and Self-Replicating project by 42 School

## Description
The goal of this project is coding three different quines in C.

Colleen is a simple quine that prints its own code in stdout.

Grace is a self-replicating program that writes its own code into a file called `Grace_kid.c`.

Sully is a polymorphic self-replicating program that writes its code into a new file,
modifing a variable called `number`, compiling and executing it.
As the number in the program is set to 5, it will be executed 5 times by 5 different
processes, each one of them changing the variable `number` to `number - 1`

The educational value of this project is learning about quines, self-replicating and polymorphic
techniques that some types of malware can use to spread themselves into a system or network.

## Usage
### Compiling and Running
Run `make Colleen` to compile Collen and execute it with `./Collen`.
Run `make Grace` to compile Grace and execute it with `./Grace`.
Run `make Sully` to compile Sully and execute it with `./Sully`.

### Cleaning
In order to clean the files generated, run `make suclean`.
