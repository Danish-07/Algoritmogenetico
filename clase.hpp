#ifndef CLASE_H
#define CLASE_H
#include "random.hpp"

class poblacion{

	public:
		//cantidad de objetos
		const int N = 15;
		
		//precio de cada objeto
		int valor[15] = {100,60,70,15,14,23,50,12,23,2,45,12,34,78,23};
		
		//peso de cada objeto
		int peso[15] = {42,23,21,15,7,9,16,11,6,9,10,34,13,15,8};
		
		//capacidad máxima de la mochila
		const int pesomax = 150;
		
		//definición de la población y los cromosomas
		
		//tamaño de la población (muy chica en mi opinión, teniendo en cuenta que existen 32768 posibilidades (2^15))
		const int pop = 10;	
		
		//tamaño de los cromosomas
		const int len = N;
		//número máximo de iteraciones
		int end = 10000;
		//matriz de la generación (cada cromosoma ocupa una fila de la matriz [pop x len])
		int generacion[10][15];
		int valcromo[10]={0,0,0,0,0,0,0,0,0,0};
		int pescromo[10]={0,0,0,0,0,0,0,0,0,0};
		int ranking[10];
		int contador=pop;
		
		//las variables topn almacena la ubicación del cromosoma ubicado en al posición n del ranking
		int top1,top2,top3,top4,top5;
		
		void init_pop();
		
		void fitness();
		
		void reproduccion();
		};
#endif
