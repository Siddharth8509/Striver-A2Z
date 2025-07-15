#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i = 0 ; i < n ; i++)
    {
        char alpha = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j = 0 ; j < n-i-1 ; j++)
        {
            cout<<" ";
        }

        for(int k = 0 ; k < (2*i)+1  ; k++)
        {
            cout<<alpha;
            if(k>=breakpoint) alpha--;
            else alpha++;
        }

        for(int j = 0 ; j < n-i-1 ; j++)
        {
            cout<<" ";
        }
        
        cout<<endl;
        
    }
}


/*
Expected Output :-

    A    
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/