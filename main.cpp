#include<iostream>
#include<string>
#include<fstream>
#include<cmath>
#include<cstdio>
#include"bmi.h"
/*
using namespace std;
class calbmi
{
public:
string sep(double range){
if(range<15){return "Very severely underweight";}
else if(range<16){return "Severely underweight";}
else if(range<18.5){return "Underweight";}
else if(range<25){return "Normal";}
else if(range<30){return "Overweight";}
else if(range<35){return "Obese Class I (Moderately obese)";}
else if(range<40){return "Obese Class II (Severely obese)";}
else {return "Obese Class III (Very severely obese)";}
}
double cal(double kg,double cm){double b;b=kg/((cm*cm/10000));printf("%.16lf\n",b);return b;}
calbmi(int kg,int cm){mass=kg;height=cm;};
void setMass(int kg){if(kg>0){mass=kg;}}
void setHeight(int cm){if(cm>0){height=cm;}}
int getMass(){int ma;ma=mass;return ma;}
int getHeight(){int cm;cm=height;return cm;}
private:
int height;
int mass;
};
*/

int main()
{
calbmi bmi01();
int a,b;
double bmi; 
string n;
calbmi calbmi01(0,0);
ifstream filein("file.in.txt",ios::in);
ofstream fileout("file.out.txt",ios::out);
while(filein>>a>>b){
calbmi01.setMass(b);
calbmi01.setHeight(a);
bmi=calbmi01.cal(calbmi01.getMass(),calbmi01.getHeight());
//cout<<calbmi01.getMass()<<calbmi01.getHeight()<<endl;
n=calbmi01.sep(bmi);
if(calbmi01.getMass()==b&&calbmi01.getHeight()==a){
fileout<<bmi<<" "<<n<<endl;
}
}
filein.close();
fileout.close();
return 0;
}
