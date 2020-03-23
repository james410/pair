#include <iostream>
#include <utility>
#include <tuple>
#include <string>
using namespace std;

int main(){
	tuple<int,int,double,string>t1(1,2,3,"good");

	cout<<get<0>(t1)<<' '<<get<1>(t1)<<' '<<get<2>(t1)<<' '<<get<3>(t1)<<endl;
	return 0;
}
