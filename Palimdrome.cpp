/******* BISMILLAHIR RAHMANIR RAHIM *******/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fio(i,n) for(int i=1;i<=n;i++)
#define fiz(i,n) for(int i=0;i<n;i++)
#define fd(i,n) for(int i=n;i>=0;i--)
#define co(n) cout<<n<<endl
#define coy cout<<"YES"<<endl
#define con cout<<"NO"<<endl
#define ci(n) cin>>n
#define w(x) while(x--)
#define ci2(a,b) cin>>a>>b
#define ci3(a,b,c) cin>>a>>b>>c
#define mod 1e9+7
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

bool valid(char c){
  if((c>='a' && c<='z')||(c>='A' && c<='Z')||

(c>='0' && c<='9')) return 1;

return 0;
}
char istolower(char c){

    if((c>='a' && c<='z') || (c>='0' && c<='9'))
       return c ;
    else{
     char tem = c-'A'+'a';
     return tem;
}


}
bool check(string s,int n,int i){

     if(i>=n/2) return true;
     if(s[i]==s[n-i-1])
         return check(s,n,i+1);
    return false;


}

int main(){

fastio;

int t,tc=0;



       int m,y=0,a[3],b,c;
        string s,x;
     getline(cin,s);
      for(int i=0;i<s.size();i++)
        {

          if(valid(s[i])) x.push_back(s[i]);


}
      for(int i=0;i<x.size();i++)
        {

          x[i]=istolower(x[i]);

  }
 fiz(i,x.size()) cout<<x[i]<<" ";
 cout<<endl;
    int n=x.size();
       cout<<check(x,n,0)<<endl;


}

/*****************  ALHAMDULILLAH  *****************/
