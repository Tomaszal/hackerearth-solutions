# [AABBAAC](https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/aabbaac/)

**Difficulty: Medium**

You are given an array *S* of *N* strings numbered from *0* to *N - 1*. You build string sequence *T<sub>i</sub>* by the following rules:

+ *T<sub>0</sub>* = *S<sub>0</sub>*
+ *T<sub>i</sub>* = *T<sub>i - 1</sub>* + reverse(*T<sub>i - 1</sub>*) + *S<sub>i</sub>*

Now please answer *M* queries: by non-negative integer *x* output *x-th* character of the *T<sub>N - 1</sub>* in *0-based* indexation. It's guaranteed that *x-th* character of the *T<sub>N - 1</sub>* exists.

## Input

The first line contains *T* &mdash; the number of test cases. Then *T* test cases follow. \
Each test case starts with line containing 2 integers: *N* and *M*. Next *N* lines describe array *S* &mdash; one string per line. Then *M* lines follow describing queries &mdash; one non-negative integer per line.

## Output

Output *T* lines. Each line should contain one string containing answers for the corresponding test case. Don't separate answers which belong to one test case by whitespaces or anything else.

## Constraints

+ 1 &le; *T* &le; 100
+ 1 &le; length of each *S<sub>i</sub>* &le; 100
+ 1 &le; N &le; 50
+ 1 &le; M &le; 1,000

## Sample

<table>
	<tr>
		<th width="500">Input</th>
		<th width="500">Output</th>
	</tr>
	<tr>
		<td valign="top">
			2<br />
			3 7<br />
			a<br />
			b<br />
			c<br />
			0<br />
			1<br />
			2<br />
			3<br />
			4<br />
			5<br />
			6<br />
			2 6<br />
			ty<br />
			qwe<br />
			0<br />
			2<br />
			3<br />
			4<br />
			6<br />
			1
		</td>
		<td valign="top">
			aabbaac<br />
			tytqey
		</td>
	</tr>
</table>
