# [Little Monk and Balanced Parentheses](https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/little-monk-and-balanced-parentheses/)

**Difficulty: Medium**

Given an array of positive and negative integers, denoting different types of parentheses. The positive numbers *x<sub>i</sub>* denotes opening parentheses of type *x<sub>i</sub>* and negative number *-x<sub>i</sub>* denotes closing parentheses of type *x<sub>i</sub>*.

Open parentheses must be closed by the same type of parentheses. Open parentheses must be closed in the correct order, i.e., never close an open pair before its inner pair is closed (if it has an inner pair). Thus, **[1, 2, -2, -1]** is balanced, while **[1, 2, -1, -2]** is not balanced.

You have to find out the length of the longest subarray that is balanced.

## Input

First line contains an input *N*, denoting the number of parentheses. Second line contains *N* space separated integers. *x<sub>i</sub>* denoting the *i<sup>th</sup>* parentheses of the array.

## Output

Print the length of the longest subarray that is balanced.

## Constraints

+ 1 &le; *N* &le; 200,000
+ -100,000 &le; *x<sub>i</sub>* &le; 100,000
+ *x<sub>i</sub>* &ne; 0

## Sample

<table>
	<tr>
		<th width="500">Input</th>
		<th width="500">Output</th>
	</tr>
	<tr>
		<td valign="top">
			5<br />
			1 -1 2 3 -2
		</td>
		<td valign="top">
			2
		</td>
	</tr>
</table>

The longest subarray that is balanced is **(1, -1)**. **(2, 3, -2)** is not balanced as 3 is not balanced.
