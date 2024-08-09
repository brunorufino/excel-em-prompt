# Sistema de Planilha Simples

Este projeto é um sistema de planilha simples desenvolvido em C, que permite a navegação em uma matriz semelhante a uma planilha de Excel. Ele inclui funcionalidades para desenhar a tela da planilha, navegar pelas células e manipular o conteúdo delas.

## Funcionalidades

- **Desenhar Tela**: Cria a interface visual da planilha, incluindo a numeração das linhas e colunas.
- **Navegação**: Permite mover-se entre as células usando as setas do teclado.
- **Geração de Tabela**: Inicializa e gera a tabela (matriz) que será utilizada como base para a planilha.

## Estrutura do Código

O código está estruturado da seguinte forma:

- **Funções de Utilidade**:
  - `infoEsq(int n, int info, char s_info[])`: Formata informações numéricas alinhadas à esquerda.
  - `infoCenter(int info, char s_info[])`: Formata informações numéricas centralizadas.
  - `desenhaTela(int lin, int col)`: Desenha a interface da planilha na tela, incluindo a numeração das linhas e colunas.

- **Funções de Manipulação**:
  - `geraTabela(desk &descritor)`: Inicializa e gera a matriz esparsa que será utilizada para armazenar os dados da planilha.
  - `iniciaExcel()`: Função principal que inicializa a planilha e permite a navegação entre as células.

## Requisitos

- **Compilador C**: Para compilar e executar o código.
- **Biblioteca `conio2.h`**: Necessária para funções como `gotoxy` e manipulação de cores e posições na tela. Pode ser necessário instalar esta biblioteca dependendo do seu ambiente de desenvolvimento.

## Como Usar

1. Compile o código usando um compilador C que suporte a biblioteca `conio2.h`.
2. Execute o programa. A planilha será exibida na tela.
3. Use as setas do teclado para navegar entre as células.
4. Pressione `ESC` para sair do programa.

## Observações

- Certifique-se de que a biblioteca `conio2.h` está corretamente configurada no seu ambiente de desenvolvimento.
- A função `geraTabela` está preparada para trabalhar com uma matriz esparsa, que pode ser inicializada com até 100 linhas e 26 colunas (de A a Z).
- Este código foi desenvolvido para fins educacionais e pode ser adaptado conforme necessário.

## Contribuições

Contribuições são bem-vindas! Sinta-se à vontade para abrir uma issue ou enviar um pull request com melhorias ou correções.

## Licença

Este projeto é de código aberto e está licenciado sob a [MIT License](LICENSE).
