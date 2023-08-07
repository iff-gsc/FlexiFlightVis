#include "functions.h"

void Functions::rotateVector(QVector3D *vector, QGenericMatrix<3,3,double> rotationMatrix) {
    QGenericMatrix<1,3,double> vectorMat;
    vectorMat(0,0) = vector->x();
    vectorMat(1,0) = vector->y();
    vectorMat(2,0) = vector->z();
    vectorMat = rotationMatrix * vectorMat;
    vector->setX(vectorMat(0,0));
    vector->setY(vectorMat(1,0));
    vector->setZ(vectorMat(2,0));
    return;
};
