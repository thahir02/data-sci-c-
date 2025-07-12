#include <iostream>
//entering values int array using loop
int main()
{
	int i=o;
	int a[7];
	//using for loop
	for(i=0;i<7;i++){
		std::cout<<"a["<<i<<"]="<<i<<" ";
	}
	//returns the numbers from 1 to 6
	std::cout<<std::endl;
	//come to new line
	//same code using while loop
	i=0;//restting to 0
	while(i<7)
	{
	    std::cout<<"a["<<i<<"]="<<i<<" ";
	    i++;
	}
	std::cout<<std::endl;//new line
	//same code using do while
	i=0;//restting to 0
	do
	{
	    std::cout<<"a["<<i<<"]="<<i<<" ";
	    i++;
	}while(i<7);
	
return 0;
}