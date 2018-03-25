# [Two Strings](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/two-strings-4/)

**Difficulty: Easy**

Given two strings of equal length, you have to tell whether both strings are identical.

Two strings *S<sub>1</sub>* and *S<sub>2</sub>* are said to be identical, if any of the permutation of string *S<sub>1</sub>* is equal to the string *S<sub>2</sub>*. See sample for more details.

## Input

First line contains an intger *T*, denoting the number of test cases. \
Each test consists of a single line, containing two space separated strings *S<sub>1</sub>* and *S<sub>2</sub>* of equal length.

## Output

For each test case, if any of the permutation of string *S<sub>1</sub>* is equal to the string *S<sub>2</sub>* print **YES** else print **NO**.

## Constraints

+ 1 &le; *T* &le; 100
+ 1 &le; *|S<sub>1</sub>|* = *|S<sub>2</sub>|* &le; 100,000
+ String is made up of lower case letters only.

## Sample

<table>
	<tr>
		<th width="500">Input</th>
		<th width="500">Output</th>
	</tr>
	<tr>
		<td valign="top">
			3<br />
			sumit mitsu<br />
			ambuj jumba<br />
			abhi hibb
		</td>
		<td valign="top">
			YES<br />
			YES<br />
			NO
		</td>
	</tr>
</table>

For first test case, **mitsu** can be rearranged to form **sumit**. \
For second test case, **jumba** can be rearranged to form **ambuj**. \
For third test case, **hibb** can not be arranged to form **abhi**.
