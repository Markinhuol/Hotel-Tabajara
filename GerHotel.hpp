#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

class GerHotel
{
public:
void checkIn();
void getAvaliacaoQuarto();
void pesquisaCliente(char *);
void checkOut(int);
void relatorioResumidoCliente();

private:
vector quartos[100];
};