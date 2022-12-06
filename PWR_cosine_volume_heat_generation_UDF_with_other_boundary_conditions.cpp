#include "udf.h" 
#define PI 3.14 
#define L 3.658 
#define DD 1000 
#define d 0.06 
#define D 0.125 
#define Tc 565.05 
#define G 5.1336552 
#define Kq 1.05 
#define Kt 1 
#define Kg 1 
#define q1 270360000 
#define q2 391170000 
#define q3 500460000 
#define q4 597100000 
#define q5 673040000 
#define q6 729980000 
#define q7 764500000 
#define q8 775430000 


DEFINE_PROFILE(heat_flux_1, thread, index) 
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
		
		
		F_PROFILE(f,thread,index) = Kq*q1*cos((PI*y)/(L+(2*d)));
			 
			}
	end_f_loop(f,thread) 
}



DEFINE_PROFILE(heat_flux_2, thread, index) 
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
		
		
		F_PROFILE(f,thread,index) = Kq*q2*cos((PI*y)/(L+(2*d)));
			 
			}
	end_f_loop(f,thread) 
}

DEFINE_PROFILE(heat_flux_3, thread, index)
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
		
		
		F_PROFILE(f,thread,index) = Kq*q3*cos((PI*y)/(L+(2*d)));
			 
			}
	end_f_loop(f,thread) 
}



DEFINE_PROFILE(heat_flux_4, thread, index) 
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
		
		
		F_PROFILE(f,thread,index) = Kq*q4*cos((PI*y)/(L+(2*d)));
			 
			}
	end_f_loop(f,thread) 
}

DEFINE_PROFILE(heat_flux_5, thread, index) 
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
		
		
		F_PROFILE(f,thread,index) = Kq*q5*cos((PI*y)/(L+(2*d)));
			 
			}
	end_f_loop(f,thread) 
}


DEFINE_PROFILE(heat_flux_6, thread, index) 
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
		
		
		F_PROFILE(f,thread,index) = Kq*q6*cos((PI*y)/(L+(2*d)));
			 
			}
	end_f_loop(f,thread) 
}

DEFINE_PROFILE(heat_flux_7, thread, index) 
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
		
		
		F_PROFILE(f,thread,index) = Kq*q7*cos((PI*y)/(L+(2*d)));
			 
			}
	end_f_loop(f,thread)
}


DEFINE_PROFILE(heat_flux_8, thread, index) 
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
		
		
		F_PROFILE(f,thread,index) = Kq*q8*cos((PI*y)/(L+(2*d)));
			 
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
	
		F_PROFILE(f,thread,index) = Kg*G; 
	}
	end_f_loop(f,thread)
}

	
