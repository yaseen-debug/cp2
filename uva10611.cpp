#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>h1(n);
    for(int i=0;i<n;i++)
        cin >> h1[i];
    int q;
    cin >> q;
    vector<int>h2(q);
    for(int i=0;i<q;i++)
        cin >> h2[i];
    for(int i=0;i<q;i++)
    {
        int h=h2[i];
        auto lower=lower_bound(h1.begin(),h1.end(),h);
        if(lower==h1.begin())
            cout << "X ";
        else
            cout << *(--lower) << " ";
        auto upper=upper_bound(h1.begin(),h1.end(),h);
        if(upper==h1.end())
            cout << "X" << endl;
        else
            cout << *(upper) << endl;
    }
}
