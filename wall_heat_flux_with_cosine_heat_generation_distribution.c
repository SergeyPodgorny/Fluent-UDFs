#include "udf.h"
#define PI 3.14159265358979323846
#define L 9.13
#define q 193210.774

DEFINE_PROFILE(heat_flux_1588, thread, index)
{
	real z[ND_ND];
	real y;
	face_t f;

	begin_f_loop(f,thread)
	{
		F_CENTROID(z,f,thread);
		y = z[1];
		F_PROFILE(f,thread,index) = q*cos((PI*y)/L);
	}
	end_f_loop(f,thread)
}
