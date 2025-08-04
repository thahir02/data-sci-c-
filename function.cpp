/*
functions in c++ : functions are used to provide modularity of the code & reuseability
of the code.
*/
#include<iostream>
using namespace std;
//function declaration syntax: return_type fuction_name(formal parameters);
void greeting();//global declaration is optional
bool isleapyear(int);//global declaration is optional
//fuction definition
void greeting()
{
	cout<<"welcome to functions"<<endl;
}
bool isleapyear(int year)
{
	if (year%100==0)
	{
		if(year%400==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if(year%4==0){
		return true;
	}
	else{
		return false;
	}
}
void checkIfLeapyear(int year){
	if(isleapyear(year))
	{
		cout<<year<<"is a leap year!"<<endl;
	}
	else
	{
		cout<<year<<" is not a leap year!"<<endl;
	}
}
int main(){
	int year;
	greeting();
	cout<<"enter the year : "<<endl;
	cin>>year;
	checkIfLeapyear(year);
	return 0;
}
