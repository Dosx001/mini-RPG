# mini-RPG
Just trying to learn C++ by creating a simple text game.\
**Please note** that this is not production level code. This is my playground to experiment and learn C++. I will gladly accept constructive feedback but please do not ridicule me because you disapprove of the way I coded something.
# Table of Contents
* [Syntax and Concepts to Learn](#syntax-and-concepts-to-learn)
* [Bugs](#bugs)
* [To Do List](#to-do-list)
* [Notes](#notes)

# Syntax and Concepts to Learn
This table is just meant for me to keep track of concepts I have learned or need to learn.
Concepts Learned | In Progess | Syntax Learned | In Progess
--- | --- | --- | ---
Switch | Static | Varibles | Lambdas
Array and vector | Smart pointers | Logical Operators | Conditional Expression
Makefile | Namespace | If statements | List Comprehension
cmake | Libraries | Functions
Pointers and references | C/C++ casting | For Loop
header files | Friend | While loop
precompiled header | Access Specifiers: Protected| Class
Stack vs Heap Memory | Lvalues and Rvalues | Constructors
Const | Move Semantics | Inheritance
Struct | | Composition
Initializer List | | Sorting

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
    * :white_check_mark: Wisdom
    * :white_check_mark: Strength
    * :black_square_button: Charisma
* :white_check_mark: Quick menu to display actions
* :white_check_mark: Full menu to display all information
    * :white_check_mark: Use Player and Inventory pointers to update Full Menu
* :black_square_button: ~~Actions class? e.g. attack, heal, move~~
* :black_square_button: Map
* :black_square_button: Levels
* :white_check_mark: Enemies
* :black_square_button: Leveling system
* :white_check_mark: Classes e.g. Warrior, Sorcerer, Hunter
    * :black_square_button: subclass?
* :black_square_button: Equipment
* :white_check_mark: Turn based battle system?
* :black_square_button: Installation file

# Notes
## Player Class Abilities Ideas
* Warrior
    * Self Damage reduction
    * Damage increase
    * Special attack
* Sorcerer
    * Restore full health
    * Confuse enemy
    * Special attack
* Hunter
    * Increase crit
    * Dodge
    * Special attack