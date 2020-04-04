
# 30 Day LeetCoding Challenge
Hi! I've been recently participated in **LeetCode** community and during the COVID-19 pandemic, I've joined **30 day LeetCoding Challenge**. I will update all problems and solutions for them with my explanations.
> Starting date: 02/04/20  
> Expected finish date: 30/04/20
## Index
1. [Day 1 - Single Number](#day1)
2. [Day 2 - Happy Number](#day2)
3. [Day 3 - Maximum Subarray](#day3)

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
*Explanation:*  
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
[4,-1,2,1] has the largest sum = 6.
### Solution & Explanation
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/C%2B%2B/Day%203%20-%20Maximum%20Subarray.cpp)  
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/Day%203%20-%20Maximum%20Subarray.py)  
Using Kadane's Algorithm which loops through input list and in each iterator it computes sum of `local_max` and `current value of list` and compares with `current value of list`. Then, save the greater to `local_max`. Of course, before move to next iterator, it will compare `local_max` with `global_max` (which is initialized with `-Infinity` value). This problem is very popular. [More information about this problem here!](https://en.wikipedia.org/wiki/Maximum_subarray_problem)
