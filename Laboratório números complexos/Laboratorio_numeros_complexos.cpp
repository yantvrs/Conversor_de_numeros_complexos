#include <iostream>
#include  <cmath>
#define Max 100
#include <iomanip>
using namespace std;
double conversormodulo (double real , double imaginaria);
double conversorangulo (double real , double imaginaria);
double conversorreal( double modulo,double angulo );
double conversorimaginaria(double modulo ,double angulo );

int main(){
  double  real;
  double imaginaria;
  double modulo;
  double angulo;
  double angulograus;
  char c;

  cout << "R ou P?\n" << endl;
  cin >> c;
  if(c == 'r' || c == 'R'){
    cout << "Real: \n" << endl;
cin >> real;
    cout << "Imaginária: \n" << endl;
cin >> imaginaria ;

    cout << fixed << setprecision(2);
cout << "Módulo: " << conversormodulo(real, imaginaria ) << endl ;
cout << "Ângulo: " << conversorangulo(real, imaginaria) << endl ;

  }
  else{
    if(c == 'p'||c == 'P'){
      cin >> modulo;
      cin >> angulo ;

cout << fixed << setprecision(2);
cout << "Real: " << conversorreal( modulo, angulo) << endl ;
cout << "Imaginário: " << conversorimaginaria(modulo ,angulo  ) << endl ;

    }
  }
  return 0;
}
double conversormodulo (double real ,double imaginaria){
double modulo;

modulo = sqrt(pow(real,2)+pow(imaginaria,2));

  return modulo;
}
double conversorangulo (double real , double imaginaria){
double angulo, angulograus;
 
angulo = atan2(imaginaria,real);
angulograus = angulo*(180/ M_PI);

  return angulograus;
}
double conversorreal( double modulo,double angulo){
double real;
double rad;
rad = (angulo*M_PI)/180;

real  =  cos(rad)*modulo;

return real;
}
double conversorimaginaria(double modulo ,double angulo ){
  double imaginaria;
  double rad;
rad = (angulo*M_PI)/180;

imaginaria  =  sin(rad)*modulo;

 return imaginaria;
}
