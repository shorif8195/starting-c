#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   getline(cin,s);
//    bool f =s.find("EGYPT");
   while(s.find("EGYPT")!=EOF){
         int t=s.find("EGYPT") ;
          s.replace(t,5," ");
   }
    // int t=s.find("EGYPT") ;
    // s.replace(t,5," ");
   cout<<s;
    return 0;
}