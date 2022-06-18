#include "udf.h" // включение спец. библиотеки пользовательских функций 
#define PI 3.14 // объявление числа ПИ
#define L 7.93 // высоты активной зоны
#define q 9906600 // плотность теплового потока в центре активной зоны
#define D 1.0894448 // толщина активной зоны
#define d 0.6 // эффективная добавка
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

DEFINE_PROFILE(heat_flux_2D, thread, index) // объявление имени используемоего макроса и функции
{
	real z[ND_ND]; // массив, содержащий координаты рассчетного пространства
	real y; // объявление переменной y для координаты y
	real x; // объявление переменной x для координаты x
	real Z;
	face_t f;

	begin_f_loop(f,thread) // специальный цикл
	{
		F_CENTROID(z,f,thread);
		x = z[0]; // присвоение векторов координат переменным
		y = z[1]; // 0 - координата x, 1 - координата у, 2 - координата z
		Z = z[2];
		F_PROFILE(f,thread,index) = (Kq*q*cos((PI*Z)/(D+(2*DD)))*cos((PI*y)/(L+(2*d)))*cos((PI*x)/(D+(2*d))))*e; // расчетная формула
	}
	end_f_loop(f,thread) // выход из специального цикла
}


DEFINE_PROFILE(Coolant_Temp, thread, index) // объявление имени используемоего макроса и функции
{
	real z[ND_ND]; // массив, содержащий координаты рассчетного пространства
	
	face_t f;

	begin_f_loop(f,thread) // специальный цикл
	{
		F_CENTROID(z,f,thread);
		F_PROFILE(f,thread,index) = Kt*Tc; // расчетная формула
	}
	end_f_loop(f,thread) // выход из специального цикла
}


DEFINE_PROFILE(Mass_Flow_distr_11, thread, index) // объявление имени используемоего макроса и функции
{
	real z[ND_ND]; // массив, содержащий координаты рассчетного пространства
	real y; // объявление переменной y для координаты y
	real x; // объявление переменной x для координаты x
	face_t f;

	begin_f_loop(f,thread) // специальный цикл
	{
		F_CENTROID(z,f,thread);
	
		F_PROFILE(f,thread,index) = Kg1*G1; // расчетная формула
	}
	end_f_loop(f,thread) // выход из специального цикла
}






DEFINE_PROFILE(Mass_Flow_distr_12, thread, index) // объявление имени используемоего макроса и функции
{
	real z[ND_ND]; // массив, содержащий координаты рассчетного пространства
	real y; // объявление переменной y для координаты y
	real x; // объявление переменной x для координаты x
	face_t f;

	begin_f_loop(f,thread) // специальный цикл
	{
		F_CENTROID(z,f,thread);
	
		F_PROFILE(f,thread,index) = Kg2*G2; // расчетная формула
	}

	end_f_loop(f,thread) // выход из специального цикла
}



DEFINE_PROFILE(Mass_Flow_distr_m1, thread, index) // объявление имени используемоего макроса и функции
{
	real z[ND_ND]; // массив, содержащий координаты рассчетного пространства
	real y; // объявление переменной y для координаты y
	real x; // объявление переменной x для координаты x
	face_t f;

	begin_f_loop(f,thread) // специальный цикл
	{
		F_CENTROID(z,f,thread);
	
		F_PROFILE(f,thread,index) = Kg3*G3; // расчетная формула
	}
	end_f_loop(f,thread) // выход из специального цикла
}

DEFINE_PROFILE(Mass_Flow_distr_m2, thread, index) // объявление имени используемоего макроса и функции
{
	real z[ND_ND]; // массив, содержащий координаты рассчетного пространства
	real y; // объявление переменной y для координаты y
	real x; // объявление переменной x для координаты x
	face_t f;

	begin_f_loop(f,thread) // специальный цикл
	{
		F_CENTROID(z,f,thread);
	
		F_PROFILE(f,thread,index) = Kg4*G4; // расчетная формула
	}
	
	end_f_loop(f,thread) // выход из специального цикла
}






	