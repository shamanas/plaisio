#ifndef __MATERIAL_H
#define __MATERIAL_H

namespace plaisio {
    struct Material {
        double young_modulus;
        double moment_of_inertia;
        double area;
        double height;
    };
}

#endif//__MATERIAL_H
