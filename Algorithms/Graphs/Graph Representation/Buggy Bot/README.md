# [Buggy Bot](https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/practice-problems/algorithm/buggy-bot-d8f6eb53/)

**Difficulty: Medium**

Alice finally finished her CS assignment and programmed her robot to explore a directed graph *G* with *n* nodes (numbered *1* through *n*) and *m* edges.

Alice programmed the robot with a series of *k* instructions. The robot will attempt to execute one instruction per second in the given order; it won't repeat any instruction or return to an instruction it didn't execute. Each instruction is of the form "if the robot is currently at node *x*, it will move to node *y*". Note that if the robot is not currently at node *x*, it will ignore such an instruction. The robot is initially located at node *1*.

Unfortunately, the robot is a bit buggy &mdash; at one moment in time, it can move from its current node to an arbitrary neighboring node (a node to which an edge leads from the current node). Note that this bug could have happened before any instructions, between any two instructions, or after all instructions; however, it couldn't have happened multiple times. It is also possible that this bug did not happen at all.

Alice is having trouble debugging the robot, and would like your help to determine all nodes where the robot could be located at the end.

## Input

The first line of the input contains three integers *n*, *m* and *k*, denoting the number of nodes, the number of edges and the number of instructions respectively.

Each of the following *m* lines contains two space-separated integers *a<sub>i</sub>* and *b<sub>i</sub>* denoting a directed edge from node *a<sub>i</sub>* to node *b<sub>i</sub>*.

Each of the following *k* lines contains two space-separated integers *x<sub>i</sub>* and *y<sub>i</sub>* denoting an instruction for the robot.

## Output

On the first line, print a single integer *F* &mdash; the number of possible final nodes for the robot.

On the second line, print *F* space-separated integers, representing the possible final nodes for the robot, in increasing order.

## Constraints

+ 1 &le; *n* &le; 100,000
+ 1 &le; *m*, *k* &le; 1,000,000
+ 1 &le; *a<sub>i</sub>*, *b<sub>i</sub>* &le; *n* for each valid *i*
+ 1 &le; *x<sub>i</sub>*, *y<sub>i</sub>* &le; *n* for each valid *i*
+ each instruction for the robot will correspond to an existing directed edge
+ the graph won't contain loops &mdash; *x<sub>i</sub>* &ne; *y<sub>i</sub>* for each valid *i*
+ the graph won't contain multiple edges &mdash; (*x<sub>i</sub>*, *y<sub>i</sub>*) &ne; (*x<sub>j</sub>*, *y<sub>j</sub>*) for each valid *i* &ne; *j*

## Sample

<table>
	<tr>
		<th width="500">Input</th>
		<th width="500">Output</th>
	</tr>
	<tr>
		<td valign="top">
			5 5 3<br />
			1 2<br />
			2 3<br />
			3 4<br />
			4 1<br />
			2 4<br />
			1 2<br />
			3 4<br />
			2 3
		</td>
		<td valign="top">
			2<br />
			3 4
		</td>
	</tr>
</table>

Some of the possible scenarios are the following (the marked arrows represent the robot moving because a bug occured):

+ 1 &rarr; 2 &rarr; 3
+ 1 &rarr; 2 &bull;&rarr; 3 &rarr; 4

There may be more scenarios where the robot took different paths; however, there is no way for the robot to end up in node 2 or back in node 1.
