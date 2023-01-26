#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("code.txt","r",stdin);
	freopen("answer.txt","w",stdout);
	string a;
	int total=0;  
	while(cin>>a){
		if(a.find("MQ==")!=-1){
			cout<<"A\n";	
			total+=1;
			if(total%5==0) cout<<endl;
		}
		if(a.find("Mg==")!=-1){
			cout<<"B\n";	
			total+=1;
			if(total%5==0) cout<<endl;
		}
		if(a.find("Mw==")!=-1){
			cout<<"C\n";	
			total+=1;
			if(total%5==0) cout<<endl;
		}
	}
	fclose(stdin);
    fclose(stdout);
	system("answer.txt"); 
	return 0;
}

