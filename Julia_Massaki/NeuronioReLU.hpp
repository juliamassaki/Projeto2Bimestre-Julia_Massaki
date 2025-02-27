#include <iostream>
#include <vector>
#include "neuronio.hpp"

using namespace std;

class NeuronioReLU : public Neuronio {
public:
    NeuronioReLU(const vector<double>& pesos, double bias) : Neuronio(pesos, bias) {}
    double predict(const vector<double> entradas) const override {
        if (entradas.size() != pesos.size()) {
            cout << "O número de entradas não corresponde ao número de pesos!\n" << endl;
            return 0;
        }
        double saida = 0;
        for (size_t i = 0; i < entradas.size(); ++i) {
            saida += entradas[i] * pesos[i];
        }
        saida += bias;
        if (saida > 0) return saida;
        return 0;
    }
};
