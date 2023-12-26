
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a , b;
    cin>>a>>b ;
    int carry = 0;
    int ans= 0;
    deque<int>dq ;
    while((a/10 >0) | (b/10 > 0) ){
       
        dq.push_front((a%10 + b%10 +carry) %10) ;
         carry  = (a%10 + b%10 +carry)/10 ;
        a/=10 ;
        b/=10 ;
    }
   
        dq.push_front((a%10 + b%10 + carry) %10) ;
         carry  = (a%10 + b%10 +carry)/10 ;
      if(carry!= 0)
    dq.push_front(carry) ;
    for(auto an :dq){
        cout<<an<<" ";
    }
    cout<<endl;
    return 0;
}