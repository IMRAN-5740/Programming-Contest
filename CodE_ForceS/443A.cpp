#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int cnt=0;
	int len=s.size();
	//cout<<len<<endl;
	int arr[26]={0};
		for(int i=0;i<len;i++)
		{
				if(s[i]=='a' or s[i]=='A'){
					arr[0]++;
				}
				else if(s[i]=='b' or s[i]=='B'){
					arr[1]++;
				}
				else if(s[i]=='c' or s[i]=='C'){
					arr[2]++;
				}
				else if(s[i]=='d' or s[i]=='D'){
					arr[3]++;
				}
				else if(s[i]=='e' or s[i]=='E'){
					arr[4]++;
				}
				else if(s[i]=='f' or s[i]=='F'){
					arr[5]++;
				}
				else if(s[i]=='g' or s[i]=='G'){
					arr[6]++;
				}
				else if(s[i]=='h' or s[i]=='H'){
					arr[7]++;
				}
				else if(s[i]=='i' or s[i]=='I'){
					arr[8]++;
				}
				else if(s[i]=='j' or s[i]=='J'){
					arr[9]++;
				}
				else if(s[i]=='k' or s[i]=='K'){
					arr[10]++;
				}
				else if(s[i]=='l' or s[i]=='L'){
					arr[11]++;
				}
				else if(s[i]=='m' or s[i]=='M'){
					arr[12]++;
				}
				else if(s[i]=='n' or s[i]=='N'){
					arr[13]++;
				}
				else if(s[i]=='o' or s[i]=='O'){
					arr[14]++;
				}
				else if(s[i]=='p' or s[i]=='P'){
					arr[15]++;
				}
				else if(s[i]=='q' or s[i]=='Q'){
					arr[16]++;
				}
				else if(s[i]=='r' or s[i]=='R'){
					arr[17]++;
				}
				else if(s[i]=='s' or s[i]=='T'){
					arr[18]++;
				}
				else if(s[i]=='u' or s[i]=='U'){
					arr[19]++;
				}
				else if(s[i]=='v' or s[i]=='V'){
					arr[20]++;
				}
				else if(s[i]=='w' or s[i]=='W'){
					arr[21]++;
				}
				else if(s[i]=='x' or s[i]=='X'){
					arr[22]++;
				}
				else if(s[i]=='y' or s[i]=='Y'){
					arr[23]++;
				}
				else if(s[i]=='z' or s[i]=='Z'){
					arr[24]++;
				}
				else if(s[i]=='t' or s[i]=='T'){
					arr[25]++;
				}
	}
	// for(int i=0;i<26;i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;
	//int cnt=0;
	for(int i=0;i<26;i++){
		if(arr[i]>0){
			cnt++;
		}
	}
	cout<<cnt<<endl;
	//cout<<s<<endl;	
	return 0;
}