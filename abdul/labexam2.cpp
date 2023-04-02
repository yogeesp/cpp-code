#include<bits/stdc++.h>
using namespace std;
class inventory{
	int cost,code,count,totalcost;
	public:
		inventory(int code,int cost,int count=0)
		{
			this->code=code;
			this->cost=cost;
			this->count=count;
			this->totalcost=this->cost*this->count;
		}
		void purchase(int quantity=1){
			this->count=quantity;
			this->totalcost=this->cost*this->count;
		}
		void sale(int quantity=1){
			this->count=quantity;
			this->totalcost=this->cost*quantity;
		}
		void output(){
			cout<<"Code:"<<code<<endl;
			cout<<"Cost:"<<cost<<endl;
			cout<<"count:"<<count<<endl;
			cout<<"Total Cost:"<<totalcost<<endl;
		}

};
int  main(){
	int code,cost,count,q;
	cout<<"Enter code,cost and count:";
	cin>>code>>cost>>count;
	inventory D(code,cost,count);
	cout<<"Enter purchase quantity:";
	cin>>q;
	D.purchase(q);
	D.output();
	cout<<"Enter sale quantity:";
	cin>>q;
	D.sale(q);
	D.output();
}
