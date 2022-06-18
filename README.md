# Fluent-UDFs
UDFs for simulating nuclear reactor core

This UDFs represents an approach how to create boundary condition which utilizes non constant profile. I used it to simulate heat generations 
field in nuclear reactors such as GT-MHR and PWR.

This UDFs can be used to simulate various boundary conditions in various medias.

*wall_heat_flux_with_cosine_heat_generation_distribution.c* 
> UDF which I use to simulate heat flux through a coolant channew wall which 
was a part of research: **[Research of the influence of intensification of heat transfer on distribution of temperature in the active core of the gas cooled nuclear reactor of the «GT-MHR» project](https://iopscience.iop.org/article/10.1088/1742-6596/891/1/012069)**


*GT_MHR_cosine_volume_heat_generation_UDF_with_other_boundary_conditions.c* 
> UDF which I use to simulate heat generation field in an active core of GT-MHR nuclear reactor which 
was a part of research: **[Temperature field in gas-cooled reactor core in transient conditions under different approaches to mass flow profiling](https://nucet.pensoft.net/article/48392/)**


*PWR_cosine_volume_heat_generation_UDF_with_other_boundary_conditions.c*
> This UDF is basically the same as previous but it has been adjusted to be utilized with PWR active core which 
was a part of this research: **[Real time temperature field recovery of a heterogenous reactor based on the results of calculations in a homogenous core](https://nuclear-power-engineering.ru/article/2022/01/05/)**



Hope this repo will help somebody.

Best regards.
