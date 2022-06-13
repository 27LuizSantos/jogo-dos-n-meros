#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int num[6],jogo[1],secreto[6];
int i,chances,acertos;
bool acerto;


int main(){
	chances = 6;
	
	unsigned seed= time(0);
	srand(seed);
	for(int i =0; i<5 ; i++){
		num[i]=rand()%10;
	}
	
	for(i=0;i<5;i++){
		secreto[i]=0;
	}
	
	while((chances > 0)and (acertos <5)){
		cout<<"\nCHANCES RESTANTES: "<<chances<<endl;
		cout<<"\nACERTOS: "<<acertos;
		cout<<"\nNÚMEROS SECRETOS: ";
		for(i=0;i<5;i++){
			cout<<secreto[i];
		}
		cout<<"\nDigíte um numero: ";
		cin>>jogo[0];
		for(i=0;i<5;i++){
			if(jogo[0]==num[i]){
				acerto=true;
				secreto[i]=num[i];
				acertos++;
				system("cls");
			}
		}
		if(!acerto){
			chances--;
			system("cls");
		}
		acerto=false;
	}	
	
	if(acertos==5){
		cout<<"\nVOCÊ GANHOU: ";
		cout<<"\nNúmeros sorteados: ";
		for(i=0;i<5;i++){
			cout<<secreto[i];
		}
	}else{
		cout<<"\nGAME OVER: ";
		cout<<"\nNúmeros sorteados: ";
		for(i=0;i<5;i++){
			cout<<secreto[i];
		}
	}
	
	
	
	
	
	
	
	return 0 ;
}
