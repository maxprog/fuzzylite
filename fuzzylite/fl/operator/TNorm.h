/* 
 * File:   TNorm.h
 * Author: jcrada
 *
 * Created on 21 December 2012, 9:33 AM
 */

#ifndef FL_TNORM_H
#define	FL_TNORM_H

#include "fl/operator/Operator.h"

namespace fl {

    class FL_EXPORT TNorm : public Operator {
        //dummy class
    };

    class FL_EXPORT Minimum : public TNorm {
    public:
        std::string className() const;
        scalar compute(scalar a, scalar b) const;
    };

    class FL_EXPORT AlgebraicProduct : public TNorm {
    public:
        std::string className() const;
        scalar compute(scalar a, scalar b) const;
    };

    class FL_EXPORT BoundedDifference : public TNorm {
    public:
        std::string className() const;
        scalar compute(scalar a, scalar b) const;
    };

    class FL_EXPORT DrasticProduct : public TNorm {
    public:
        std::string className() const;
        scalar compute(scalar a, scalar b) const;
    };

    class FL_EXPORT EinsteinProduct : public TNorm {
    public:
        std::string className() const;
        scalar compute(scalar a, scalar b) const;
    };

    class FL_EXPORT HamacherProduct : public TNorm {
    public:
        std::string className() const;
        scalar compute(scalar a, scalar b) const;
    };

}
#endif	/* TNORM_H */

