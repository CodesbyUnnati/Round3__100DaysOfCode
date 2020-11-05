//QUESTION
/*
An arcade game player wants to climb to the top of the leaderboard and track their ranking. The game uses Dense Ranking, so its leaderboard works like this:

The player with the highest score is ranked number  on the leaderboard.
Players who have equal scores receive the same ranking number, and the next player(s) receive the immediately following ranking number.
Example



The ranked players will have ranks , , , and , respectively. If the player's scores are ,  and , their rankings after each game are ,  and . Return .

Function Description

Complete the climbingLeaderboard function in the editor below.

climbingLeaderboard has the following parameter(s):

int ranked[n]: the leaderboard scores
int player[m]: the player's scores
Returns

int[m]: the player's rank after each new score
Input Format

The first line contains an integer , the number of players on the leaderboard.
The next line contains  space-separated integers , the leaderboard scores in decreasing order.
The next line contains an integer, , the number games the player plays.
The last line contains  space-separated integers , the game scores.

*/

//SOLUTION

#!/bin/python3

import math
import os
import random
import re
import sys



# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER_ARRAY ranked
#  2. INTEGER_ARRAY player
#

def climbingLeaderboard(ranked, player):
    scores = sorted(list(set(ranked)), reverse=True)
    player_ranks = []
    for score in player:
        while scores and score >= scores[-1]:
            scores.pop()
        player_ranks.append(len(scores) + 1)

    return player_ranks

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    ranked_count = int(input().strip())

    ranked = list(map(int, input().rstrip().split()))

    player_count = int(input().strip())

    player = list(map(int, input().rstrip().split()))

    result = climbingLeaderboard(ranked, player)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
