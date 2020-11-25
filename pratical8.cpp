#include <bits/stdc++.h>

using namespace std;

class Area{
	public:
	int r,s;
	void circle(){
		cout<<"Enter radius: ";
		cin>>r;
		cout<<3.14*r*r <<"\n";
		}
		void square(){
			cout<<"Enter side: ";
			cin>>s;
			cout<<s*s <<"\n";
			}
	};
	
int main(){
	cout<<"Area Calculator" <<"\n";
	Area myarea;
	myarea.circle();
	myarea.square();
}