#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;//Question e Value beshi boro holee ei man diyee Mod korte boleche tai define kora.
int main() {
int t;
cin>>t;
while(t--)
{
    int n,cnt;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        if(ans<=1 || v[i]==1)//sudu 1 holee gon er bodol e + korle  ans max kora jabe bole,Besides,onekgolo 1 takle sesob golo + kore bakigolo * kora,karon joto 1 MULtiply korona keno 1 i asbe,Onnodike Adition korle 1 bodolee 2,3,4..erokom barbe tai.
        {
            ans+=v[i];
        }
        else ans=(ans*v[i])%MOD;//Question e Value beshi boro holee ei man diyee Mod korte boleche tai MOD kore kore answer boro o accepted kora.
    }

    cout<<ans<<endl;
}
}
