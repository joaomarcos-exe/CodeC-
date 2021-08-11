// Aula28.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    cout << "Stacks\n";
    stack <string> cards;
    cards.push("King Drinks");  // push adiciona elementeos 
    cards.push("King of Sword");
    cards.push("King of Gold");
    cards.push("king of clubs");
    

    cout << "Tamanho da pilha: " << cards.size() << "\n";

    cards.pop(); // pop retira o 1 elementos do topo que foi o ultimo adicionado na pilha

    cout << "Tamanho da pilha: " << cards.size() << "\n";

    cout << "card of top: " << cards.top();

    return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
