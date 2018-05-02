#include<bits/stdc++.h>
using namespace std;
void subtraction(){
    int  var_big,var_small,sub;
    cin>>var_big>>var_small;
    sub=var_big-var_small;
    cout<<"Subtraction :"<<sub<<endl;
}
void MUL()
{
	int var1,var2;
	cout<<"Enter Two Variable:"<<endl;
	cin>>var1>>var2;
	cout<< var1*var2<<endl;

}
void sum(int a ,int b){
	cout<<"Enter Two Intiger :";
	cin>>a>>b;
	cout<<"Sum = "<<a+b<endl;
}

inr main()
{

	MUL();
  sum();
  subtraction();

}
