#include <iostream>
#include <stdio.h>
using namespace std;
void operate(int (&A)[10000],int &n)
{
    for(int i=0;i<n-1;i++)
    {
        A[i]=A[i]^A[i+1];
    }
    n--;
}
int main() 
{
    int n,k,A[10000],m;
    cin>>n>>k>>m;
    for(int i=0;i<n;i++)
        cin>>A[i];
    while(k--)
    {
        operate(A,n);
    }
    cout<<A[m];
    
}
