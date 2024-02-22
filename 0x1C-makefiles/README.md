# C - Makefiles

This project focused on practicing writing Makefiles efficiently. 

## Tests

* [tests](./tests): Directory containing test files.

## Helper Files

* [school.c](./school.c): C function that displays a seahorse in text, used for Makefile practice.
* [main.c](./main.c): Main C function executing the function defined in [school.c](./school.c).

## Header File

* [m.h](./m.h): Header file defining the function prototype used in `school.c`.

## Tasks

* **0. make -f 0-Makefile**
  * [0-Makefile](./0-Makefile): Makefile creating an executable `school` based on [school.c](./school.c) and [main.c](./main.c). Includes:
    * Rule `all` for building the executable.

* **1. make -f 1-Makefile**
  * [1-Makefile](./1-Makefile): Makefile creating an executable `school` based on [school.c](./school.c) and [main.c](./main.c). Features:
    * Variable `CC` defining the compiler.
    * Variable `SRC` defining the `.c` files to compile.
    * The `all` rule recompiles only updated source files.

* **2. make -f 2-Makefile**
  * [2-Makefile](./2-Makefile): Makefile creating an executable `school` based on [school.c](./school.c) and [main.c](./main.c). Builds upon [1-Makefile](./1-Makefile) with:
    * Variable `OBJ` defining the `.o` files to compile.
    * Variable `NAME` defining the name of the executable.

* **3. make -f 3-Makefile**
  * [3-Makefile](./3-Makefile): Makefile creating an executable `school` based on [school.c](./school.c) and [main.c](./main.c). Further extends [2-Makefile](./2-Makefile) with:
    * Rule `clean` deleting temporary files and the executable.
    * Rule `oclean` deleting object files.
    * Rule `fclean` deleting all temporary files, the executable, and object files.
    * Rule `re` forcing recompilation of all source files.
    * Variable `RM` defining the command to delete files.

* **4. A complete Makefile**
  * [4-Makefile](./4-Makefile): Makefile creating an executable `school` based on [school.c](./school.c) and [main.c](./main.c). Extends [3-Makefile](./3-Makefile) with:
    * Variable `CFLAGS` defining compiler flags.

* **5. Island Perimeter**
  * [5-island_perimeter.py](./5-island_perimeter.py): Python function returning the perimeter of an island defined in a grid.
    * Prototype: `def island_perimeter(grid):`
    * Parameter `grid`: List of lists of integers.
      * `0` represents water.
      * `1` represents land.
      * Grid cells are connected horizontally/vertically (not diagonally).
      * The grid is rectangular, with width and height not exceeding 100.
      * The grid is completely surrounded by water, with exactly one island or nothing.
      * The island does not contain lakes (water inside disconnected from surrounding land).

* **6. make -f 100-Makefile**
  * [100-Makefile](./100-Makefile): Makefile creating an executable `school` based on [school.c](./school.c) and [main.c](./main.c). Enhances [4-Makefile](./4-Makefile) with:
    * No definition of the variable `RM`.
    * Omission of the string `$(CFLAGS)`.
    * Compilation prevention if the header `m.h` is missing.
    * Functionality even with existing files with names identical to any of the Makefile rules in the current directory.

@bennyonye
