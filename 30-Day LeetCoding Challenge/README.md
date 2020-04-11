
# 30 Day LeetCoding Challenge
Hi! I've been recently participated in **LeetCode** community and during the COVID-19 pandemic, I've joined **30 day LeetCoding Challenge**. I will update all problems and solutions for them with my explanations.
> Starting date: 02/04/20  
> Expected finish date: 30/04/20
## Index
1. [Day 1 - Single Number](#day1)
2. [Day 2 - Happy Number](#day2)
3. [Day 3 - Maximum Subarray](#day3)
4. [Day 4 - Move Zeroes](#day4)
5. [Day 5 - Best Time to Buy and Sell Stock II](#day5)
6. [Day 6 - Group Anagrams](#day6)
7. [Day 7 - Count Elements](#day7)
8. [Day 8 - Middle of the Linked List](#day8)
9. [Day 9 - Backspace String Compare](#day9)
10. [Day 10 - Min Stack](#day10)
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
## Day 6 - Group Anagrams<a name="day6"></a>
### Problem
Given an array of strings, group anagrams together.  
*Example*  
`Input: ["eat", "tea", "tan", "ate", "nat", "bat"]`  
`Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]`  
### Solution & Explanation
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/C%2B%2B/Day%206%20-%20Group%20Anagrams.cpp)  
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/Day%206%20-%20Group%20Anagrams.py)  
I sort string in input vector before check if it exists in `different_string` vector contained all sorted strings. If it does, I push the original string in `answer` vector. Othewise, I will push the sorted string in `different_string`.  

## Day 7 - Count Elements<a name="day7"></a>
### Problem
Given an integer array `arr`, count element `x` such that `x + 1` is also in `arr`.  

If there're duplicates in `arr`, count them seperately.  
*Example 1*  
`Input: arr = [1,2,3]`  
`Output: 2`  
*Explanation*   
1 and 2 are counted cause 2 and 3 are in `arr`.  
*Example 2*  
`Input: arr = [1,1,3,3,5,5,7,7]`  
`Output: 0`  
*Explanation*  
No numbers are counted, cause there's no 2, 4, 6, or 8 in `arr`.
### Solution & Explanation
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/C%2B%2B/Day%207%20-%20Count%20Elements.cpp)  
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/Day%207%20-%20Count%20Elements.py)  
I save all the elements of input vector to a hashset or map. Then I loop through the vector again to check if the `elememt value + 1` is in the hashset.
## Day 8 - Middle of the Linked List<a name="day8"></a>
### Problem
Given a non-empty, singly linked list with head node `head`, return a middle node of linked list.  

If there are two middle nodes, return the second middle node.  
*Example*  
`Input: [1,2,3,4,5]`  
`Output: Node 3 from this list (Serialization: [3,4,5])`  
*Explanation*  
The returned node has value 3.  (The judge's serialization of this node is `[3,4,5]`).
Note that we returned a ListNode object ans, such that:  
`ans.val = 3`, `ans.next.val = 4`, `ans.next.next.val = 5`, and `ans.next.next.next = NULL`.
### Solution & Explanation
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/C%2B%2B/Day%208%20-%20Middle%20of%20the%20Linked%20List.cpp)  
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/Day%208%20-%20Middle%20of%20the%20Linked%20List.py)  
I just put every node in a vector (or list in python) and then the middle node is just (size of this vector)/2.  
**Note:** For this solution I just copy what I submited in LeetCode, which mean it's just the function!

## Day 9 - Backspace String Compare<a name="day9"></a>
### Problem 
Given two strings `S` and `T`, return if they are equal when both are typed into empty text editors. `#` means a backspace character.  
*Example*  
`Input: S = "ab#c", T = "ad#c"`  
`Output: true`  

### Solution & Explanation  
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/C%2B%2B/Day%209%20-%20Backspace%20String%20Compare.cpp)  
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/Day%209%20-%20Backspace%20String%20Compare.py)  
Loop the string backward, if meet `#` I increase variable `count`. If not, I check the value of `count`, if `count` equals to `0` I will save the character in current iterator.
## Day 10 - Min Stack<a name="day10"></a>
### Problem
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

- push(x) -- Push element x onto stack.  
- pop() -- Removes the element on top of the stack.
- top() -- Get the top element.
- getMin() -- Retrieve the minimum element in the stack.  
*Example*  
>MinStack minStack = new MinStack();  
minStack.push(-2);  
minStack.push(0);  
minStack.push(-3);  
minStack.getMin();   --> Returns -3.  
minStack.pop();  
minStack.top();      --> Returns 0.  
minStack.getMin();   --> Returns -2.  

### Solution & Explanation  
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/C%2B%2B/Day%2010%20-%20Min%20Stack.cpp)  
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/Day%2010%20-%20Min%20Stack.py)  
Based on the conceptual of stack just remember to save min with value when ever do push action!  
STL in C++ support stack library, so I just call stack and push in there pairs which contain value and the min value of stack when do push action. In Python I use list contain list to implement this problem.
