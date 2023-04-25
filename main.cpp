#include <iostream>

using namespace std;

// Clase Fruta
class CajonFruta {
private:
    bool vacio=true;
    bool completo=false;
    string tipo;
    float peso;
public:
    CajonFruta(string, float);//constructor de cajon de fruta
    void imprimirCajon();
    bool estaVacio();
    bool estaLleno();
    void vaciarCajon();
    float espacioLibre();
};
   //constructor, inicializo atributos de cajon de frutas
CajonFruta::CajonFruta(string _tipo, float _peso){
    tipo=_tipo;
    peso=_peso;
}
bool CajonFruta::estaVacio(){
     if(peso>0){
        vacio= false;
    }
    return vacio;
}
bool CajonFruta::estaLleno(){
    if(peso==20){
        completo= true;
    }
    return completo;
}
void CajonFruta::vaciarCajon(){
    peso=0;
}
float CajonFruta::espacioLibre(){
    return (20-peso);
}
void CajonFruta::imprimirCajon(){
    if(estaVacio()){
      cout<<"Este cajon esta vacio"<<endl;
    }
    else{
        cout<<"Este cajon contiene : "<<peso<<" kgs de "<<tipo<<endl;
        if(!estaLleno()){
            cout<<"espacio libre: "<<espacioLibre()<<" kgs"<<endl;
        }
    }
}
// Clase productor
class Productor {
public:
void recolectarFruta(string, float);
void imprimirCajones();
private:
CajonFruta cajones;
};




// Clase deposito
class Deposito {
public:

private:

};


// Clase pedidos
class Pedidos {
public:

private:

};

// Clase venta
class Venta {
public:

private:

};

int main()
{
    CajonFruta c1 = CajonFruta("manzana",0);
    CajonFruta c2 = CajonFruta("manzana",20);
    CajonFruta c3 = CajonFruta("manzana",5);
    c1.imprimirCajon();
    c2.imprimirCajon();
    c3.imprimirCajon();
    system("pause");
    return 0;
}
