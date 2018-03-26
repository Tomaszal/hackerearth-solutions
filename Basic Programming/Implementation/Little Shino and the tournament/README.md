# [Little Shino and the tournament](https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/little-shino-and-the-tournament/)

**Difficulty: Medium**

Little Shino is interested in the fighting tournaments. Once she went to watch one of the tournaments. There were *N* fighters and *i<sup>th</sup>* fighter will be represented by *i*. Each fighter has some distinct strength. Rules of the tournament are:

+ Each fight will have 2 fighters.
+ In a fight, fighter with more strength will win.
+ In one round, *1st* fighter will fight against *2nd* fighter, *3rd* fighter will fight against *4th* fighter and so on. If there is odd number of fighters, last one will qualify to the next round without fighting.

## Input

First line contains 2 integers, *N* and *Q*, number of fighters and number of queries. \
Second line contains *N* space separated integers. *k<sup>th</sup>* integer represents the strength of *k<sup>th</sup>* fighter. \
Next *Q* line contain one integer *i* each, denoting *Q* queries.

## Output

For each query, print the number of fights *i<sup>th</sup>* fighter will take part in.

## Constraints

+ 1 &le; *N* &le; 100,000
+ 1 &le; *Q* &le; 1,000,000
+ 1 &le; *i* &le; *N*
+ 1 &le; *strength of fighters* &le; 1,000,000,000

## Sample

<table>
	<tr>
		<th width="500">Input</th>
		<th width="500">Output</th>
	</tr>
	<tr>
		<td valign="top">
			5 5<br />
			1 2 3 4 5<br />
			1<br />
			2<br />
			3<br />
			4<br />
			5
		</td>
		<td valign="top">
			1<br />
			2<br />
			1<br />
			3<br />
			1
		</td>
	</tr>
</table>
