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

//inserting the multiple value inside the set 


#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>
pbds;

int main()
{

  pbds st;
 // st.insert;
  st.insert({6,1});
  st.insert({6,2});
  st.insert({7,3});
  st.insert({9,4});
  st.insert({16,5});
  for(int i=0;i<st.size();i++)
  {
      cout<<i<<" "<<st.find_by_order(i)->first<<" "<<st.find_by_order(i)->second<<endl;
  }

 //cout<<st.order_of_key(5)<<endl;

}



