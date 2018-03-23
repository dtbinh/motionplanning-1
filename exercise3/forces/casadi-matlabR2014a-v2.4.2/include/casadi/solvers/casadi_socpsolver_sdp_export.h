
#ifndef CASADI_SOCPSOLVER_SDP_EXPORT_H
#define CASADI_SOCPSOLVER_SDP_EXPORT_H

#ifdef CASADI_SOCPSOLVER_SDP_STATIC_DEFINE
#  define CASADI_SOCPSOLVER_SDP_EXPORT
#  define CASADI_SOCPSOLVER_SDP_NO_EXPORT
#else
#  ifndef CASADI_SOCPSOLVER_SDP_EXPORT
#    ifdef casadi_socpsolver_sdp_EXPORTS
        /* We are building this library */
#      define CASADI_SOCPSOLVER_SDP_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define CASADI_SOCPSOLVER_SDP_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef CASADI_SOCPSOLVER_SDP_NO_EXPORT
#    define CASADI_SOCPSOLVER_SDP_NO_EXPORT 
#  endif
#endif

#ifndef CASADI_SOCPSOLVER_SDP_DEPRECATED
#  define CASADI_SOCPSOLVER_SDP_DEPRECATED 
#endif

#ifndef CASADI_SOCPSOLVER_SDP_DEPRECATED_EXPORT
#  define CASADI_SOCPSOLVER_SDP_DEPRECATED_EXPORT CASADI_SOCPSOLVER_SDP_EXPORT CASADI_SOCPSOLVER_SDP_DEPRECATED
#endif

#ifndef CASADI_SOCPSOLVER_SDP_DEPRECATED_NO_EXPORT
#  define CASADI_SOCPSOLVER_SDP_DEPRECATED_NO_EXPORT CASADI_SOCPSOLVER_SDP_NO_EXPORT CASADI_SOCPSOLVER_SDP_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define CASADI_SOCPSOLVER_SDP_NO_DEPRECATED
#endif

#endif
