#include <iostream>
#include <iomanip>

int main() {
    int n = 0;
    std::cout << "Informe o numero de habitantes pesquisados: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Quantidade invalida de habitantes.\n";
        return 1;
    }

    double soma_salario = 0.0;
    int soma_filhos = 0;
    double maior_salario = 0.0;
    int pessoas_salario_ate_100 = 0;

    for (int i = 1; i <= n; i++) {
        double salario;
        int filhos;

        std::cout << "\nHabitante " << i << ":\n";
        std::cout << "Digite o salario: R$ ";
        std::cin >> salario;
        std::cout << "Digite o numero de filhos: ";
        std::cin >> filhos;

        soma_salario += salario;
        soma_filhos += filhos;

        if (salario > maior_salario) {
            maior_salario = salario;
        }

        if (salario <= 100.0) {
            pessoas_salario_ate_100++;
        }
    }

    double media_salario = soma_salario / n;
    double media_filhos = static_cast<double>(soma_filhos) / n;
    double percentual_ate_100 = (static_cast<double>(pessoas_salario_ate_100) / n) * 100.0;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n================ RESULTADO ================\n";
    std::cout << "Media de salario da populacao: R$ " << media_salario << "\n";
    std::cout << "Media do numero de filhos: " << media_filhos << "\n";
    std::cout << "Maior salario encontrado: R$ " << maior_salario << "\n";
    std::cout << "Percentual de pessoas com salario ate R$ 100,00: " << percentual_ate_100 << "%\n";
    std::cout << "===========================================\n";

    return 0;
}
