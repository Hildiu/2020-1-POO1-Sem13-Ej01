//
// Created by Maria Hilda Bermejo
//

#ifndef HERENCIA01_CALUMNO_H
#define HERENCIA01_CALUMNO_H

#include "CPersona.h"

class CAlumno: public CPersona
{
  private:
    TipoCadena code;
  public:
    CAlumno(){};
    CAlumno(TipoCadena _code, TipoCadena _name, TipoNumerico _age);
    virtual ~CAlumno(){};
    void Imprimir();
    //--- metodos de acceso
    void setCode(TipoCadena _code) { code = _code; }
    TipoCadena getCode() { return code; };
};

#endif //HERENCIA01_CALUMNO_H
