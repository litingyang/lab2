#include<iostream>
#include<string>
#ifndef BMI_H
#define BMI_H
using namespace std;
class calbmi
{
public:
string sep(double);
double cal(double ,double );
calbmi(int ,int );
void setMass(int );
void setHeight(int );
int getMass();
int getHeight();
private:
int height;
int mass;
};
#endif
