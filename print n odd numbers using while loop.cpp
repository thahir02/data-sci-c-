#include<iostream>
using namespace std;
//to print odd numbers
void printS(int n)//fuction 
{
    if(n<=0){
        cout<<"invalid number enter positive number";
    }
    else
    {
        int i=1;
        while(i<=n){
            cout<<i<<" ";
            i++;
            i++;
        }
    }
}
int main()
{
    int n;
    cout<<"enter number :";
    cin>>n;
    printS(n);
    return 0;
}


 