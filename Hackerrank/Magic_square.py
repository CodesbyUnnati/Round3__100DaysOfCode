//QUESTION
/*
We define a magic square to be an  matrix of distinct positive integers from  to  where the sum of any row, column, or diagonal of length  is always equal to the same number: the magic constant.

You will be given a  matrix  of integers in the inclusive range . We can convert any digit  to any other digit  in the range  at cost of . Given , convert it into a magic square at minimal cost. Print this cost on a new line.

Note: The resulting magic square must contain distinct integers in the inclusive range .

Example

$s = [[5, 3, 4], [1, 5, 8], [6, 4, 2]]

The matrix looks like this:

5 3 4
1 5 8
6 4 2
We can convert it to the following magic square:

8 3 4
1 5 9
6 7 2
This took three replacements at a cost of .

Function Description

Complete the formingMagicSquare function in the editor below.

formingMagicSquare has the following parameter(s):

int s[3][3]: a  array of integers
Returns

int: the minimal total cost of converting the input square to a magic square
Input Format

Each of the  lines contains three space-separated integers of row .

Constraints

Sample Input 0

4 9 2
3 5 7
8 1 5
Sample Output 0

1

*/

//SOLUTION


def formingMagicSquare(s):
    #print(s)
    l=[[[8,1,6],[3,5,7],[4,9,2]],
        [[6,1,8],[7,5,3],[2,9,4]],
        [[4,9,2],[3,5,7],[8,1,6]],
        [[2,9,4],[7,5,3],[6,1,8]],
        [[8,3,4],[1,5,9],[6,7,2]],
        [[4,3,8],[9,5,1],[2,7,6]],
        [[6,7,2],[1,5,9],[8,3,4]],
        [[2,7,6],[9,5,1],[4,3,8]] ]
    #print(l)
    ans=999
    for i in range(8):
        c=0
        for j in range(3):
            for k in range(3):
                #print(l[1][2])
                c=c+abs(l[i][j][k]-s[j][k])
        ans=min(ans,c)
    print(ans)
    
 
if __name__ == '__main__':
    s = []
    for _ in range(3):
        s.append(list(map(int, input().rstrip().split())))
    formingMagicSquare(s)
 

