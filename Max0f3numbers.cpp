#include <iostream>
int main() {
    int a,b,d,c;
    std::cout<<"Enter the three numbers : ";
    std::cin>>a>>b>>d;
    std::cout<<a <<" "<<b<<" "<<d;
    c=std::max((a,b),d);
    std::cout<<" c="<<c;
    return 0;
}