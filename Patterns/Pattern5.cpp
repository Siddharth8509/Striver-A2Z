#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i = 0 ; i < n ; i++)
    {
        int start;

        if(i%2 == 0)
            start = 0;
        else start = 1;

        for(int j = 0 ; j < i ; j++)
        {
            cout<<start<<" ";
            start = 1 - start;
        }
        cout<<endl;
    }
}


/*
Expected Output :-

    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1

*/