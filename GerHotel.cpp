#include "GerHotel.hpp"
#include "Cliente.hpp"
#include "Quarto.hpp"


void GerHotel::relatorioResumidoCliente(){

if(count==0){
	cout<<"\n Nenhuma Reverva!!";
}	
for(int i=0;i<count;i++)
{
if(quartos[i].status==1)
{
cout<<"\n Nome Cliente: : "<<quartos[i].cust._nome;
cout<<"\n Numero Quarto: "<<quartos[i].numQuarto;
cout<<"\n Cidade : "<<quartos[i].cust._endereco;
cout<<"\n Telefone: "<<quartos[i].cust._telefone;
cout<<"\n---------------------------------------";	
}	
}
}

void GerHotel::checkIn()
{
int i,found=0,rno;

class Quarto quarto;
cout<<"\nInsira o numero do quarto : ";
cin>>rno;
for(i=0;i<count;i++)
{
if(quartos[i].numQuarto==rno)
{
found=1;
break;
}
}
if(found==1)
{
if(quartos[i].status==1)
{
cout<<"\n Quarto já Reservado";

return;
}

cout<<"\n Insira o ID da reserva: ";
cin>>quartos[i].cust._id_reserva;

cout<<"\n Digite o nome do cliente ";
cin>>quartos[i].cust._nome;

cout<<"\n Digite a Cidade ";
cin>>quartos[i].cust._endereco;

cout<<"\n Digite o Telefone ";
cin>>quartos[i].cust._telefone;

cout<<"\n Digite Data Entrada  ";
cin>>quartos[i].cust._dataEntrada;

cout<<"\n Digite Data Saida  ";
cin>>quartos[i].cust._dataSaida;


cout<<"\n Digite o Valor de Adiantamento ";
cin>>quartos[i].cust._adiantamento;

quartos[i].status=1;

cout<<"\n Cliente Verificado com Sucesso";

}
}

void GerHotel::getAvaliacaoQuarto()
{
int i,found=0;
for(i=0;i<count;i++)
{
if(quartos[i].status==0)
{
displayQuarto(quartos[i]);
cout<<"\n\n Pressione ENTER para o Proximo Quarto";
found=1;

}
}
if(found==0)
{
cout<<"\nTodos os quartos estao reservados";

}
}

void GerHotel::pesquisaCliente(char *pname)
{
int i,found=0;
for(i=0;i<count;i++)
{
if(quartos[i].status==1 && strcmp(quartos[i].cust._nome,pname)==0)
{
cout<<"\n Nome Cliente: "<<quartos[i].cust._nome;
cout<<"\n Numero Quarto: "<<quartos[i].numQuarto;

cout<<"\n\n Pressione ENTER para o proximo Registro:";
found=1;

}
}
if(found==0)
{
cout<<"\n Pessoa Não Encontrada";

}
}


void GerHotel::checkOut(int NumQuarto)
{
int i,found=0,days,rno;
float billAmount=0;
for(i=0;i<count;i++)
{
if(quartos[i].status==1 && quartos[i].numQuarto==NumQuarto)
{

found=1;

break;
}
}
if(found==1)
{
cout<<"\n Digite o Número de Dias:\t";
cin>>days;
billAmount=days * quartos[i].rent;

cout<<"\n\t######## Detalhes da Saida ########\n";
cout<<"\n Nome do Cliente: "<<quartos[i].cust._nome;
cout<<"\n Numero do Quarto: "<<quartos[i].numQuarto;
cout<<"\n Endereço: "<<quartos[i].cust._endereco;
cout<<"\n Telefone: "<<quartos[i].cust._telefone;
cout<<"\n Valor Total Devido : "<<billAmount<<" /";
cout<<"\n Adiantamento Pago: "<<quartos[i].cust._adiantamento<<" /";
cout<<"\n*** Total a Pagar: "<<billAmount-quartos[i].cust._adiantamento<<"/ Só";

quartos[i].status=0;
}

}