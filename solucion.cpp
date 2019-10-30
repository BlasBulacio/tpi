#include "solucion.h"
#include "auxiliares.h"
#include <algorithm>

using namespace std;

bool formatoValido(audio a, int canal, int profundidad) {
    return true;
}

audio replicar(audio a, int canal, int profundidad) {
    return a;
}

audio revertirAudio(audio a, int canal, int profundidad) {
    return a;
}

void magnitudAbsolutaMaxima(audio a, int canal, int profundidad, vector<int> &maximos, vector<int> &posicionesMaximos) {

}

audio redirigir(audio a, int canal, int profundidad) {
    return a;
}

void bajarCalidad(vector<audio> & as, int profundidad1, int profundidad2) {

}



bool esHard(audio a,int longitud, int umbral){
    int cont=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>umbral){
            cont++;
            if(cont=longitud){
                return true;
            }
        }else{
            cont=0;
        }
    }
        return false;
}


void audiosSoftYHard(vector<audio> as, int profundidad, int longitud, int umbral, vector<audio>& soft, vector<audio>& hard) {
    for(int i=0;i<as.size();i++){
        if(esHard(as[i],longitud,umbral)){
            hard.push_back(as[i]);
        }else{
            soft.push_back(as[i]);
        }
    }
}

vector<int> subseq(vector<int> vec, int d, int h){
    vector<int> vector={};
    for(int i = d;i<h;i++){
        vector.push_back(vec[i]);
    }
    return vector;
}

vector<int> concatenarSecuencias(vector<int> seq1, vector<int> seq2){
    vector<int> res={};
    for(int i=0;i<seq1.size()+seq2.size();i++){
        if(i<seq1.size()){
            res.push_back(seq1[i]);
        }else{
            res.push_back(seq2[i-seq1.size()]);
        }
    }
    return res;
}

void reemplazarSubAudio(audio& a, audio a1, audio a2, int profundidad) {
    for(int i=0;i<=a.size()-a1.size()+1;i=i+1){
         if(subseq(a,i,i+a1.size())==a1){
             a=concatenarSecuencias(concatenarSecuencias(subseq(a,0,i),a2),subseq(a,i+a2.size(),a.size()));
            break;
         }
    }
}

void maximosTemporales(audio a, int profundidad, vector<int> tiempos, vector<int>& maximos, vector<pair<int,int> > &intervalos ) {

}

void limpiarAudio(audio& a, int profundidad, vector<int>& outliers) {


}

