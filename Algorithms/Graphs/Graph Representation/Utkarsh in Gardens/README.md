# [Utkarsh in Gardens](https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/practice-problems/algorithm/utkarsh-in-gardens-february-easy/)

**Difficulty: Medium**

Utkarsh has recently put on some weight. In order to lose weight, he has to run on boundary of **gardens**. \
But he lives in a country where there are no **gardens**. There are just many bidirectional roads between cities. \
Due to the situation, he is going to consider any **cycle of length four** as a **garden**. Formally a garden is considered to be a unordered set of 4 roads {*r<sub>0</sub>*, *r<sub>1</sub>*, *r<sub>2</sub>*, *r<sub>3</sub>*} where *r<sub>i and ri+1 mod 4</sub>* share a city.

Now he wonders how many distinct gardens are there in this country.

## Input

The first integer contains *N*, the number of cities in the country. \
It is followed by space separated elements of *N&times;N* binary matrix *G*. \
*G<sub>i, j</sub>* = 1 denotes there is a road between ith city and jth city. \
A pair of cities has atmost one road connecting them. \
No road connects a city to itself. \
*G* is symmetric.

## Output

Print the total number of gardens.

## Constraints

+ 1 &le; *N* &le; 2,000

## Sample

<table>
	<tr>
		<th width="500">Input</th>
		<th width="500">Output</th>
	</tr>
	<tr>
		<td valign="top">
			8<br />
			0 1 0 1 1 0 0 0<br />
			1 0 1 0 0 1 0 0<br />
			0 1 0 1 0 0 1 0<br />
			1 0 1 0 0 0 0 1<br />
			1 0 0 0 0 1 0 1<br />
			0 1 0 0 1 0 1 0<br />
			0 0 1 0 0 1 0 1<br />
			0 0 0 1 1 0 1 0
		</td>
		<td valign="top">
			6
		</td>
	</tr>
</table>
