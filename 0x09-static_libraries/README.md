0x09. C - Static libraries

##0x09. C - Static libraries

#All my files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.
#The code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
#All the scripts will be tested on Ubuntu 20.04 LTS

#List of #TASKS can be seen below.

GitHub repository: alx-low_level_programming
Directory: 0x09-static_libraries


0. A library is not a luxury but one of the necessities of life

Create the static library libmy.a containing all the functions listed below:
If you haven’t coded all of the above functions create empty ones with the right prototype.
Don’t forget to push your main.h file to your repository. It should at least contain all the prototypes of the above functions.

File: libmy.a, main.h



1. Without libraries what have we? We have no past and no future.

Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.

File: create_static_lib.sh
