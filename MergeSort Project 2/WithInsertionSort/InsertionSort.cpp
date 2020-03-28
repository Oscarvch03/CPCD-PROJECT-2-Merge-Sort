#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <omp.h>
#include <fstream>
#include <string>
using namespace std;


// Verificar que el Vector este ordenado
bool verifOrd(vector<long> &v){
    for(long i = 0; i < long(v.size()) - 1; i++){
        if(v[i] > v[i + 1]){
            return 0;
        }
    }
    return 1;
}


// INSERTIONSORT
void InsertionSort(vector<long> &vec){
    for(long i = 1; i < long(vec.size()); i++){
        long b = vec[i];
        long j = i - 1;
        while(j >= 0 && vec[j] > b){
            vec[j + 1] = vec[j];
            j = j - 1;
        }
        vec[j + 1] = b;
    }
}


// Leer Vector de vector.dat
vector<long> read_dat(){
  string line;
  vector<long> aux;
  ifstream myfile("vector.dat");
  if(myfile.is_open()){
      while(getline(myfile, line)){
              string str;
              for(long i = 0; i < long(line.length()); i++){
                  if(line[i] == ' ' || i == line.length()){
                      long num = stol(str.c_str());
                      aux.push_back(num);
                      str = "";
                  }
                  else{
                      str += line[i];
                  }
              }
      }
      myfile.close();
  }
  else cout << "Unable to open file. " << endl;
  return aux;
}


// Imprimir Vector
void display_vector(vector<long> v){
    cout << "[ ";
    for(long i = 0; i < long(v.size()); i++){
        cout << v[i] << " ";
    }
    cout << "]" << endl;
}


////////////////////////////////////////////////////////////////////////////////
// MAIN ////////////////////////////////////////////////////////////////////////

int main(){

    vector<long> v1 = read_dat();
    display_vector(v1);
    InsertionSort(v1);
    cout << "Ordenando con InsertionSort. " << endl;
    cout << endl;
    bool Ord = verifOrd(v1);
    if(Ord == 1){
        cout << "El Vector ha sido Ordenado. " << endl;
    }
    else{
        cout << "El vector NO ha sido Ordenado. " << endl;
    }
    display_vector(v1);

    return 0;
}
