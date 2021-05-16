#include<iostream>
#include<string.h>
#include "GerHotel.hpp"
#include "Cliente.hpp"
#include "Quarto.hpp"

using namespace std;

void gerenciarQuartos()
{
class Quarto quarto;
int opt,rno,i,flag=0;
char ch;
do
{
system("cls");
cout<<"\n### Gerenciar Quartos###";
cout<<"\n1. Adicionar Quarto";
cout<<"\n2. Pesquisa Quarto";
cout<<"\n3. Voltar ao Menu Principal";
cout<<"\n\n Digite a Opção: ";
cin>>opt;


switch(opt)
{
case 1:
cout<<"\n Digite o Numero do Quarto: ";
cin>>rno;
i=0;
for(i=0;i<count;i++)
{
if(quartos[i].numQuarto==rno)
{
flag=1;
}
}
if(flag==1)
{
cout<<"\n Por favor, Digite um unico número";
flag=0;

quartos[count]=quarto.addQuarto(rno);
count++;
}
break;
case 2:
cout<<"\n Digite Numero Quarto: ";
cin>>rno;
quarto.pesquisaQuarto(rno);
break;
case 3:

break;
default:
cout<<"\nOpcao Invalida!";
break;
}
}while(opt!=3);
}
using namespace std;

int main()
{
class GerHotel hm;
int i,j,opt,rno;
char ch;
char pnome[100];

system("cls");

do
{
system("cls");
cout<<"######## Hotel Tabajara #########\n";
cout<<"\n1. Gerenciar Quartos";
cout<<"\n2. Check-In Quarto";
cout<<"\n3. Quartos Disponiveis";
cout<<"\n4. Pesquisar Cliente";
cout<<"\n5. Check-Out Quarto";
cout<<"\n6. Relatorio resumido do cliente";
cout<<"\n7. Sair";
cout<<"\n\n Digite a Opção: ";
cin>>opt;
switch(opt)
{
case 1:
gerenciarQuartos();
break;
case 2:
if(count==0)
{
cout<<"\nOs quartos nao estao cadastrados\nPor favor, adicione os quartos primeiro";
}
else
hm.checkIn();
break;
case 3:
if(count==0)
{
cout<<"\nOs quartos nao estao cadastrados\nPor favor, adicione os quartos primeiro";
}
else
hm.getAvaliacaoQuarto();
break;
case 4:
if(count==0)
{
cout<<"\nOs quartos nao estao cadastrados\nPor favor, adicione os quartos primeiro";
}
else
{
cout<<"Digite o nome do cliente: ";
cin>>pnome;
hm.pesquisaCliente(pnome);
}
break;
case 5:
if(count==0)
{
cout<<"\nOs quartos nao estao cadastrados\nPor favor, adicione os quartos primeiro";
}
else
{
cout<<"Digite o numero do quarto : ";
cin>>rno;
hm.checkOut(rno);
}
break;
case 6:
hm.relatorioResumidoCliente();	
break;
case 7:
cout<<"\nSempre a disposicao!";
break;
default:
cout<<"\nOpcao Invalida";
break;
}
}while(opt!=7);

}