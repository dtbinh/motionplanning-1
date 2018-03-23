
#ifndef CASADI_SDPSOLVER_DSDP_EXPORT_H
#define CASADI_SDPSOLVER_DSDP_EXPORT_H

#ifdef CASADI_SDPSOLVER_DSDP_STATIC_DEFINE
#  define CASADI_SDPSOLVER_DSDP_EXPORT
#  define CASADI_SDPSOLVER_DSDP_NO_EXPORT
#else
#  ifndef CASADI_SDPSOLVER_DSDP_EXPORT
#    ifdef casadi_sdpsolver_dsdp_EXPORTS
        /* We are building this library */
#      define CASADI_SDPSOLVER_DSDP_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define CASADI_SDPSOLVER_DSDP_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef CASADI_SDPSOLVER_DSDP_NO_EXPORT
#    define CASADI_SDPSOLVER_DSDP_NO_EXPORT 
#  endif
#endif

#ifndef CASADI_SDPSOLVER_DSDP_DEPRECATED
#  define CASADI_SDPSOLVER_DSDP_DEPRECATED 
#endif

#ifndef CASADI_SDPSOLVER_DSDP_DEPRECATED_EXPORT
#  define CASADI_SDPSOLVER_DSDP_DEPRECATED_EXPORT CASADI_SDPSOLVER_DSDP_EXPORT CASADI_SDPSOLVER_DSDP_DEPRECATED
#endif

#ifndef CASADI_SDPSOLVER_DSDP_DEPRECATED_NO_EXPORT
#  define CASADI_SDPSOLVER_DSDP_DEPRECATED_NO_EXPORT CASADI_SDPSOLVER_DSDP_NO_EXPORT CASADI_SDPSOLVER_DSDP_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define CASADI_SDPSOLVER_DSDP_NO_DEPRECATED
#endif

#endif