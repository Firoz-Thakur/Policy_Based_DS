#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
pbds;

int main()
{

  pbds st;
  st.insert(3);
  st.insert(6);
  st.insert(8);
  st.insert(1);
  st.insert(2);
  st.insert(7);
  for(int i=0;i<st.size();i++)
  {
      cout<<i<<" "<<*st.find_by_order(i)<<endl;
  }

 cout<<st.order_of_key(5)<<endl;

}

