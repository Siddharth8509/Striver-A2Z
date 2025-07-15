#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i = 0 ; i < n ; i++)
    {
        for(char j = 'A' ; j <= 'A'+i ; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

/*
Expected Output :-

    A
    A B
    A B C
    A B C D
    A B C D E

*/