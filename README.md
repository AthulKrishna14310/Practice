# Practice
This repositories contains practice sessions done successfully

Q1 : 
Given a square matrix, calculate the absolute difference between the sums of its diagonals.
                                        1 2 3
                                        4 5 6
                                        9 8 9

                                        The left-to-right diagonal = 1+5+9 = 15, The right to left diagonal = 3+5+9 = 17, Their absolute difference is |15-17| = 2

Function Description:

diagonalDifference takes the following parameter:

int arr[n][m]: an array of integers
Input Format:

The first line contains a single integer, n the number of rows and columns in the square matrix arr Each of the next n lines describes a row, arr[i] and consists of n space-separated integers arr[i][j]
Output Format:

Return the absolute difference between the sums of the matrix’s two diagonals as a single integer.
 

Sample Input:
     3
     11 2 4
     4 5 6
     10 8 -12

Sample Output:

     15
   
   
Q2:
Jaya invented a Time Machine and wants to test it by time-traveling to visit Russia on the Day of Programmer (the 256thday of the year) during a year in the inclusive range from 1700 to 2700. From 1700 to 1917 , Russia’s official calendar was the Julian Calendar since 1919 they used the Gregorian calendar system. The transition from the Julian to Gregorian calendar system occurred in 1918 , when the next day after 31 January was February 14 . This means that in 1918, February 14 was the 32nd day of the year in Russia. In both calendar systems, February is the only month with a variable amount of days; it has 29 days during a leap year, and 28 days during all other years. In the Julian calendar, leap years are divisible by 4 ; in the Gregorian calendar, leap years are either of the following:

Divisible by 400
Divisible by 4 and not divisible by 100
Given a year, y, find the date of the 256th day of that year according to the official Russian calendar during that year. Then print it in the format dd.mm.yyyy, where dd is the two-digit day, mm is the two-digit month, and yyyy is y.

For example, the given year is 1984.1984 is divisible by 4, so it is a leap year. The 256 day of a leap year after 1918 is September 12, so the answer is 12.9.1984. 

Function Description

Complete the programmerday function in the editor below. It should return a string representing the date of the 256th day of the year given.
programmerday has the following parameter(s):
year: an integer 
Input Format

A single integer denoting year y.
Output Format

Print the full date of programmerday during year y in the format dd.mm.yyyy, where dd is the two-digit day, mm is the two-digit month, and yyyy is y.
Sample Input

           2017

Sample Output

           13.09.2017



Q3 :
Hobo’s Drawing teacher asks his class to open their books to a page number. Hobo can either start turning pages from the front of the book or from the back of the book. He always turns pages one at a time. When she opens the book, page 1 is always on the right side: When he flips page 1, he sees pages 2 and 3. Each page except the last page will always be printed on both sides. The last page may only be printed on the front, given the length of the book. If the book is n pages long, and he wants to turn to page p, what is the minimum number of pages he will turn? He can start at the beginning or the end of the book. Given n and p, find and print the minimum number of pages Hobo must turn in order to arrive at page p

Function Description

Complete the countpage function in the editor below. It should return the minimum number of pages Hobo must turn.

countpage has the following parameter(s):

n: the number of pages in the book
p: the page number to turn to
Input Format

The first line contains an integer n, the number of pages in the book.
The second line contains an integer, p, the page that Hobo’s teacher wants her to turn to.
Output Format

Print an integer denoting the minimum number of pages Hobo must turn to get to page p
Sample Input 

      6
      2

Sample Output 

      1




Q4 :
Chacha is playing an arcade game and wants to climb to the top of the leader board and wants to track her ranking. The game uses Dense Ranking so its leader board works like this:

The player with the highest score is ranked number 1 on the leader board.
Players who have equal scores receive the same ranking number, and the next player(s) receive the immediately following ranking number.
For example, the four players on the leader board have high scores of 100, 90, 90, and 80. Those players will have ranks 1, 2, 2, and 3, respectively. If Chacha’s scores are 70, 80 and 105, her rankings after each game are 4th, 3rd and 1st.

Function Description

Write a function climbing. It should return an integer array where each element res[j] represents Chacha’s rank after the j game.

climbing has the following parameter(s):

scores: an array of integers that represent leaderboard scores
alice: an array of integers that represent Chacha’s scores
Input Format

The first line contains an integer n, the number of players on the leaderboard.
The next line contains n space-separated integers scores[i], the leaderboard scores in decreasing order.
The next line contains an integer, m, denoting the number games Chacha plays.
The last line contains m space-separated integers chacha[j], the game scores.
 

Sample Input

      7

      100 100 50 40 40 20 10

      4

      5 25 50 120

Sample Output

      6

      4

      2

      1
  
 
 
Q 5 :
You will be given an array of integers and a target value. Determine the number of pairs of array elements that have a difference equal to a target value.

For example, given an array of [1, 2, 3, 4] and a target value of 1, we have three values meeting the condition: 2-1 = 1, 3-2 = 1, and 4-3 = 1.

Function Description

Write a function pairs. It must return an integer representing the number of element pairs having the required difference.

pairs has the following parameter(s):

k: an integer, the target difference
arr: an array of integers
Input Format

The first line contains two space-separated integers n and k, the size of arr and the target value.
The second line contains n space-separated integers of the array arr.
Sample Input

     5 2

     1 5 3 4 2 

Sample Output

     2
     
     
Q6 :
A jail has a number of prisoners and a number of treats to pass out to them. Their jailer decides the fairest way to divide the treats is to seat the prisoners around a circular table in sequentially numbered chairs. A chair number will be drawn from a hat. Beginning with the prisoner in that chair, one candy will be handed to each prisoner sequentially around the table until all have been distributed.

The jailer is playing a little joke, though. The last piece of candy looks like all the others, but it tastes awful. Determine the chair number occupied by the prisoner who will receive that candy.

For example, there are 4 prisoners and 6 pieces of candy. The prisoners arrange themselves in seats numbered 1 to 4 . Let’s suppose two are drawn from the hat. Prisoners receive candy at positions 2,3,4,1,2,3. The prisoner to be warned sits in chair number 3

Function Description

Write a function saveThePrisoner. It should return an integer representing the chair number of the prisoner to warn.

saveThePrisoner has the following parameter(s):

n: an integer, the number of prisoners
m: an integer, the number of sweets
s: an integer, the chair number to begin passing out sweets from
Input Format

The first line contains an integer t, denoting the number of test cases.
The next t lines each contain 3 space-separated integers:
– : n the number of prisoners
– : m the number of sweets
– : s the chair number to start passing out treats at 
Output Format

For each test case, print the chair number of the prisoner who receives the awful treat on a new line.
Sample Input 

     2
     5 2 1
     5 2 2

Sample Output

    2
    3
