# Fluent-UDFs
UDFs for simulating nuclear reactor core

A user-defined function, or UDF, is a function that you program that can be dynamically loaded with the ANSYS FLUENT solver to enhance the standard features of the code. For example, you can use a UDF to define your own boundary conditions, material properties, and source terms for your flow regime, as well as specify customized model parameters (e.g., DPM, multiphase models), initialize a solution, or enhance postprocessing. See Section 1.2 in ANSYS FLUENT UDF Manual for more examples. 

This UDFs represents an approach how to create boundary condition which utilizes a non constant profile. I mainly used it to simulate heat generation
field in nuclear reactors such as GT-MHR and PWR.



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
