//
// Created by Maria Hilda Bermejo
//

#include "CPersona.h"

CPersona::CPersona(TipoCadena _name, TipoNumerico _age)
{
  name  = _name;
  age   = _age;
}

void CPersona::Imprimir()
{
  cout << "Nombre : " << name << "\n";
  cout << "Edad   : " << age << "\n";
}

