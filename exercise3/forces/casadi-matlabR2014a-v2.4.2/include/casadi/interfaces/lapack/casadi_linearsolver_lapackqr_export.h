
#ifndef CASADI_LINEARSOLVER_LAPACKQR_EXPORT_H
#define CASADI_LINEARSOLVER_LAPACKQR_EXPORT_H

#ifdef CASADI_LINEARSOLVER_LAPACKQR_STATIC_DEFINE
#  define CASADI_LINEARSOLVER_LAPACKQR_EXPORT
#  define CASADI_LINEARSOLVER_LAPACKQR_NO_EXPORT
#else
#  ifndef CASADI_LINEARSOLVER_LAPACKQR_EXPORT
#    ifdef casadi_linearsolver_lapackqr_EXPORTS
        /* We are building this library */
#      define CASADI_LINEARSOLVER_LAPACKQR_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define CASADI_LINEARSOLVER_LAPACKQR_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef CASADI_LINEARSOLVER_LAPACKQR_NO_EXPORT
#    define CASADI_LINEARSOLVER_LAPACKQR_NO_EXPORT 
#  endif
#endif

#ifndef CASADI_LINEARSOLVER_LAPACKQR_DEPRECATED
#  define CASADI_LINEARSOLVER_LAPACKQR_DEPRECATED 
#endif

#ifndef CASADI_LINEARSOLVER_LAPACKQR_DEPRECATED_EXPORT
#  define CASADI_LINEARSOLVER_LAPACKQR_DEPRECATED_EXPORT CASADI_LINEARSOLVER_LAPACKQR_EXPORT CASADI_LINEARSOLVER_LAPACKQR_DEPRECATED
#endif

#ifndef CASADI_LINEARSOLVER_LAPACKQR_DEPRECATED_NO_EXPORT
#  define CASADI_LINEARSOLVER_LAPACKQR_DEPRECATED_NO_EXPORT CASADI_LINEARSOLVER_LAPACKQR_NO_EXPORT CASADI_LINEARSOLVER_LAPACKQR_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define CASADI_LINEARSOLVER_LAPACKQR_NO_DEPRECATED
#endif

#endif
