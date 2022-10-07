	#include<bits/stdc++.h>
	using namespace std;
	int main(){
		string s;
		cin>>s;
		int len=s.size();
		for(int i=0;i<len;i++)
		{
			if(s[i]<='Z')
			{
				s[i]=s[i]+32;
				//i++;
			}
		}
		// int cnt=0;
		// for(int i=0;i<len;i++){
		// 	if(s[i]!='a' && s[i]!='A' && s[i]!='e' && s[i]!='E' && s[i]!='i' && s[i]!='I' && s[i]!='o' && s[i]!='O' && s[i]!='u' && s[i]!='U')
		// 	{
		// 		cnt++;
		// 	}
		// }
		// if(cnt%2==0){
		// 	//female even
		// 	cout<<"CHAT WITH HER!"<<endl;
		// }else{
		// 	//male odd
		// 	cout<<"IGNORE HIM!"<<endl;
		// }
		int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0,c11=0,c12=0,c13=0,c14=0,c15=0,c16=0,c17=0,c18=0,c19=0,c20=0,c21=0,c22=0,c23=0,c24=0,c25=0,c26=0;
		for(int i=0;i<len;i++)
		{

			if(s[i]=='a'){
				c1=1;
			}
			else if(s[i]=='b'){
				c2=1;
			}
			else if(s[i]=='c'){
				c3=1;
			}
			else if(s[i]=='d'){
				c4=1;
			}
			else if(s[i]=='e'){
				c5=1;
			}
			else if(s[i]=='f'){
				c6=1;
			}
			else if(s[i]=='g'){
				c7=1;
			}
			else if(s[i]=='h'){
				c8=1;
			}
			else if(s[i]=='i'){
				c9=1;
			}
			else if(s[i]=='j'){
				c10=1;
			}
			else if(s[i]=='k'){
				c11=1;
			}
			else if(s[i]=='l'){
				c12=1;
			}
			else if(s[i]=='m'){
				c13=1;
			}
			else if(s[i]=='n'){
				c14=1;
			}
			else if(s[i]=='o'){
				c15=1;
			}
			else if(s[i]=='p'){
				c16=1;
			}
			else if(s[i]=='q'){
				c17=1;
			}
			else if(s[i]=='r'){
				c18=1;
			}
			else if(s[i]=='s'){
				c19=1;
			}
			else if(s[i]=='t'){
				c20=1;
			}
			else if(s[i]=='u'){
				c21=1;
			}
			else if(s[i]=='v'){
				c22=1;
			}
			else if(s[i]=='w'){
				c23=1;
			}
			else if(s[i]=='x'){
				c24=1;
			}
			else if(s[i]=='y'){
				c25=1;
			}
			else if(s[i]=='z'){
				c26=1;
			}


		}
		int res=c1+c2+c3+c4+c5+c6+c7+c8+c9+c10+c11+c12+c13+c14+c15+c16+c17+c18+c19+c20+c21+c22+c23+c24+c25+c26;
		//cout<<res<<endl;
		if(res%2==0){
			//female even
			cout<<"CHAT WITH HER!"<<endl;
		}else{
			//male odd
			cout<<"IGNORE HIM!"<<endl;
		}
		// cout<<s<<endl;
		// cout<<len<<endl;
		//cout<<cnt<<endl;
		return 0;
	}