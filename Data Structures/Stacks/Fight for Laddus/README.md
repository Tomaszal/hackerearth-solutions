# [Fight for Laddus](https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/fight-for-laddus/description/)

**Difficulty: Medium**

Tuntun mausi challenged Bheem and his team to solve a problem. Raju, Chutki and Bheem are trying to solve this problem but are unable to do so. As you are a good friend of Raju, he asks for your help.

Given an array, For each element find the value of nearest element to the right which is having frequency greater than as that of current element. If there does not exist an answer for a position, then print '**-1**'.

Please help Raju and his team to solve this problem to get the Laddus.

## Input

First line contains *T* denoting the no of test cases. \
First line of each test case contains *N* denoting the no of elements in array. \
Second line of each test case contains *N* integers (*A<sub>1</sub>*...*A<sub>n</sub>*) denoting the given array.

## Output

For each test case print space separated *N* numbers denoting the answer corresponding answer.

## Constraints

+ 1 &le; *T* &le; 100
+ 1 &le; *N* &le; 100,000
+ 1 &le; *A<sub>i</sub>* &le; 100,000

## Sample

<table>
	<tr>
		<th width="500">Input</th>
		<th width="500">Output</th>
	</tr>
	<tr>
		<td valign="top">
			3<br />
			10<br />
			1 3 7 2 5 1 4 2 1 5<br />
			5<br />
			1 1 1 1 1<br />
			6<br />
			1 1 2 2 2 3
		</td>
		<td valign="top">
			-1 2 2 1 1 -1 2 1 -1 -1<br />
			-1 -1 -1 -1 -1<br />
			2 2 -1 -1 -1 -1
		</td>
	</tr>
</table>
