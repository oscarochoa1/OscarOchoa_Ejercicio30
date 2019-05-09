#include <iostream>
#include <fstream>
#include <cmath>


using namespace std;

int main(){
  
 
  double t_max = 2.0;
  double delta_t = 0.01;
  double t;
  double delta_x = 0.01;
  double delta_u = 0.01;
    int a=100;
  double antigua[a][a];
  double nueva[a][a];
  int i, j;
    double eps = 1.0;
  int iteracion=0;
  ofstream outfile;
    double bet= delta_t/delta_x;
 double pi = asin(1.0)*2.0;
  for(i=0;i<a;i++){
   antigua[i][j] = sin(pi);

  }

  outfile.open("calculo.dat");
 
  while(t < t_max){
    
    for(i=1;i<a-1;i++){
        for (j=1; j<a-1; j++){
      nueva[i][j+1] = antigua[i][j] - bet/4*(  antigua[i+1][j]*antigua[i+1][j] - antigua[i-1][j]*antigua[i-1][j]) + (bet*bet/8)*((antigua[i+1][j]+antigua[i][j]) * ((antigua[i+1][j])*(antigua[i+1][j]) - (antigua[i][j]*antigua[i][j]) - (antigua[i][j] + antigua[i-1][j])*((antigua[i][j]*antigua[i][j]) - (antigua[i-1][j]*antigua[i-1][j])))) ;
    }
    }
    for(i=0;i<a;i++){
      outfile << nueva[i][j] << " ";
    }
    outfile << "\n";

    
    for(i=1;i<a-1;i++){
      
      antigua[i][j] = nueva[i][j];
    }
    t = t + delta_t;
  }
  outfile.close();
  return 0;
}
