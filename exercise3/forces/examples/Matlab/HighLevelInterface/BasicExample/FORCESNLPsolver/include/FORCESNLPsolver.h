/*
FORCESNLPsolver : A fast customized optimization solver.

Copyright (C) 2013-2018 EMBOTECH AG [info@embotech.com]. All rights reserved.


This software is intended for simulation and testing purposes only. 
Use of this software for any commercial purpose is prohibited.

This program is distributed in the hope that it will be useful.
EMBOTECH makes NO WARRANTIES with respect to the use of the software 
without even the implied warranty of MERCHANTABILITY or FITNESS FOR A 
PARTICULAR PURPOSE. 

EMBOTECH shall not have any liability for any damage arising from the use
of the software.

This Agreement shall exclusively be governed by and interpreted in 
accordance with the laws of Switzerland, excluding its principles
of conflict of laws. The Courts of Zurich-City shall have exclusive 
jurisdiction in case of any dispute.

*/

/* Generated by FORCES PRO v1.6.121 on Thursday, March 22, 2018 at 9:40:46 PM */

#include <stdio.h>

#ifndef __FORCESNLPsolver_H__
#define __FORCESNLPsolver_H__

/* DATA TYPE ------------------------------------------------------------*/
typedef double FORCESNLPsolver_float;

typedef double FORCESNLPsolverinterface_float;

#ifndef __SOLVER_STANDARD_TYPES__
#define __SOLVER_STANDARD_TYPES__

typedef signed char solver_int8_signed;
typedef unsigned char solver_int8_unsigned;
typedef char solver_int8_default;
typedef signed short int solver_int16_signed;
typedef unsigned short int solver_int16_unsigned;
typedef short int solver_int16_default;
typedef signed int solver_int32_signed;
typedef unsigned int solver_int32_unsigned;
typedef int solver_int32_default;
typedef signed long long int solver_int64_signed;
typedef unsigned long long int solver_int64_unsigned;
typedef long long int solver_int64_default;

#endif

#ifndef __SOLVER_STANDARD_TYPES__
#define __SOLVER_STANDARD_TYPES__

typedef signed char solver_int8_signed;
typedef unsigned char solver_int8_unsigned;
typedef char solver_int8_default;
typedef signed short int solver_int16_signed;
typedef unsigned short int solver_int16_unsigned;
typedef short int solver_int16_default;
typedef signed int solver_int32_signed;
typedef unsigned int solver_int32_unsigned;
typedef int solver_int32_default;
typedef signed long long int solver_int64_signed;
typedef unsigned long long int solver_int64_unsigned;
typedef long long int solver_int64_default;

#endif

/* SOLVER SETTINGS ------------------------------------------------------*/
/* print level */
#ifndef FORCESNLPsolver_SET_PRINTLEVEL
#define FORCESNLPsolver_SET_PRINTLEVEL    (2)
#endif

/* timing */
#ifndef FORCESNLPsolver_SET_TIMING
#define FORCESNLPsolver_SET_TIMING    (1)
#endif

/* Numeric Warnings */
/* #define PRINTNUMERICALWARNINGS */

/* maximum number of iterations  */
#define FORCESNLPsolver_SET_MAXIT			(200)	

/* scaling factor of line search (FTB rule) */
#define FORCESNLPsolver_SET_FLS_SCALE		(FORCESNLPsolver_float)(0.99)      

/* maximum number of supported elements in the filter */
#define FORCESNLPsolver_MAX_FILTER_SIZE	(200) 

/* maximum number of supported elements in the filter */
#define FORCESNLPsolver_MAX_SOC_IT			(4) 

/* desired relative duality gap */
#define FORCESNLPsolver_SET_ACC_RDGAP		(FORCESNLPsolver_float)(0.0001)

/* desired maximum residual on equality constraints */
#define FORCESNLPsolver_SET_ACC_RESEQ		(FORCESNLPsolver_float)(1E-06)

/* desired maximum residual on inequality constraints */
#define FORCESNLPsolver_SET_ACC_RESINEQ	(FORCESNLPsolver_float)(1E-06)

/* desired maximum violation of complementarity */
#define FORCESNLPsolver_SET_ACC_KKTCOMPL	(FORCESNLPsolver_float)(1E-06)


/* RETURN CODES----------------------------------------------------------*/
/* solver has converged within desired accuracy */
#define FORCESNLPsolver_OPTIMAL      (1)

/* maximum number of iterations has been reached */
#define FORCESNLPsolver_MAXITREACHED (0)

/* factorization error */
#define FORCESNLPsolver_FACTORIZATION_ERROR   (-5)

/* NaN encountered in function evaluations */
#define FORCESNLPsolver_BADFUNCEVAL  (-6)

/* no progress in method possible */
#define FORCESNLPsolver_NOPROGRESS   (-7)

/* licensing error - solver not valid on this machine */
#define FORCESNLPsolver_LICENSE_ERROR  (-100)



/* PARAMETERS -----------------------------------------------------------*/
/* fill this with data before calling the solver! */
typedef struct FORCESNLPsolver_params
{
    /* vector of size 33 */
    FORCESNLPsolver_float x0[33];

    /* vector of size 2 */
    FORCESNLPsolver_float xinit[2];

} FORCESNLPsolver_params;


/* OUTPUTS --------------------------------------------------------------*/
/* the desired variables are put here by the solver */
typedef struct FORCESNLPsolver_output
{
    /* vector of size 3 */
    FORCESNLPsolver_float x01[3];

    /* vector of size 3 */
    FORCESNLPsolver_float x02[3];

    /* vector of size 3 */
    FORCESNLPsolver_float x03[3];

    /* vector of size 3 */
    FORCESNLPsolver_float x04[3];

    /* vector of size 3 */
    FORCESNLPsolver_float x05[3];

    /* vector of size 3 */
    FORCESNLPsolver_float x06[3];

    /* vector of size 3 */
    FORCESNLPsolver_float x07[3];

    /* vector of size 3 */
    FORCESNLPsolver_float x08[3];

    /* vector of size 3 */
    FORCESNLPsolver_float x09[3];

    /* vector of size 3 */
    FORCESNLPsolver_float x10[3];

    /* vector of size 3 */
    FORCESNLPsolver_float x11[3];

} FORCESNLPsolver_output;


/* SOLVER INFO ----------------------------------------------------------*/
/* diagnostic data from last interior point step */
typedef struct FORCESNLPsolver_info
{
    /* iteration number */
    solver_int32_default it;

	/* number of iterations needed to optimality (branch-and-bound) */
	solver_int32_default it2opt;
	
    /* inf-norm of equality constraint residuals */
    FORCESNLPsolver_float res_eq;
	
    /* inf-norm of inequality constraint residuals */
    FORCESNLPsolver_float res_ineq;

	/* norm of stationarity condition */
    FORCESNLPsolver_float rsnorm;

	/* max of all complementarity violations */
    FORCESNLPsolver_float rcompnorm;

    /* primal objective */
    FORCESNLPsolver_float pobj;	
	
    /* dual objective */
    FORCESNLPsolver_float dobj;	

    /* duality gap := pobj - dobj */
    FORCESNLPsolver_float dgap;		
	
    /* relative duality gap := |dgap / pobj | */
    FORCESNLPsolver_float rdgap;		

    /* duality measure */
    FORCESNLPsolver_float mu;

	/* duality measure (after affine step) */
    FORCESNLPsolver_float mu_aff;
	
    /* centering parameter */
    FORCESNLPsolver_float sigma;
	
    /* number of backtracking line search steps (affine direction) */
    solver_int32_default lsit_aff;
    
    /* number of backtracking line search steps (combined direction) */
    solver_int32_default lsit_cc;
    
    /* step size (affine direction) */
    FORCESNLPsolver_float step_aff;
    
    /* step size (combined direction) */
    FORCESNLPsolver_float step_cc;    

	/* solvertime */
	FORCESNLPsolver_float solvetime;   

	/* time spent in function evaluations */
	FORCESNLPsolver_float fevalstime;  

} FORCESNLPsolver_info;








/* SOLVER FUNCTION DEFINITION -------------------------------------------*/
/* examine exitflag before using the result! */
#ifdef __cplusplus
extern "C" {
#endif		

typedef void (*FORCESNLPsolver_extfunc)(FORCESNLPsolver_float*, FORCESNLPsolver_float*, FORCESNLPsolver_float*, FORCESNLPsolver_float*, FORCESNLPsolver_float*, FORCESNLPsolver_float*, FORCESNLPsolver_float*, FORCESNLPsolver_float*, FORCESNLPsolver_float*, FORCESNLPsolver_float*, FORCESNLPsolver_float*, solver_int32_default);

extern solver_int32_default FORCESNLPsolver_solve(FORCESNLPsolver_params *params, FORCESNLPsolver_output *output, FORCESNLPsolver_info *info, FILE *fs, FORCESNLPsolver_extfunc FORCESNLPsolver_evalextfunctions);	


#ifdef __cplusplus
}
#endif

#endif