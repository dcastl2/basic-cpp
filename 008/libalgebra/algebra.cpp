#include <cmath>
#include "algebra.h"

namespace alg {

    /**
    * Finds the x-intercept of a linear equation y=mx+b given m and b.
    */
    float x_intercept(float m, float b) {
	return -b/m;
    }

    /**
    * Solves the quadratic equation given a, b, c; returns left-hand result.
    * If the result is an imaginary number, returns NaN.
    */
    float quadratic(float a, float b, float c) {
	float res; //!< Holds the result
	if (pow(b,2.0) - 4.0*a*c >= 0.0)
    	     res = (-b - sqrt(pow(b, 2.0) - 4.0*a*c)) / (2.0*a);
	else res = nan("NaN");
	return res;
    }

}
