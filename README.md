# basketball_mvp_finder
Write a C program that reads basketball players’ information into an array of structures and find the Most Valuable Player (MVP) of the team by using a function.

• Define a structure for a player. Each player should have a number, name, surname, along with their points, rebounds, blocks of type integer and efficiency score of type double.

In the main program:

• Input the number of players (n) in the team.

• Define an array of structure for n players.

• Read the information of players (no, name, surname, points, rebounds and blocks) into an array of structures.

• Computes Efficiency scores for each player as 50% of points + 30% of rebounds + %20 of blocks.

• Then, the program outputs the no, Surname, name initial (first letter of the name) and their efficiency score in the format “No Surname, N. [Efficiency Score]” as shown in the Sample Run. (Note that the words entered can be in small-case or capital letters. You should use character functions).

• Call the function to find the most valuable player, having the highest efficiency score.

In the function:

• Write a function named find_mvp which gets two parameters, player p as a structure and the size of the array.

• The function finds the player with highest efficiency and outputs the name and surname of that player as MVP.

### Sample Run:
How many players?:3
Enter Player 1 info:70 LuiGi DATOme 40 20 5

Enter Player 2 info:35 BobBy Dixon 55 25 10

Enter Player 3 info:24 JaN VeseLY 50 30 10

The efficiency scores of players:

#70 Datome, L. 27.00

#35 Dixon, B. 37.00

#24 Vesely, J. 36.00

The MVP of the team is: Dixon, B. 
