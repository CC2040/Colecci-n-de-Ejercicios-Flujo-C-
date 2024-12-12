#include "Geometria.h"
#define PI 3.14159265
namespace Geometria {
    double calculocirculoarea(int a) {
        return a * a*PI;
    }
    double calculocirculoperimetro(int a) {
        return 2*a*PI;
    }
}