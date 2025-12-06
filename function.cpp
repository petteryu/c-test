#include<iostream>
#include<cmath>
#include<string>
using namespace std;
double Re_calu(double rho, double U, double D,double mu);
int main()
{
	double rho,U,D,mu,Re;
	cout <<"input density in kg/m3 "<< endl;
	cin >>rho;
	cout <<"input velocity in m/s" <<endl;
	cin >>U;
	cout <<"input characteristic lenth in m" << endl;
	cin >>D;
	cout <<"input dynamic viscosity in SI unite" << endl;
	cin >>mu;
	Re=Re_calu(rho,U,D,mu);
	cout <<"计算结果为" <<Re << endl;
	return 0;
}
double Re_calu(double rho,double U,double D,double mu)
{
	double Re;
	Re=rho*U*D/mu;
	return Re;
}
