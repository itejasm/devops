#include<iostream>
using namespace std;

int repete (int n);

int main ()
{
    for(int i=0;i<10;i++)
    {
        cout<<repete(i)<<"\t";
    }
}

int repete(int n)
{
    if(n<=0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
     
    return repete(n-1)+repete(n-2);
}