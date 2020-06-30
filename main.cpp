#include <iostream>
#include <memory>  //-- para usar punteros inteligentes
#include "CPersona.h"
#include "CAlumno.h"

using namespace std;

int main()
{ //---usando punteros inteligentes
  shared_ptr<CPersona> pPersona = make_shared<CPersona>("Ricardo", 34);
  unique_ptr<CAlumno> pAlumno = make_unique<CAlumno>("201812345", "Pedro", 18);

  pPersona->Imprimir();
  cout <<"\n";
  pAlumno->Imprimir();

  return 0;
}
