#include<bits/stdc++.h>
using namespace std;
int main(){
   char x;
   cin>>x;
   bool t = isdigit(x);
   if(t==true){
    cout<<"IS DIGIT";
   } 
   else{
      cout<<"ALPHA\n";
      (x>='A'&&x<='Z')?cout<<"IS CAPITAL\n":cout<<"IS SMALL\n";
   }
    return 0;
}