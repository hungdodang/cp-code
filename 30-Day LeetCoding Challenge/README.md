# 30 Day LeetCoding Challenge
Hi! I've been recently participated in **LeetCode** community and during the COVID-19 pandemic, I've joined **30 day LeetCoding Challenge**. I will update all problems and solutions for them with my explanations.
## Day 1 - Single Number
### Problem
Given a non-empty array of integers, every element appears twice except for one. Find that single one.
**Note:**
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
### Solution & Explanation
Using XOR operator, there are 3 things to remember:
- a number XOR with itself is 0
- a number XOR with 0 is the number itself
- XOR is commutative!

