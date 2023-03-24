# MY_SOKOBAN
**`1st year project with NCurses library`**
<br />
{EPITECH} The goal of this project is to develop a copy of Sokoban game in terminal mode, using the ncurses library.

## REQUIREMENTS

* [GCC](https://gcc.gnu.org/)
* [Make](https://www.gnu.org/software/make/)
* [NCURSES](https://fr.wikipedia.org/wiki/Ncurses) (for the bonus)

## HOW TO USE
Compilation

```
$>  make
```
Execution

```
$>  ./my_sokoban maps/map1
```

Help

```
$>  ./my_sokoban -h
```
![](screenshot/sokoban_help.png)

### Game
* Use arrows to move ```P```.
* Press ```SPACE BAR``` to reset.
* Put the ```X``` (boxes) on the ```O``` (storage locations).
* If all the boxes are on the storage locations, you win.
* If none of the boxes can be moved anymore, you lose.
## Map example
![](screenshot/sokoban_game.png)

## Coverage

- 01 - usage and input checks (75%)
- 02 - basic moves (100%)
- 03 - basic collisions and box on targets (50%)
- 04 - intermediate moves and collisions (83,3%)
- 05 - intermediate maps tests (75%)
- 06 - intermediate winning and losing conditions (0%)
- 07 - final moves and collisions (83,3%)
- 08 - final maps tests (50%)
- 09 - final winning and losing conditions (0%)

![](screenshot/my_epitech.png)
