#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){

        printf("Case %d:\n",i);
        stack<string> FORWARD,BACK;
        string str,url;
        FORWARD.push("http://www.lightoj.com/");
        while(1){
            cin>>str;
            string temp;
            if(str=="VISIT"){
                cin>>url;
                if(FORWARD.empty()){
                    cout<<"Ignored"<<endl; 
                }
                else{
                    temp=FORWARD.top();
                    FORWARD.pop();
                    BACK.push(temp);

                    while(!FORWARD.empty()){
                        FORWARD.pop();
                    }
                    FORWARD.push(url);
                }
                cout<<FORWARD.top()<<endl;
            }
            else if(str=="BACK"){
                if(BACK.empty()){
                    cout<<"Ignored"<<endl;
                }else{
                    temp=BACK.top();
                    BACK.pop();
                    FORWARD.push(temp);
                    cout<<FORWARD.top()<<endl;
                }
            }
            else if(str=="FORWARD"){
                if(FORWARD.size()<2){
                    cout<<"Ignored"<<endl;
                }
                else{
                    temp=FORWARD.top();
                    FORWARD.pop();
                    BACK.push(temp);
                    cout<<FORWARD.top()<<'\n';
                }
            }
            else if(str=="QUIT"){
                break;
            }
        }
    }
    return 0;
}