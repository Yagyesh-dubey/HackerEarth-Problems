#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  string n;
  getline(cin,n);
// cin>>n;
  stack<char>st;
  for(int i=0;i<n.size();i++)
  {
    st.push(n[i]);
  }
 while (!st.empty()) 
 {
  cout << st.top();
  st.pop();
}
  return 0;
}
