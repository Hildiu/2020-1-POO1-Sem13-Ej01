//
// Created by Maria Hilda Bermejo
//

#include "CAlumno.h"

CAlumno::CAlumno(TipoCadena _code, TipoCadena _name, TipoNumerico _age):CPersona(_name, _age)
{
  code = _code;
}

void CAlumno::Imprimir()
{
  cout << "Codigo : " << code << "\n";
  CPersona::Imprimir();
}

