//
// Created by Maria Hilda Bermejo on 11/12/18.
//

#ifndef HERENCIA01_CPERSONA_H
#define HERENCIA01_CPERSONA_H

#include "Definiciones.h"

class CPersona
{
protected:
    TipoCadena    name;
    TipoNumerico  age;
public:
    CPersona(){};
    CPersona(TipoCadena _name, TipoNumerico _age);
    virtual ~CPersona(){}
    void Imprimir();
    //---metodos de acceso
    void setName(TipoCadena _name) { name = _name; }
    void setAge(TipoNumerico _age) { age = _age;}
    TipoCadena getName()  { return name; };
    TipoNumerico getAge() { return age; }
};

#endif //HERENCIA01_CPERSONA_H
