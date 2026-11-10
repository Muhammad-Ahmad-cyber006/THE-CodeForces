#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,count=0;
    cin >> n;
 
    int bills[]={100,20,10,5,1};
 
    for(int i=0;i<5;i++)
    {
        count += n/bills[i];
        n %= bills[i];
    }
 
cout << count;
return 0;
}