/*
array : An array is an storage of continuous memory of same data type together.
where continuous mean as per array declaration the complier will allocate memory of
array in continuous manner.
*/
#include<iostream>
using namespace std;
int main(){
	/*
	three types of declaration of array
	*/
int a[7];
int b[8]={2,3,4,5};
//the rest of spaces atomatically filed with zero 
int c[]={2,8,0};
//now let us see how we acess the array
cout<<a[2]<<endl;
//here <<endl means line ends and starts in new line if not use endl all o/p will merge
//at the each time of complilation we will get different garbage value 
//becase we didn't initialise the values in array a
cout<<b[2]<<endl;
//returns value in array b at index 2
cout<<c[3]<<endl;
//returns value in array c at index 3
//now let us see how to find size of array by using sizeof
cout<<sizeof(a)<<endl;
//returns size of b
cout<<sizeof(a[1])<<endl;
//returns size occupied one index
cout<<sizeof(a)/sizeof(a[1])<<endl;//used to find the length of array
//returns size of b
//entering elements into array using for loop
for(int i=0;i<sizeof(b)/sizeof(b[1]);i++)
	{
	cout<<b[i]<<endl;
	}
//returns elements present in array b empty space will retrun zero
return 0;
}