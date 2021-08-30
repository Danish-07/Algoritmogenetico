#include<iostream>
#include<cstdlib>

#include "random.hpp"
#include"clase.hpp"

int main(){
	poblacion cromos;
	
	cromos.init_pop();
	for(int h=0;h<cromos.end;h++){
	cromos.fitness();
	cromos.reproduccion();
	}
	cromos.fitness();
	
	std::cout<<"la mejor solucion encontrada es: "<<std::endl;
	for(int i=0;i<cromos.len;i++){
		std::cout<<cromos.generacion[cromos.top1][i]<<"-";
	}
	std::cout<<std::endl;
	std::cout<<"con un fitness de: "<<cromos.valcromo[cromos.top1]<<std::endl;
	std::cout<<"y un peso total de: "<<cromos.pescromo[cromos.top1]<<std::endl;
	
	std::cout<<"la segunda mejor solucion encontrada es: "<<std::endl;
	for(int i=0;i<cromos.len;i++){
		std::cout<<cromos.generacion[cromos.top2][i]<<"-";
	}
	std::cout<<std::endl;
	std::cout<<"con un fitness de: "<<cromos.valcromo[cromos.top2]<<std::endl;
	std::cout<<"y un peso total de: "<<cromos.pescromo[cromos.top2]<<std::endl;
	
	std::cout<<"la tercera mejor solucion encontrada es: "<<std::endl;
	for(int i=0;i<cromos.len;i++){
		std::cout<<cromos.generacion[cromos.top3][i]<<"-";
	}
	std::cout<<std::endl;
	std::cout<<"con un fitness de: "<<cromos.valcromo[cromos.top3]<<std::endl;
	std::cout<<"y un peso total de: "<<cromos.pescromo[cromos.top3]<<std::endl;
	return 0;
}

