#include "udf.h"
#define PI 3.14
#define L 7.93
#define q 9906600 
#define D 1.0894448 
#define d 0.6
#define DD 150
#define Tc 764.15
#define G1 0.0307632 
#define G2 0.0166271
#define G3 0.0305131
#define G4 0.0164581
#define Kq 1
#define Kt 1
#define Kg1 1
#define Kg2 1
#define Kg3 1
#define Kg4 1
#define e 1.2026458

DEFINE_PROFILE(heat_flux_2D, thread, index)
{
	real z[ND_ND];
	real y;
	real x; 
	real Z;
	face_t f;

	begin_f_loop(f,thread) 
	{
		F_CENTROID(z,f,thread);
		x = z[0]; 
		y = z[1];
		Z = z[2];
		F_PROFILE(f,thread,index) = (Kq*q*cos((PI*Z)/(D+(2*DD)))*cos((PI*y)/(L+(2*d)))*cos((PI*x)/(D+(2*d))))*e;
	}
	end_f_loop(f,thread)
}


DEFINE_PROFILE(Coolant_Temp, thread, index) 
{
	real z[ND_ND]; 
	
	face_t f;

	begin_f_loop(f,thread) 
	{
		F_CENTROID(z,f,thread);
		F_PROFILE(f,thread,index) = Kt*Tc; 
	}
	end_f_loop(f,thread) 
}


DEFINE_PROFILE(Mass_Flow_distr_11, thread, index)
{
	real z[ND_ND]; 
	real y; 
	real x; 
	face_t f;

	begin_f_loop(f,thread) 
	{
		F_CENTROID(z,f,thread);
	
		F_PROFILE(f,thread,index) = Kg1*G1;
	}
	end_f_loop(f,thread)
}






DEFINE_PROFILE(Mass_Flow_distr_12, thread, index)
{
	real z[ND_ND]; 
	real y; 
	real x; 
	face_t f;

	begin_f_loop(f,thread) 
	{
		F_CENTROID(z,f,thread);
	
		F_PROFILE(f,thread,index) = Kg2*G2; 
	}

	end_f_loop(f,thread)
}



DEFINE_PROFILE(Mass_Flow_distr_m1, thread, index)
{
	real z[ND_ND];
	real y; 
	real x; 
	face_t f;

	begin_f_loop(f,thread) 
	{
		F_CENTROID(z,f,thread);
	
		F_PROFILE(f,thread,index) = Kg3*G3; 
	}
	end_f_loop(f,thread) 
}

DEFINE_PROFILE(Mass_Flow_distr_m2, thread, index) 
{
	real z[ND_ND]; 
	real y; 
	real x; 
	face_t f;

	begin_f_loop(f,thread) 
	{
		F_CENTROID(z,f,thread);
	
		F_PROFILE(f,thread,index) = Kg4*G4; 
	}
	
	end_f_loop(f,thread)
}






	
