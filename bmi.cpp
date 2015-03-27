#include<iostream>
#include<string>
#include<fstream>
#include"bmi.h"
#include<cstdio>
using namespace std;
string calbmi::sep(double range){
if(range<15){return "Very severely underweight";}
else if(range<16){return "Severely underweight";}
else if(range<18.5){return "Underweight";}
else if(range<25){return "Normal";}
else if(range<30){return "Overweight";}
else if(range<35){return "Obese Class I (Moderately obese)";}
else if(range<40){return "Obese Class II (Severely obese)";}
else {return "Obese Class III (Very severely obese)";}
};
double calbmi::cal(double kg,double cm){double b;b=kg/((cm*cm/10000));return b;};
calbmi::calbmi(int kg,int cm){mass=kg;height=cm;};
void calbmi::setMass(int kg){if(kg>0){mass=kg;}};
void calbmi::setHeight(int cm){if(cm>0){height=cm;}};
int calbmi::getMass(){int ma;ma=mass;return ma;};
int calbmi::getHeight(){int cm;cm=height;return cm;};
