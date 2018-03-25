# [Play with numbers](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/play-with-numbers-2/)

**Difficulty: Easy**

You are given an array of *n* numbers and *q* queries. For each query you have to print the floor of the expected value (mean) of the subarray from *L* to *R*.

## Input

First line contains two integers *N* and *Q* denoting the number of array elements and the number of queries. \
Next line contains *N* space seperated integers denoting array elements. \
Next *Q* lines contain two integers *L* and *R* (indices of the array).

## Output

Print a single integer denoting the answer.

## Constraints

+ 1 &le; *N*, *Q*, *L*, *R* &le; 1,000,000
+ 1 &le; *array elements* &le; 1,000,000,000

## Sample

<table>
	<tr>
		<th width="500">Input</th>
		<th width="500">Output</th>
	</tr>
	<tr>
		<td valign="top">
			5 3<br />
			1 2 3 4 5<br />
			1 3<br />
			2 4<br />
			2 5
		</td>
		<td valign="top">
			2<br />
			3<br />
			3
		</td>
	</tr>
</table>
