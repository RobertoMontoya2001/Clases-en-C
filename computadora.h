#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>

using namespace std;

class Computadora {
  string SO;
  string modelo;
  string procesador;
  int memoriaRam;

public:
  Computadora();
  Computadora(const string &SO, const string &modelo, const string &procesador, int memoriaRam);

  void setSO(const string &SO);
  string getSisOp();
  void setMod(const string &modelo);
  string getMod();
  void setProc(const string &procesador);
  string getProc();
  void setMemRam(int memoriaRam);
  int getMemRam();
};

#endif