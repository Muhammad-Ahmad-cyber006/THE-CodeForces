#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int x,y;
 
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            int a;
            cin >> a;
 
            if(a == 1)
            {
                x=i;
                y=j;
            }
    }
}
 
cout << abs(2-x)+abs(2-y);
 
return 0;
}