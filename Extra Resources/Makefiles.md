
Hey guys!! Had a go at the makefule stuff - this is the gist of what I learned


** GENERAL NOTES **

Norminette does not check makefiles.

Makefiles are basically just a more complicated way of doing what we're used to.
In the fusture when dealing with things like third party libraries and stuff, all the 
flags are a bitch to type out so making one of these is pretty essential.

Makefiles basically compile .c files into .o files then turns all of the .o files into one executable file.

$(VARIABLE) references the variable you list inside the brackets. 

Makefiles aren’t very smart they run exactly what you tell them too - when they error they won’t tell you what is causing errors.

Fun fact!! - The official name for rules is recepies which is why the put a reciepe at the start of our subject doc!


** VARIABLE NOTES **

In this case we have -
CC
  - compiler

CFlags
  - All the flags we want to run with
  - g = put out debug info (shows what complied code looks like as regular code))

 SRC
   - All our files
   - Everytime we add or remove a file change what is listed by SRC becuase otherwise things error

OBJ
  - Objects
  - $(SRC:.c=.o) is making a copy of every source file but when it copies it, it every .c file is replaced to .o 

NAME 
	- The name of what you want the make to call the executable file we are creating.



** RULES NOTES **

Things like NAME, CLEAN, FCLEAN, etc are rules - You can set rules to do different things.

If the rule is followed by a : and then another rule, that second rule is a 'dependency' or 'prerequisite'. 

ALL
- The 'all' rule is run when you just run 'make' in terminal.
- In the makefile I made I set it so 'NAME' is a dependency to ALL, so if you call ALL it runs NAME first.
- Remember the 'all' rule doesn’tdo anything - in this instance just calls name.
    - (This is because if you run *just* make it will run the name rule rather than having to type out make rush-02)

CLEAN
- Removes every .o file (the copies we’ve made)

FCLEAN
- Removes the compiled code (eg. rush-02). I set it so it has CLEAN as dependency which means it removed the .o files, and then the compiled file.

NAME: 
- The name rule is basically the meat and bones
- It has one dependency -obj which doesn’t have its own rue but it doesn’t need one bc we have a separate rule for the .o files (OBJ).
- This rule gets run once on each obj file, for every .c file it runs the cc, the flags, and if you have -c in the flags it turn it into a c file.
- It compiles it but not in a way that is mean to be run - it turns the main function into a function called main. It doesn’t set it to run anything in particular.

.PHONY:
- This one I don’t understand but I know that if you don’t have it everything breaks

RE:
- The re rule runs fclean and recompile’s (kind of ike a refresh or redo)

THE SYMBOLS:
  $< = name of the first dependency (which is the c.file it is being run on)

  % for every .o file it has the .c file as a dependency.

  -o = you can specify the name of it

  $@ = the name of the rule

  -c compile it to something that isn’t meant to run  (compiles to object file)

  $^ all of the dependencies (not just the first one like $<)
