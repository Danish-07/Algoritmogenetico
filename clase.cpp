#include "random.hpp"
#include "clase.hpp"
#include<iostream>


void poblacion::init_pop(){
			RandomGenerator generador;
			//iteramos cada cromosoma de la población
			for (int i=0; i< pop; i++){
			
				//defino cada bit del cromosoma en forma aleatoria
				for (int j=0; j< len; j++){
				
					double z = generador.get01();
					if (z < 0.5){
					
						generacion[i][j]=0;
					}
					else{
					
						generacion[i][j]=1;
		}}}};

void poblacion::fitness(){
			for(int i=0;i<pop;i++){
				for(int j=0;j<len;j++){
					if (generacion[i][j]==1){
					valcromo[i]=valcromo[i]+valor[j];
					pescromo[i]=pescromo[i]+peso[j];
					}
				}
				//std::cout<<"fitness: "<<valcromo[i]<<std::endl;;
				//std::cout<<"- peso: "<<pescromo[i]<<std::endl;
			};
			for(int i=0;i<pop;i++){
				for(int j=0;j<pop;j++){
					if(pescromo[i]>pesomax){
					contador=pop;
					continue;
					}
					else if(valcromo[i]>valcromo[j] or pescromo[j]>pesomax){
					contador=contador-1;};
				}
				if(contador==1){top1=i;};
				if(contador==2){top2=i;};
				if(contador==3){top3=i;};
				ranking[i]=contador;
				contador=pop;
				//std::cout<<ranking[i]<<std::endl;
			};
		};
		
void poblacion::reproduccion(){
			RandomGenerator generador2;
			for(int i=0;i<pop;i++){
				if (ranking[i]>4){
					double z = generador2.get01();
					if(z<0.35){
						double x = generador2.getAB(1.0,5.9);
						double y = generador2.getAB(6.0,10.9);
						for(int a=0;a<x;a++){
						generacion[i][a]=generacion[top1][a];
						};
						for(int b = x;b<y;b++){
						generacion[i][b]=generacion[top2][b];
						};}
					else if(z<0.7){
						double x = generador2.getAB(1.0,5.9);
						double y = generador2.getAB(6.0,10.9);
						for(int a=0;a<x;a++){
						generacion[i][a]=generacion[top2][a];
						};
						for(int b = x;b<y;b++){
						generacion[i][b]=generacion[top1][b];
						};}
					else if(z<0.8){
						double x = generador2.getAB(1.0,5.9);
						double y = generador2.getAB(6.0,10.9);
						for(int a=0;a<x;a++){
						generacion[i][a]=generacion[top3][a];
						};
						for(int b = x;b<y;b++){
						generacion[i][b]=generacion[top1][b];
						};}
					else if(z<0.9){
						double x = generador2.getAB(1.0,5.9);
						double y = generador2.getAB(6.0,10.9);
						for(int a=0;a<x;a++){
						generacion[i][a]=generacion[top3][a];
						};
						for(int b = x;b<y;b++){
						generacion[i][b]=generacion[top2][b];
						};}
					else{
						for (int i=0; i< pop; i++){
							for (int j=0; j< len; j++){
								double z = generador2.get01();
								if (z < 0.5){
									generacion[i][j]=0;}
								else{
									generacion[i][j]=1;};}}}
				}
			}
			
			//reseteo de variables
			for(int i=0;i<pop;i++){
					valcromo[i]=0;
					pescromo[i]=0;
				};
		};
		
