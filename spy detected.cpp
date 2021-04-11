/*A. Spy Detected!
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given an array a consisting of n (n≥3) positive integers. It is known that in this array, all the numbers except one are the same (for example, in the array [4,11,4,4] all numbers except one are equal to 4).

Print the index of the element that does not equal others. The numbers in the array are numbered from one.

Input
The first line contains a single integer t (1≤t≤100). Then t test cases follow.

The first line of each test case contains a single integer n (3≤n≤100) — the length of the array a.

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤100).

It is guaranteed that all the numbers except one in the a array are the same.

Output
For each test case, output a single integer — the index of the element that is not equal to others.

Example
inputCopy
4
4
11 13 11 11
5
1 4 4 4 4
10
3 3 3 3 10 3 3 3 3 3
3
20 20 10
outputCopy
2
1
5
3*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int a[100];
        cin>>n;
        int ans=1;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<n;i++)
        {
            if(a[i+1]=a[i])
            {
                ans++;
            }
            else
            {
                cout<<ans<<endl;
                break;
            }

        }

    }
}

