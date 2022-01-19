<h1 align="center">Documentation</h1>

###### This document was authored in 2019 by us before the Winter evaluation at our school. Here is the unabridged version from the old days as documented in our assignment records, since we have a sentimental attachment with this project and to the people who contributed to it. So, the language might occasionally sound childish. Also, the documentation in this README points to the [`ZASCDS16.CPP`](https://github.com/jay-io/ZAS-16/blob/dev/git-didnt-exist-before-2005/ZASCDS16.cpp) file and not to [`zas.cpp`](https://github.com/jay-io/ZAS-16/blob/dev/zas.cpp) in the repository root. The latter is more like an open-source version of the former. The compiled executable was built from the open-source version of the code, and the source file in `BIN/TURBOC3/SOURCE` is the same as `zas.cpp` in the root directory.

## Project description

The program that we’ve tried to build utilises the concept of data-structures, classes and objects in C++ as well as the primitive concepts of loops, global variables, functions, database management etc. along with some additional backlight graphics and audio effects.
The following are some salient points:
- The game consists of a character which is the user himself named after and initialised by the user’s *profile name*.
- This is basically a zombie survival game in which the user has to navigate through different levels which are like real life rooms that can be explored.
- The predefined levels have objects in them that can be exchanged for, used or worn (as protective clothing).
- The character possesses attributes: **health**, **armour** effectiveness and **attack** potential. It also has two slots for holding _weapons_ and an extra slot for armour-type _wearable objects_.
- The **Zombie** is an object from class **Enemy** and inherits the properties of the same.
- The objects, which are instances of the class **Obj**, have properties which are assigned to the slot of the character as soon as the user picks them up.
- Progression in the game is saved as statistics using the database concepts in file handling already implemented in the [unit standalone code](https://github.com/jay-io/ZAS-16/blob/dev/zas.cpp) that comes in association with the project in the following pages. The function `smenu()` qualifies to take care of the start menu for the program as well as for writing/reading data to/from the file.

## Header files [[as used in the source](https://github.com/jay-io/ZAS-16/blob/dev/zas.cpp)]

- `string.h` ➜ for functionality of `memcpy()`, `strcpy()`, `strlen()`, `strcmp()`, and `strcmpi()`;
- `dos.h` ➜ for `sound()`, `nosound()`, and `delay()`;
- `process.h` ➜ for `exit(0)`;
- `conio.h` ➜ for `getch()` and `clrscr()`;
- `stdio.h` ➜ for `gets()`;
- `stdlib.h` ➜ for calling CLS cmd. on DOSBOX as in statement `system(“CLS”)`;
- `iostream.h` ➜ for basic input/output functionality onto the console;
- `graphics.h` ➜ used throughout, refer `loadscr()` function in source code;
- `fstream.h` ➜ file handling;

## Variable description [[as used in the source](https://github.com/jay-io/ZAS-16/blob/dev/zas.cpp)]
```cxx
float health;  // global variable for the character’s health in the game
int points;    // this accumulates points scored after each zombie is killed
int kills;     // accumulates no. of zombies killed
char in[];     // stores room name to be displayed in inventory

// rest of the objects and vars. are either flags, temp. storage, counters or used to take input
```
###### ...and we were lazy :/

## Function description [[as used in the source](https://github.com/jay-io/ZAS-16/blob/dev/zas.cpp)]

```cxx
void titlebox(void);
	// displays top titlebar, whenever called
void updatestat(void);
	// contains the command to write the current profile data to file 
void smenu(void);
	// displays and controls the start menu functions
void replenish(int);
	// reinitiates the game progress for the next episode
void gameover(void);
	// displays player stats. when the character dies or completes the game
void zkillACue(void);
	// AudioFX
void gamelostACue(void);
	// AudioFX
void gamewinACue(void);
	// AudioFX
char cmdinp(char);
	// sends input information through prompt to the calling function
void infoscrn(void);
	// displays Project details on the first page
int ceil(float);
	// function to convert float health figure to integer type for the health bar
void askswap(void);
	// controls swap menu and object flow when weapons are chosen
void loadscrn(void);
	// utilizes the <graphics.h> header to display loading screen
void introd(void);
	// introduces game objective to the user
void initialise(void);
	// places objects in their rooms; also used with the replenishing function
void inventory(void);
	// displays inventory of the character
void numbar(float, int);
	// controls the health bar
void battle(int);
	// initiates and controls battle flow
int noprofile(void);
	// searches for any existing profile in database; returns 0 if file is empty

void livingroom(void);
void kitchen(void);
void backyard(void);
void localinfirmary(void);        // these functions control the rooms that carry objects
void streets(void);
void church(void);
void ps(void);

void livingroomtext(void);
void kitchentext(void);
void backyardtext(void);
void localinfirmarytext(void);    // these display the room overview on the console
void streetstext(void);
void churchtext(void);
void pstext(int);
```
## Class description [[as used in the source](https://github.com/jay-io/ZAS-16/blob/dev/zas.cpp)]
```cxx
class Profile {};    // used in file handling and statistics maintenance
class Obj {};        // used to initialize the real life objects
class RoomSlots {};  // used to initialize the Slots in the rooms that carry the objects
class Enemy {};      // used to initialize the three types of zombies for battle encounters
```
