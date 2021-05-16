#include <iostream>
using namespace std;

class Cliente
{
 public:
 char _nome(char nome);
 char _endereco(char endereco);
 char _dataEntrada(char dataEntrada);
 char _dataSaida(char dataSaida);
 char _telefone(char telefone);
 float _adiantamento(float adiantamento);
 int _id_reserva(int idreserva);
 int _qtd_Reserva(int qtd_reserva);

 private:
 char nome[50];
 char endereco[100];
 char telefone[15];
 char dataEntrada[20];
 char dataSaida[20];
 float adiantamento;
 int id_reserva;
 int qtd_reserva;

};