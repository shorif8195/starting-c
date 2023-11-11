#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   getline(cin,s); 

    bool inside_word = false;
   int cnt=0;
  
        for(char c:s){
            if((c>='a'&&c<='z')|| (c>='A'&&c<='Z')){
                if(inside_word==false){
                    cnt++;
                    inside_word=true;
                   
                   
                    }
                

                
            }
            else{
                inside_word=false;
            }

        }
     
   
   cout<<cnt;

    return 0;
}