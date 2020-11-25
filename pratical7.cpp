#include <bits/stdc++.h>

using namespace std;

class bike{
	public:
	string name;
	int d;
	void info(){
		cout<<"Enter your bike name: ";
		cin>>name;
		cout<<"Year of manufacturing: ";
		cin>>d;
		cout<<name <<" " <<d <<"\n";
		}
	};
	
int main(){
	bike mybike;
	mybike.info();
	}