
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// Definição do struct referente á Conta
struct Conta {
    char nome[30];
    char senha[20];
    int idade;
    int numeroConta;
    double saldo;
};

// Função para verificar se a senha contém apenas números
bool temApenasNumeros(const char *senha) {
    for (int i = 0; senha[i] != '\0'; i++) {
        if (!isdigit(senha[i])) {
            return false; 
        }
    }
    return true;
}


int main() {
    // Declaração das variáveis
    struct Conta conta1;
    struct Conta conta2;
    char confirm;
    int login;

    // Mensagem do banco
    printf("Bem vindo ao T&B Bank\n");
    printf("------------------------------\n");

    // Seleção de criar conta do usuário
    int escolha;
    printf("Selecione abaixo a opção que você deseja: \n 1 - Criar uma conta nova \n 2 - Entrar numa conta existente \n (Digite somente o número): ");
    scanf("%d", &escolha);

    // Criação da conta
    if (escolha == 1) {
        // Pedindo do nome da conta
        printf("Digite o nome da sua conta: ");
        scanf("%s", conta1.nome);
        
        // Verificação da senha
        do {
            printf("Digite a senha da sua conta (somente números): ");
            scanf("%s", conta1.senha);

            if (!temApenasNumeros(conta1.senha)) {
                printf("Senha inválida! Use apenas números.\n");
            }
        } while (!temApenasNumeros(conta1.senha));

        // Pedindo a idade
        printf("Digite sua idade: ");
        scanf("%d", &conta1.idade);

        // Verificação da idade para criar a conta
        if (conta1.idade >= 18) {
            // Solicitação do saldo inicial
            printf("Digite o seu saldo da sua conta (somente números): ");
            scanf("%le", &conta1.saldo);
        } else {
            printf("Criação de conta negada, você é menor que 18 anos.\n");
            return 0;
        }

        // Pedindo se deseja criar outra conta
        printf("Deseja criar outra conta? (s para sim, n para não): ");
        scanf(" %c", &confirm);

        // Criação da segunda conta, caso o usuário quiser 
        if (confirm == 's') {
            printf("Digite o nome da sua conta: ");
            scanf("%s", conta2.nome);
            do {
                printf("Digite a senha da sua conta (somente números): ");
                scanf("%s", conta2.senha);

                if (!temApenasNumeros(conta2.senha)) {
                    printf("Senha inválida! Use apenas números.\n");
                }
            } while (!temApenasNumeros(conta2.senha));
            printf("Digite sua idade: ");
            scanf("%d", &conta2.idade);
            
            if (conta2.idade >= 18) {
               printf("Digite o seu saldo inicial: ");
               scanf("%lf", &conta2.saldo);
               printf("Criação de contas efetuada \n Você criou as seguintes contas: \n 1 - %s, 2 - %s  \n Digite em qual conta quer logar (somente números): ", conta1.nome, conta2.nome);
               scanf("%d", &login);
            } else {
                printf("Criação de conta negada, você é menor que 18 anos.\n");
                return 0;
            }
            // se o usuario não quiser criar 2 contas, ele cai nesse else if
        } else if (confirm == 'n') {
            printf("Criação de contas efetuada \n Você criou as seguintes contas: \n 1 - %s \nDigite em qual conta quer logar (somente números): ", conta1.nome);
            scanf("%d", &login);
        } else {
            printf("Letra inválida!!");
            return 0;
        }

        // mostrando a conta  acessada e o menu se houver somente 1 conta criada
        if (login == 1 && confirm == 'n') {
            printf("Bem vindo %s ao T&B Bank\n", conta1.nome);
            printf("------------------------------\n");
            // menu
            int opcao;
            do {
                printf("Menu de opções: \n 1 - Consultar saldo \n 2 - Fazer transação \n 3 - Trocar de conta \n 4 - Sair do aplicativo \n Escolha a sua opção:");
                scanf("%d", &opcao);

                switch (opcao) {
                    // cai aqui se escolher a primeira opção do menu
                    case 1:
                        printf("O saldo de sua conta senhor %s é de %.2lf R$!\n", conta1.nome, conta1.saldo);
                        break;
                    // cai aqui se escolher a segunda opção do menu
                    case 2:
                        printf("Nenhuma conta diponivel para transicao\n");
                        break;
                    // cai aqui se escolher a terceira opção do menu
                    case 3:
                        printf("Nenhuma conta disponivel para a troca!\n");
                        break;
                    // cai aqui se escolher a quarta opção do menu
                    case 4:
                        printf("Sistema encerrado!\n");
                        break;
                    // se ele for burro, e errar as opções cai aqui
                    default:
                        printf("Opção inválida, tente novamente!\n");
                        break;
                }
            //while que garante que ele sempre volte pro menu    
            } while (opcao != 4);
        // else if se ele criar duas contas e logar na primeira
        } else if (login == 1) {
            printf("Bem vindo %s ao T&B Bank\n", conta1.nome);
            printf("------------------------------\n");
            // menu
            int opcao;
            do {
                printf("Menu de opções: \n 1 - Consultar saldo \n 2 - Fazer transação \n 3 - Trocar de conta \n 4 - Sair do aplicativo \n Escolha a sua opção:");
                scanf("%d", &opcao);
        
                switch (opcao) {
                     // cai aqui se escolher a primeira opção do menu
                    case 1:
                        printf("O saldo de sua conta senhor %s é de %.2lf R$!\n", conta1.nome, conta1.saldo); 
                        break;
                    // cai aqui se escolher a segunda opção do menu
                    case 2:
                        int resp, saldoDigitado;
                        printf("Contas disponíveis para efetuar a transição:\n2 - %s \nDigite o número correspondente à conta: ", conta2.nome);
                        scanf("%d", &resp);
                        if (resp == 2) {
                            printf("Conta do senhor %s selecionada, você deseja transferir quanto?", conta2.nome);
                            scanf("%d", &saldoDigitado);
                            if (saldoDigitado > conta1.saldo) {
                                printf("Saldo insuficiente!\n");
                            } else {
                                conta1.saldo -= saldoDigitado;
                                conta2.saldo += saldoDigitado;
                                printf("Transferência efetuada de %d R$ para %s\n", saldoDigitado, conta2.nome);
                            }
                        } else {
                            printf("Conta solicitada inexistente!\n");
                        }
                        break;
                    // cai aqui se escolher a terceira opção do menu
                    case 3:
                        printf("Trocando de conta...\n");
                        printf("Bem vindo %s ao T&B Bank\n", conta2.nome);
                        printf("------------------------------\n");
                    
                    //trocou de conta
                        int opcao;
                        do {
                            printf("Menu de opções: \n 1 - Consultar saldo \n 2 - Fazer transação \n 3 - Sair do aplicativo \n Escolha a sua opção:");
                            scanf("%d", &opcao);

                            switch (opcao) {
                                 // cai aqui se escolher a primeira opção do menu
                                case 1:
                                    printf("O saldo de sua conta senhor %s é de %.2lf R$!\n", conta2.nome, conta2.saldo);
                                    break;
                                // cai aqui se escolher a segunda opção do menu
                                case 2:
                                    int resp, saldoDigitado;
                                    printf("Contas disponíveis para efetuar a transição:\n1 - %s \nDigite o número correspondente à conta: ", conta1.nome);
                                    scanf("%d", &resp);
                                    if (resp == 1) {
                                        printf("Conta do senhor %s selecionada, você deseja transferir quanto?", conta1.nome);
                                        scanf("%d", &saldoDigitado);
                                        if (saldoDigitado > conta2.saldo) {
                                            printf("Saldo insuficiente!\n");
                                        } else {
                                            conta2.saldo -= saldoDigitado;
                                            conta1.saldo += saldoDigitado;
                                            printf("Transferência efetuada de %d R$ para %s\n", saldoDigitado, conta1.nome);
                                        }
                                    } else {
                                        printf("Conta solicitada inexistente!\n");
                                    }
                                    break;
                               // cai aqui se escolher a terceira opção do menu
                                case 3:
                                    printf("Saindo do aplicativo...\n");
                                    return 0;
                               // se ele for burro, e errar as opções cai aqui
                                default:
                                    printf("Opção inválida, tente novamente!\n");
                                    break;
                            }
                        } while (opcao != 3);
                        break;
                     // cai aqui se escolher a quarta opção do menu
                    case 4:
                        printf("Sistema encerrado!\n");
                        break;
                     // se ele for burro, e errar as opções cai aqui
                    default:
                        printf("Opção inválida, tente novamente!\n");
                        break;
                }
                //while que garante que ele sempre volte pro menu    
            } while (opcao != 4);
        } else if (login == 2 && confirm == 's') {
            printf("Bem vindo %s ao T&B Bank\n", conta2.nome);
            printf("------------------------------\n");

            int opcao;
            do {
                printf("Menu de opções: \n 1 - Consultar saldo \n 2 - Fazer transação \n 3 - Trocar de conta \n 4 - Sair do aplicativo \n Escolha a sua opção:");
                scanf("%d", &opcao);

                switch (opcao) {
                    case 1:
                        printf("O saldo de sua conta senhor %s é de %.2lf R$!\n", conta2.nome, conta2.saldo);
                        break;

                    case 2:
                        int resp, saldoDigitado;
                        printf("Contas disponíveis para efetuar a transição:\n1 - %s \nDigite o número correspondente à conta: ", conta1.nome);
                        scanf("%d", &resp);
                        if (resp == 1) {
                            printf("Conta do senhor %s selecionada, você deseja transferir quanto?", conta1.nome);
                            scanf("%d", &saldoDigitado);
                            if (saldoDigitado > conta2.saldo) {
                                printf("Saldo insuficiente!\n");
                            } else {
                                conta2.saldo -= saldoDigitado;
                                conta1.saldo += saldoDigitado;
                                printf("Transferência efetuada de %d R$ para %s\n", saldoDigitado, conta1.nome);
                            }
                        } else {
                            printf("Conta solicitada inexistente!\n");
                        }
                        break;

                    case 3:
                        printf("Bem vindo %s ao T&B Bank\n", conta1.nome);
                        printf("------------------------------\n");

                        int opcao;
                        do {
                            printf("Menu de opções: \n 1 - Consultar saldo \n 2 - Fazer transação \n 3 - Trocar de conta \n 4 - Sair do aplicativo \n Escolha a sua opção:");
                            scanf("%d", &opcao);

                            switch (opcao) {
                                case 1:
                                    printf("O saldo de sua conta senhor %s é de %.2lf R$!\n", conta1.nome, conta1.saldo);
                                    break;

                                case 2:
                                    int resp, saldoDigitado;
                                    printf("Contas disponíveis para efetuar a transição:\n2 - %s \nDigite o número correspondente à conta: ", conta2.nome);
                                    scanf("%d", &resp);
                                    if (resp == 2) {
                                        printf("Conta do senhor %s selecionada, você deseja transferir quanto?", conta2.nome);
                                        scanf("%d", &saldoDigitado);
                                        if (saldoDigitado > conta1.saldo) {
                                            printf("Saldo insuficiente!\n");
                                        } else {
                                            conta1.saldo -= saldoDigitado;
                                            conta2.saldo += saldoDigitado;
                                            printf("Transferência efetuada de %d R$ para %s\n", saldoDigitado, conta2.nome);
                                        }
                                    } else {
                                        printf("Conta solicitada inexistente!\n");
                                    }
                                    break;

                                case 3:
                                    printf("Trocando de conta...\n");
                                    printf("Bem vindo %s ao T&B Bank\n", conta2.nome);
                                    printf("------------------------------\n");

                                    int opcao;
                                    do {
                                        printf("Menu de opções: \n 1 - Consultar saldo \n 2 - Fazer transação \n 3 - Sair do aplicativo \n Escolha a sua opção:");
                                        scanf("%d", &opcao);

                                        switch (opcao) {
                                            case 1:
                                                printf("O saldo de sua conta senhor %s é de %.2lf R$!\n", conta2.nome, conta2.saldo);
                                                break;

                                            case 2:
                                                int resp, saldoDigitado;
                                                printf("Contas disponíveis para efetuar a transição:\n1 - %s \nDigite o número correspondente à conta: ", conta1.nome);
                                                scanf("%d", &resp);
                                                if (resp == 1) {
                                                    printf("Conta do senhor %s selecionada, você deseja transferir quanto?", conta1.nome);
                                                    scanf("%d", &saldoDigitado);
                                                    if (saldoDigitado > conta2.saldo) {
                                                        printf("Saldo insuficiente!\n");
                                                    } else {
                                                        conta2.saldo -= saldoDigitado;
                                                        conta1.saldo += saldoDigitado;
                                                        printf("Transferência efetuada de %d R$ para %s\n", saldoDigitado, conta1.nome);
                                                    }
                                                } else {
                                                    printf("Conta solicitada inexistente!\n");
                                                }
                                                break;

                                            case 3:
                                                printf("Saindo do aplicativo...\n");
                                                return 0;

                                            default:
                                                printf("Opção inválida, tente novamente!\n");
                                                break;
                                        }
                                    } while (opcao != 3);
                                    break;

                                case 4:
                                    printf("Sistema encerrado!\n");
                                    break;

                                default:
                                    printf("Opção inválida, tente novamente!\n");
                                    break;
                            }
                        } while (opcao != 4);
                        break;

                    case 4:
                        printf("Saindo do aplicativo...\n");
                        break;

                    default:
                        printf("Opção inválida, tente novamente!\n");
                        break;
                }
            } while (opcao != 3);
        } else {
            printf("Opção inválida!\n");
        }
    } else if (escolha == 2) {
        printf("0 contas criadas!\n");
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}
