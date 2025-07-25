#include <iostream>
int main() {
    int a,b,d,c;
    std::cin>>a>>b>>d;
    std::cout<<a <<" "<<b<<" "<<d;
    c=std::max((a,b),d);
    std::cout<<" c="<<c;
    return 0;
}