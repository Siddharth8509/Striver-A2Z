#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ; 
    cin>>n;
    
    for(int i = 0 ; i < n ; i++)
    {
        //space
        for(int j = 0 ; j < i ; j++ )
        {
            cout<<" ";
        }

        //star
        for(int k = 0 ; k < (2*n-2*i-1) ; k++)
        {
            cout<<"*"<<" ";
        }

        //space
        for(int j = 0 ; j < i ; j++ )
        {
            cout<<" ";
        }

        cout<<endl;
    }
}

/*
Expected Output :- 
    
    * * * * *
      * * *
        *
*/