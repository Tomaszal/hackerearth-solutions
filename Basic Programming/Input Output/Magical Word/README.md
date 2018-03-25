# [Magical Word](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/magical-word/)

**Difficulty: Medium**

Dhananjay has recently learned about [ASCII values](https://www.asciitable.com/). He is very fond of experimenting. With his knowledge of ASCII values and characters he has developed a special word and named it Dhananjay's Magical word.

A word which consists of characters whose ASCII values are prime numbers is an Dhananjay's Magical word. A character is Dhananjay's Magical character if its ASCII value is prime.

Dhananjay's nature is to boast about the things he knows or has learned about. So just to defame his friends he gives a few string to them and asks them to convert it to Dhananjay's Magical word. None of his friends would like to get insulted. Help them to convert the given strings to Dhananjay's Magical Words.

## Rules for converting

+ Each character should be replaced by the nearest Dhananjay's Magical character.
+ If the character is equidistant with 2 Magical characters, the one with lower ASCII value will be considered as its replacement.

## Input

First line contains an integer *T*, denoting the number of test cases. Each test case contains an integer *N* (denoting the length of the string) and a string *S*.

## Output

For each test case, print Dhananjay's Magical Word on a new line.

## Constraints

+ 1 &le; *T* &le; 100
+ 1 &le; *N* &le; 500

## Sample

<table>
	<tr>
		<th width="500">Input</th>
		<th width="500">Output</th>
	</tr>
	<tr>
		<td valign="top">
			1<br />
			6<br />
			AFREEN
		</td>
		<td valign="top">
			CGSCCO
		</td>
	</tr>
</table>
