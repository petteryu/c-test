#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
        {
        double m,v;//声明变量
	string first_statement,second_statement,third_statement;
	first_statement = "now we're going to add 1/2*m*vv";
	second_statement = "now we're going to add m: ";
	third_statement ="please state a value for v: ";
        cout << first_statement << endl;
  
        cout << second_statement;//类似print的功能
        cin >> m;//要求用户输入要计算的
        cout <<  third_statement;
        cin >> v;
        cout << (1.0/2.0)*m*pow(v,2) << endl;
	return 0;
        }
