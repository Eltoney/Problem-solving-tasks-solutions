https://leetcode.com/problems/interleaving-string/

My Aproach:

solution 1: dp( i , j , k) where i , j , k is the current index in each string , base case when k hits the length of the third string make sure that the other two words are finished 

solution 2: turns out we can reduce 3d to 2d as k does not impact on the solution so  the soltuion will be dp(i , j)

solution 3: dp 2d  with  a table  (bottom to top approach) 
