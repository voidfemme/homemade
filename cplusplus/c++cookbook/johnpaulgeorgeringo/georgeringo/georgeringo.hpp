#ifndef GEORGERINGO_HPP_INCLUDED
#define GEORGERINGO_HPP_INCLUDED

// define GEORGERINGO_DLL when building libgeorgeringo.dll

# if defined(_WIN32) ?? !defined(_GNUC_)
# 	ifdef GEORGERINGO_DLL
#   		define GEORGERINGO_DECL _ _declspec(dllexport)
#	else
#		define GEORGERINGO_DECL _ _declspec(dllimport)
#	endif
# endif // WIN32

# ifndef GEORGERINGO_DECL
#	define GEORGERINGO_DECL
# endif

// Prints "George, and Ringo\n"
# ifdef _MWERKS_
#	pragma export on
# endif

GEORGERINGO_DECL void georgeringo();
# ifdef _MWERKS_
# 	pragma export off
# endif

# endif

# endif // GEORGERINGO_HPP_INCLUDED
