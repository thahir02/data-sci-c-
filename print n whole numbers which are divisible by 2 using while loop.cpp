#include<iostream>
using namespace std;
//to print n whole numbers which are divisible by 2
void printS(int n)//fuction 
{
    if(n<0){
        cout<<"invalid number enter positive or whole number";
    }
    else
    {
        if(n%2!=0){
        cout<<"It is odd number enter even";
        }
        else{
        int i=0;
        while(i<=n){
            cout<<i<<" ";
            i++;
            i++;
        }
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

#include<iostream>
using namespace std;
//to print given n natural numbers
void printS(int n)//fuction 
{
    if(n<=0){
        cout<<"invalid number enter positive number";
    }
    else
    {
        int i=1;
        for(i=1;i<=n;i++){
            cout<<i<<" ";
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

 