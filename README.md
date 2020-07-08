# mini-RPG
Just trying to learn C++ by creating a simple text game.\
**Please note** that this is not production level code. This is my playground to experiment and learn C++. I will gladly accept constructive feedback but please do not ridicule me because you disapprove of the way I coded something.
# Table of Contents
* [C++ Syntax and Concepts to Learn](#c++-syntax-and-concepts-to-learn)
* [Bugs](#bugs)
* [To Do List](#to-do-list)

# C++ Syntax and Concepts to Learn
Concepts | Syntax
------------ | -------------
:white_check_mark: Switch | :white_check_mark: Varibles
:white_check_mark: Array and vector | :white_check_mark: Logical Operators
:black_square_button: Static | :white_check_mark: If statements
:white_check_mark: Makefile | :white_check_mark: Functions
:black_square_button: cmake | :white_check_mark: For Loop
:white_check_mark: Pointers and references | :white_check_mark: While loop
:black_square_button: Smart pointers | :white_check_mark: Classes
:white_check_mark: header files | :white_check_mark: Constructors 
:white_check_mark: precompiled header | :white_check_mark: Inheritance 
:black_square_button: Namespace | :white_check_mark: Composition 
:black_square_button: Libraries | :black_square_button: Lambdas
:white_check_mark: Stack vs Heap Memory | :black_square_button: Unions
:black_square_button: Const | :black_square_button: sorting
:black_square_button: C/C++ casting | 
:black_square_button: Access Specifiers: Protected | 
:black_square_button: Lvalues and Rvalues | 
:black_square_button: Move Semantics | 
:black_square_button: Friend | 
:white_check_mark: Struct |
:white_check_mark: Initializer List |

# Bugs 
:white_check_mark: **Bug 1**
* Quick menu printing twice inside the while loop on the first loop.
![Bug 1](https://i.imgur.com/AjFiy5S.png)

:white_check_mark: **Bug 2** 
* "What is your name? " printing multiple times.
![Bug 2](https://i.imgur.com/YrTU1St.png)

:white_check_mark: **Bug 3**
* Not compiling correctly after editing header files.
    * Class attributes in private are not updated when compiled. 
    * **FIX:** Provided correct dependencies to Makefile

:black_square_button: **Bug 4** 
* Overloads when wrong data type is enter.  
![Bug 3](https://i.imgur.com/lvPDtcc.png?1)


# To Do List
* :white_check_mark: Inventory to hold items
* :black_square_button: Figure out Trials for Player stats
    * :white_check_mark: Luck
    * :white_check_mark: Speed
    * :white_check_mark: Intelligence
    * :black_square_button: Wisdom
    * :black_square_button: Strength
    * :black_square_button: Charisma
* :white_check_mark: Quick menu to display actions
* :white_check_mark: Full menu to display all information
    * :white_check_mark: Use Player and Inventory pointers to update Full Menu
* :black_square_button: Actions class? e.g. attack, heal, move
* :black_square_button: Map
* :black_square_button: Levels
* :black_square_button: Enemies
* :black_square_button: Leveling up
* :white_check_mark: Classes e.g. Warrior, Sorcerer, Hunter
    * :black_square_button: subclass?
* :black_square_button: Equipment
* :black_square_button: Turn based battle system?
* :black_square_button: Installation file
