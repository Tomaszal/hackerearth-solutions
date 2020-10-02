/*Akash and Vishal are quite fond of travelling. They mostly travel by railways. They were travelling in a train one day and they got interested in the seating arrangement of their compartment. The compartment looked something like


So they got interested to know the seat number facing them and the seat type facing them. The seats are denoted as follows :

Window Seat : WS
Middle Seat : MS
Aisle Seat : AS

You will be given a seat number, find out the seat number facing you and the seat type, i.e. WS, MS or AS.

INPUT
First line of input will consist of a single integer T denoting number of test-cases. Each test-case consists of a single integer N denoting the seat-number.

OUTPUT
For each test case, print the facing seat-number and the seat-type, separated by a single space in a new line.

CONSTRAINTS
1<=T<=105
1<=N<=108

SAMPLE INPUT 
2
18
40

SAMPLE OUTPUT 
19 WS
45 AS
*/

//code is here
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
		
	int n,x,y,sn;
	cin>>n;
	string st;
	if (n%6==1 || n%6==0)
		st="WS";
	else if(n%3==2)
		st="MS";
	else
		st="AS";
	
	x=n%6;
	if (x==0){
		y=(n/6)-1;
		x=6;
	}
	else
		y=n/6;
		
	if(y%2==0)
		sn=((6-x)*2)+1+n;
	else
		sn=n-((x*2)-1);
	
	cout<<sn<<" "<<st<<endl;
	
	}
	return 0;
}
