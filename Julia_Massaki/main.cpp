#include <iostream>
#include <vector>
#include "NeuronioReLU.hpp"

using namespace std;

int main() {
    vector<double> entradas_1 = {0.3, 2.0};
    vector<double> pesos_1 = {0.2, 0.4};
    double bias_1 = -1.5;

    Neuronio *neuronio_1 = new NeuronioReLU(pesos_1, bias_1);
    neuronio_1-> predict(entradas_1);

    vector<double> entradas_2 = {0.8, 3.0};
    vector<double> pesos_2 = {2, 0.9};
    double bias_2 = 0;

    Neuronio *neuronio_2 = new NeuronioReLU(pesos_2, bias_2);
    neuronio_2-> predict(entradas_2);

    vector<double> entradas_3 = {3, 20};
    vector<double> pesos_3 = {0.06, 2};
    double bias_3 = 8;

    Neuronio *neuronio_3 = new NeuronioReLU(pesos_3, bias_3);
    neuronio_3-> predict(entradas_3);

    vector<double> entradas_4 = {0.3, 2.0};
    vector<double> pesos_4 = {0.2, 0.4};
    double bias_4 = -1.5;

    Neuronio *neuronio_4 = new NeuronioReLU(pesos_4, bias_4);
    neuronio_4-> predict(entradas_4);
}
