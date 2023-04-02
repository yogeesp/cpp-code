#include<bits/stdc++.h>
using namespace std;
class date{
	int dd;
	int mm;
	int yyyy;
	public:
		void input(){
			cout<<"Enter date in dd:mm:yyyy format:"<<endl;
			cin>>dd>>mm>>yyyy;
		}
		void display(){
			if(mm<=0||mm>12){
				throw "invalid month";
			}
			if(dd<=0||dd>31){
				throw "invalid date";
			}
			if(dd>29&&mm==2){
				throw "throw invalid date of february";
			}
		cout<<"The date is :"<<dd<<":"<<mm<<":"<<yyyy<<endl;
		}
};
int main(){
	date D;
	try{
		D.input();
		D.display();
	}
	catch(char const *str){
		cout<<"Exception:"<<str<<endl;
		exit(1);
	}
	catch(...){
		cout<<"invalid expression";
	}
	return 0;
}
