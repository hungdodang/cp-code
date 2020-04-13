
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
11. [Day 11 - Diameter of Binary Tree](#day11)
12. [Day 12 - Last Stone Weight](#day12)
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
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/C%2B%2B/singleNumber.cpp) <br />
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/singleNumber.py) <br />
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
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/C%2B%2B/isHappy.cpp) <br />
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/isHappy.py) <br />
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
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/C%2B%2B/maxSubArray.cpp)  
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/maxSubArray.py)  
Using Kadane's Algorithm which loops through input list and in each iterator it computes sum of `local_max` and `current value of list` and compares with `current value of list`. Then, save the greater to `local_max`. Of course, before move to next iterator, it will compare `local_max` with `global_max` (which is initialized with `-Infinity` value). This problem is very popular. [More information about this problem here!](https://en.wikipedia.org/wiki/Maximum_subarray_problem)

## Day 4 - Move Zeroes<a name="day4"></a>
### Problem
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.  
*Example*  
`Input: [0,1,0,3,12]`  
`Output: [1,3,12,0,0]`  
### Solution & Explanation
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/C%2B%2B/moveZeroes.cpp)  
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/moveZeroes.py)  
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
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/C%2B%2B/maxProfit.cpp)  
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/maxProfit.py)  
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
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/C%2B%2B/groupAnagrams.cpp)  
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/groupAnagrams.py)  
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
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/C%2B%2B/countElements.cpp)  
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/countElements.py)  
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
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/C%2B%2B/middleNode.cpp)  
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/middleNode.py)  
I just put every node in a vector (or list in python) and then the middle node is just (size of this vector)/2.  
**Note:** For this solution I just copy what I submited in LeetCode, which mean it's just the function!

## Day 9 - Backspace String Compare<a name="day9"></a>
### Problem 
Given two strings `S` and `T`, return if they are equal when both are typed into empty text editors. `#` means a backspace character.  
*Example*  
`Input: S = "ab#c", T = "ad#c"`  
`Output: true`  

### Solution & Explanation  
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/C%2B%2B/backspaceCompare.cpp)  
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/backspaceCompare.py)  
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
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/C%2B%2B/minstack.cpp)  
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/minstack.py)  
Based on the conceptual of stack just remember to save min with value when ever do push action!  
STL in C++ support stack library, so I just call stack and push in there pairs which contain value and the min value of stack when do push action. In Python I use list contain list to implement this problem.

## Day 11 - Diameter of Binary Tree<a name="day11"></a>
### Problem
Given a binary tree, you need to compute the length of the diameter of the tree. The diameter of a binary tree is the length of the **longest** path between any two nodes in a tree. This path may or may not pass through the root.  
### Solution & Explanation  
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/C%2B%2B/diameterOfBinaryTree.cpp)  
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/diameterOfBinaryTree.py)  
To be honest, this problem is really confused me. I need help from [Errichto](https://www.youtube.com/watch?v=M_BaOHkTtyY&) to solve this problem. The algorithm uses DFS to traverse to all node in tree. In every node we save two value: longest path at this time and depth. Longest path of parent node is `max(longest path of left node, longest path of right node, depth of left node + depth of right node)` and depth of parent node is `max(depth of left node, depth of right node) + 1`.  

## Day 12 - Last Stone Weight<a name="day12"></a>
### Problem
We have a collection of stones, each stone has a positive integer weight.

Each turn, we choose the two heaviest stones and smash them together.  Suppose the stones have weights x and y with x <= y.  The result of this smash is:

- If x == y, both stones are totally destroyed;
- If x != y, the stone of weight x is totally destroyed, and the stone of weight y has new weight y-x.  
At the end, there is at most 1 stone left.  Return the weight of this stone (or 0 if there are no stones left.)  
**Example**  
`Input: [2,7,4,1,8,1]`  
`Output: 1`  
### Solution & Explanation
[Solution in C++](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/C%2B%2B/lastStoneWeight.cpp)  
[Solution in Python](https://github.com/hungdodang/cp-code/blob/master/30-Day%20LeetCoding%20Challenge/Python/lastStoneWeight.py)  
I use recursion to solve this problem. Every recursive step I sort the input vector, take 2 last element out of vector, get the subtraction and push the result back in vector. The base case is when the vector size equals to 0 or 1.  



