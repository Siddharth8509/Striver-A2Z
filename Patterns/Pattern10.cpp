#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int spaces = 2*n-2;
    for(int i = 1 ; i <= 2*n-1 ; i++)
    {
        int stars = i;
        if(i>n) stars = 2*n-i;

        for(int j = 1 ; j <= stars ; j++)
        {
            cout<<"*";
        }

        for(int k = 0 ; k < spaces ; k++)
        {
            cout<<" ";
        }

        for(int j = 1 ; j <= stars ; j++)
        {
            cout<<"*";
        }

        cout<<endl;
        
        if(i>=n) spaces+=2;
        else spaces-=2;
    }
}

/*
Expected Output :- 

    *         *   
    * *     * *
    * * * * * *
    * *     * *
    *         *

*/