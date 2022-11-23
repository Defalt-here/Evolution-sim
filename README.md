# Evolution-sim
It's a basic C algorithm to simulate evolution over generations. The two arrays are filled with random numbers and then compared, the lesser number die and the surviving off-springs get added to evolution modifiers; over several generations the fittest comes out
The programs fills two arrays with random numbers; the size of family is user defined. Both arrays are compared with the lesser number dying out or devalued to 0. the surviving numbers are then added to a random integer (Upper limit of the random range is user defined) to increase the chances of survival and sorted in an increasing order to group all the dead integers together.
Mentioned process is repeated for an n number of times (again user defined). The final surviving number(s) are outputted with the root array considered a winner.
A single process of comparision,addition and sorting is called a generation.
Every generation has greater integers called off-springs.
Every integer can be called a warrior.
All zeroes are dead integers/warriors.
All non zeroes are sruviving integers/warriors.
