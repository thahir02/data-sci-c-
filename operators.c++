/*
operators in c++:an operator is a basically a symbol which tell to the complier 
which type of operation or manipulation to perform
arithmetic operators(+,-,*,/,%)
logical operators : logical comparision b/w two variables(<,>,<=,>=,==,!=) 
relational operators :used to combine one or more logical operators(or) conditions
('&&'(logical AND:both conditions should be true),'||'(logical OR:either one or both
conditions true),!(NOT:opposite of the given condition)
bitwise operators :this are similar to relational operators but they work on individual
bits.(&(bitwise and),|(bitwise or),^(bitwise exor),<<(bitwise leftshift)
,>>(bitwise rigthshift),~(bitwise negation))
ternary operators :(condition ? expression1 : expression2) it is like a simplified 
if else coditional stmt if return expression1 & else returns expression2.
unary operators :It does not required two variables to perform operations
In this we perform post(increment or decrement) and pre(increment or decrement)
i.e, ++,--
shortcut assignment operators(+=,-=,*=,/=,etc),etc
other operators like sizeof,new,delete,&(address of operator),etc
*/
#include <iostream>
using namespace std;
int main()
{
	//performing arithmetic operators
	 int a,b;
	std::cout<<"arithmetic operators"<<std::endl;
    std::cout<<"enter values for a :"<<std::endl;
    std::cin>>a;
    std::cout<<"enter values for b :"<<std::endl;
    std::cin>>b;
    std::cout<<"add="<<a+b<<std::endl;
    std::cout<<"sub="<<a-b<<std::endl;
    std::cout<<"mul="<<a*b<<std::endl;
    if(b==0){
        std::cout <<"error due to valuer of b=0"<<std::endl;
    }
    else{
    std::cout<<"div="<<a/b<<std::endl;
    std::cout<<"rem="<<a%b<<std::endl;
	}
	/*
	in the modulus operator the symbol of output +ve or -ve will be decided
	by dividend for example in the above example a%b ais +ve so o/p is also +ve 
	if (-a%-b) or -a%b then o/p will be -ve
	*/
	//performing logical operator
	//in logical operators if condition is true it return '1' else flase return '0'
	//logical operators mostly uesd for checking conditions
	int c,d;
	std::cout<<"logical operators"<<std::endl;
    std::cout<<"enter the value of c:"<<std::endl;
	std::cin>>c;
	std::cout<<"enter the value of d:"<<std::endl;
	std::cin>>d;
	std::cout<<"if c is greater than d then:"<<std::endl;
	std::cout<<(c>d)<<std::endl;//returns '0' or '1' based on condition
	std::cout<<"if d is greater than c then:"<<std::endl;
	std::cout<<(c<d)<<std::endl;//returns '0' or '1' based on condition
	if(c>d)//to check other logical operators use (c<d),(c<=d),(c>=d),(c==d),(c!=d).
	{
		std::cout<<"c is greater"<<std::endl;
	}
	else
	{
		std::cout<<"d is greater"<<std::endl;
	}
	//performing relational operators
	int i,j;
	std::cout<<"relational operators"<<std::endl;
	std::cout<<"enter the value of i:"<<std::endl;
	std::cin>>i;
	std::cout<<"enter the value of j"<<std::endl;
	std::cin>>j;
	if(!(i<j))//also try ((i>j) && (j!=0)),(!true),etc
		{
		std::cout<<"true"<<std::endl;
	}
	else{
		std::cout<<"false"<<std::endl;
	}
	//other example
	if(i>j && (j=0))//if codition is true and if j!=0
	//then it assings j=0 & prints else condition
	{
		std::cout<<j<<std::endl;
	}
	else
	{
		std::cout<<"j="<<j<<std::endl;//if j!=0 due condition j becomes '0'
	}
	//performing bitwise operators
	std::cout<<"bitwise operators"<<std::endl;
	int b1,b2;
	std::cout<<"enter the value of b1:"<<std::endl;
	std::cin>>b1;
	std::cout<<"enter the value of b2:"<<std::endl;
	std::cin>>b2;
	std::cout<<(b1 & b2)<<std::endl;//bitwise and
	std::cout<<(b1 | b2)<<std::endl;//bitwise or
	std::cout<<(b1 ^ b2)<<std::endl;//bitwise xor
	std::cout<<(b1 >> b2)<<std::endl;//bitwise rigthshift
	//eg: (4>>1) :- 0100 >> 1 ->0010
	std::cout<<(b1 << b2)<<std::endl;//bitwise leftshift
	//eg: (4<<1) :- 0100 << 1 ->1000
	std::cout<<(~b1)<<std::endl;//bitwise negation
	//performing ternary operator
	int t1,t2,t3;
	std::cout<<"ternary operator"<<std::endl;
	std::cout<<"enter the value of t1:"<<std::endl;
	std::cin>>t1;
	std::cout<<"enter the value of t2:"<<std::endl;
	std::cin>>t2;
	t3=(t1<t2)?t1:t2;//if t1<t2 then t3=t1 else t3=t2
	std::cout<<t3<<std::endl;
	//performing unary operators
	int u1;
	u1=1;
	c=u1++;//c=gabage value changes to u1 then u1++=u1+1->2
	std::cout <<"u1=1"<<std::endl;
	std::cout<<" by doing c=u1++ c="<<c<<"a="<<a<<std::endl;//c=1,u1=2
	u1=1;
	c=++u1;//u1 is updated &changes both u1,c values
	std::cout <<"u1=1"<<std::endl;
	std::cout<<" by doing c=++u1 c="<<c<<"a="<<a<<std::endl;//c=2,u1=2
	u1=1;
	c=u1--;//c=gabage value changes to u1 then u1--=u1-1->0
	std::cout <<"u1=1"<<std::endl;
	std::cout<<" by doing c=u1-- c="<<c<<"a="<<a<<std::endl;//c=1,u1=0
	u1=1;
	c=--u1;//u1 is updated &changes both u1,c values
	std::cout <<"u1=1"<<std::endl;
	std::cout<<" by doing c=u1-- c="<<c<<"a="<<a<<std::endl;//c=0,u1=0
	//performing shortcut assignment operators
	std::cout<<"shortcutassingment operator"<<std::endl;
	int s1;
	//eg: instead of s2=s21 we use s2+=1;
	std::cout<<"enter the vaule s1:"<<std::endl;
	std::cin>>s1;
	s1+=1;//similarly use s1-=1,s1*=1,etc
	std::cout<<"s1+=1 is equal to "<<s1<<std::endl;
	//other operators
	//sizeof,new and delete,&(address of operator),(deference operators(arrow(->)
	//,dot(.)),etc
	std::cout<<"size of s1="<<sizeof(s1)<<std::endl;
	//szeof is used to find size occupied by a variable or data type in byte.
	int *ptr=new int(10);//to create or manually dynamically allocate some for a  
	delete ptr;//variable new is used and to free that allocated space we use delete
	ptr=&s1;//returns the address of variable at which the variable is storing its value
	b=*ptr;//helps to access the value which ptr is storing
	return 0;
}
