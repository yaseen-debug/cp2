#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q,casenum=1;
    while(cin >> n >> q,n || q)
    {
        vector<int>m(n);
        for(int i=0;i<n;i++)
            cin >> m[i];
    sort(m.begin(),m.end());
    cout << "CASE# " << casenum++ << ":\n";
    while(q--)
    {
        int query;
        cin >> query;
        auto it=lower_bound(m.begin(),m.end(),query);
        if(it!=m.end() && *it==query)
            cout << query << " found at " << (it-m.begin()+1) << endl;
        else
            cout << query << " not found\n";
    }
    }
}
