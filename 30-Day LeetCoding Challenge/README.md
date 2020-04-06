
# 30 Day LeetCoding Challenge
Hi! I've been recently participated in **LeetCode** community and during the COVID-19 pandemic, I've joined **30 day LeetCoding Challenge**. I will update all problems and solutions for them with my explanations.
> Starting date: 02/04/20  
> Expected finish date: 30/04/20
## Index
1. [Day 1 - Single Number](#day1)
2. [Day 2 - Happy Number](#day2)
3. [Day 3 - Maximum Subarray](#day3)
4. [Day 4 - Move Zeroes](#day4)
5. [ Day 5 - Best Time to Buy and Sell Stock II](#day5)
## Day 1 - Single Number<a name="day1"></a>

### Problem
Given a non-empty array of integers, every element appears twice except for one. Find that single one.<br />
*Note:*
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?<br />
*Example 1*  
	`Input: [2,2,1]`  
	`Output: 1`  
*Example 2*  
	`Input: [4,1,2,1,2]`  
	`Output: 4`
### Solution & Explanation
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Day%201%20-%20Single%20Number.cpp) <br />
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/Day%201%20-%20Single%20Number.py) <br />
Using XOR operator, there are 3 things to remember:
- a number XOR with itself is 0
- a number XOR with 0 is the number itself
- XOR is commutative!
## Day 2 - Happy Number<a name="day2"></a>
### Problem
Write an algorithm to determine if a number is "happy".<br />
A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.<br />
*Example*  
`Input: 19`  
`Output: true`  
*Explanation*  
![$1^2 + 9^2 = 82$](https://render.githubusercontent.com/render/math?math=%241%5E2%20%2B%209%5E2%20%3D%2082%24)  
![$8^2 + 2^2 = 68$](https://render.githubusercontent.com/render/math?math=%248%5E2%20%2B%202%5E2%20%3D%2068%24)  
![$6^2 + 8^2 = 100$](https://render.githubusercontent.com/render/math?math=%246%5E2%20%2B%208%5E2%20%3D%20100%24)  
![$1^2 + 0^2 + 0^2 = 1$](https://render.githubusercontent.com/render/math?math=%241%5E2%20%2B%200%5E2%20%2B%200%5E2%20%3D%201%24)
### Solution & Explanation
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Day%202%20-%20Happy%20Number.cpp) <br />
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/Day%202%20-%20Happy%20Number.py) <br />
First I will write a function can calculate a number following above rule (I call it is `calculate` function). Then, I need a while loop, in there, I will use this function to calculate input number and check the result:
- If it equals to 1 => The number is a "Happy Number".
- If it is in vector `nums`, which contains the result of `calculate` function after every loop => Causing endlessly loop => The number is not a "Happy Number".
- If it does not equals to 1 and is not in `nums` => Push it in nums and continue the loop.

## Day 3 - Maximum Subarray<a name="day3"></a>
### Problem
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.  
*Example*  
`Input: [-2,1,-3,4,-1,2,1,-5,4]`  
`Output: 6`  
*Explanation*  
`[4,-1,2,1]` has the largest `sum = 6`.
### Solution & Explanation
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/C%2B%2B/Day%203%20-%20Maximum%20Subarray.cpp)  
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/Day%203%20-%20Maximum%20Subarray.py)  
Using Kadane's Algorithm which loops through input list and in each iterator it computes sum of `local_max` and `current value of list` and compares with `current value of list`. Then, save the greater to `local_max`. Of course, before move to next iterator, it will compare `local_max` with `global_max` (which is initialized with `-Infinity` value). This problem is very popular. [More information about this problem here!](https://en.wikipedia.org/wiki/Maximum_subarray_problem)

## Day 4 - Move Zeroes<a name="day4"></a>
### Problem
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.  
*Example*  
`Input: [0,1,0,3,12]`  
`Output: [1,3,12,0,0]`  
### Solution & Explanation
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/C%2B%2B/Day%204%20-%20Move%20Zeroes.cpp)  
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/Day%204%20-%20Move%20Zeroes.py)  
I use a variable -`count`- to save the number of non-zero elements in the input array -`nums`. Loop through `nums`, every time I check if the value is non-zeros, I will `swap(nums[count],nums[i]`) and increase the value of `count` to 1.

## Day 5 - Best Time to Buy and Sell Stock II<a name="day5"></a>
### Problem
Say you have an array for which the ith element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).

Note: You may not engage in multiple transactions at the same time (i.e., you must sell the stock before you buy again).  
*Example*  
`Input: [7,1,5,3,6,4]`  
`Output: 7`  
*Explanation*  
Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4. Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
### Solution & Explanation
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/C%2B%2B/Day%205%20-%20Best%20Time%20to%20Buy%20and%20Sell%20Stock%20II.cpp)  
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/Day%205%20-%20Best%20Time%20to%20Buy%20and%20Sell%20Stock%20II.py)  
Initialize a variable to save profit `max_profit`. Go through input array start at index = 1 to the end. Check if the previous element is smaller than the current element, then subtract previous element from current element and add the result to `max_profit`.  
As you can see, `5-1` is equivalent to `(5-4)+(4-3)+(3-2)+(2-1)`. So we don't need to find the minimum and the maximum afterward. Just compare 2 adjacent elements!  
