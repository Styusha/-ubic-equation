#pragma once
#include <math.h>
#include <complex>

using namespace std;
using namespace System;

class Proverka {							
	public: 
		double PR (double A)					//проверка числа на равенство нулю
		{if (A==0) return 0;
		 else	   return 1;}
};

class Resh {
	public:
		double kub (double a)					//взятие кубического корня (отрицательного или положительного числа)
		{   if (a<0)
			   return ((-1)*pow(fabs(a),1./3));
			else
			   return  pow(a,1./3);}


		double okr (double a)                  //округление числа до 3 знака после запятой
		{ if (a<0) 
			return (double)((int) -((1000*fabs(a)+0.5)))/1000;
		  else
		    return (double)((int)(1000*a+0.5))/1000;}

	void kard (double a,double b,double c,double d, double **masrez,int n,int m)  //решение кубического уравнения 
		{
		  double p,q,Q, alf, bet;												  //по формуле Кардано
		  p = (3*a*c-b*b)/(3*a*a);
		  q = (2*b*b*b-9*a*b*c+27*a*a*d)/(27*a*a*a);
		  Q = (p/3)*(p/3)*(p/3)+(q/2)*(q/2);
		  

		  double g =-(q/2)+sqrt(Q);
			     alf = okr(kub(g));	
        
			     g =-(q/2)-sqrt(Q);
			     bet=okr(kub(g));

			
			std::complex<double> y1 = alf+bet;
			std::complex<double> y2(-(alf+bet)/2, (alf-bet)/2*sqrt(3.));
			std::complex<double> y3(-(alf+bet)/2, -(alf-bet)/2*sqrt(3.));

			std::complex<double>x1 = y1- b/(3*a);
			std::complex<double>x2 = y2- b/(3*a);
			std::complex<double>x3 = y3- b/(3*a);
			
			masrez[0][0]=okr(real(x1));
			masrez[1][0]=okr(imag(x1));
			masrez[0][1]=okr(real(x2));
			masrez[1][1]=okr(imag(x2));
			masrez[0][2]=okr(real(x3));
			masrez[1][2]=okr(imag(x3));
		
		}
};