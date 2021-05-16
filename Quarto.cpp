#include "GerHotel.hpp"
#include "Cliente.hpp"
#include "Quarto.hpp"



Quarto Quarto::addQuarto(int rno)
{
class Quarto quarto;
quarto.numQuarto=rno;
cout<<"\nTipo de camas (separa por virgulas) : ";
cin>>quarto.tcamas;
cout<<"\nTipo Conforto (Simples/Luxo) : ";
cin>>quarto.tipo;
cout<<"\nQuantidade de Camas : ";
cin>>quarto.qcamas;
cout<<"\n Diaria: ";
cin>>quarto.diaria;
quarto.status=0;

cout<<"\n Reserva Realizada!";

return quarto;
}


void Quarto::pesquisaQuarto(int rno)
{
int i,found=0;
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
cout<<"Detalhos do Quarto\n";
if(quartos[i].status==1)
{
cout<<"\nO quarto esta reservado";
}
else
{
cout<<"\nQuarto disponivel";
}
displayQuarto(quartos[i]);

}
else
{
cout<<"\nQuarto não encontrado";

};
}

void Quarto::displayQuarto(Quarto tempRoom)
{
cout<<"\nNumero do quarto: \t"<<tempRoom.numQuarto;
cout<<"\nModeo  "<<tempRoom.tcamas;
cout<<"\nConforto do quarto "<<tempRoom.tipo;
cout<<"\nQuantitade de camas "<<tempRoom.qcamas;
cout<<"\n Diaria: "<<tempRoom.diaria;
}