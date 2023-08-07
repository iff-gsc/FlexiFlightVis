#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <QtOpenGL>

namespace Functions {
    void rotateVector(QVector3D *vector, QGenericMatrix<3,3,double> rotationMatrix);
}

#endif // FUNCTIONS_H
