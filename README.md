## Descrição do Trabalho

Este projeto tem como objetivo o desenvolvimento de um **Conversor de Unidades** em linguagem C, abordando diferentes tipos de conversões de unidades, como massa, comprimento, volume, temperatura, velocidade, entre outras. O programa permitirá que o usuário converta valores entre unidades de medida, como quilogramas para gramas, metros para centímetros, e Celsius para Fahrenheit, entre outras opções.

O trabalho foi realizado como parte da **Unidade 3 - Capítulo 3: Depuração e Versionamento**, com foco no aprendizado e aplicação dos conceitos de versionamento de código utilizando Git e GitHub, além da colaboração em equipe. Durante o desenvolvimento, os membros do grupo trabalharam de forma colaborativa, criando branches para as funcionalidades específicas, realizando commits regulares, e utilizando pull requests para integração das alterações. Através dessa metodologia, buscamos simular um fluxo de trabalho real de desenvolvimento de software, com ênfase na comunicação, organização e boas práticas de codificação.

### Funcionalidades Implementadas

- Conversão de unidades de **massa** (quilograma, grama, tonelada)
- Conversão de unidades de **comprimento** (metro, centímetro, milímetro)
- Conversão de unidades de **volume** (litro, mililitro, metros cúbicos)
- Conversão de unidades de **temperatura** (Celsius, Fahrenheit, Kelvin)
- Conversão de unidades de **velocidade** (km/h, m/s, mph)
- Conversão de unidades de **energia** (Watts, quilowatts, cavalos-vapor)
- Conversão de unidades de **área** (metro quadrado, centímetro quadrado)
- Conversão de unidades de **tempo** (segundos, minutos, horas)
- Conversão de **unidades de dados** (bits, bytes, kilobytes, megabytes, gigabytes, terabytes)
- Interface simples de **usuário** para interação com o programa
- Testes e depuração para garantir o correto funcionamento do programa

Este trabalho também inclui a utilização do **Git** para versionamento do código, com a criação de branches, commits e pull requests para facilitar a colaboração e integração das alterações feitas pelos membros do grupo.

---

## Membros do Grupo

O grupo é composto pelos seguintes membros:

- **Daniela Magalhães dos Santos**
- **Matheus Pereira Alves**
- **Rodrigo Damasceno Sampaio**
- **Erick Barros Ferreira Gomes**
- **Helton Nascimento da Silva**
- **João Vitor de Siqueira Santana Costa**
- **Natália Freitas Tolentino**
- **Everaldo Libório Dias Filho**
- **Eduarda da Silva Santos**
- **Breno Tainan Aguiar**


## Estrutura do Projeto

```plaintext
grupo-9-u3-tarefa-depuracao-e-versionamento/
│
├── include/                     # Diretório para arquivos de cabeçalho (.h)
│   ├── unidade-de-massa.h       # Declarações das funções de conversão de massa
│   ├── unidade-de-velcidade.h   # Declarações das funções de velocidade
│
├── src/                         # Diretório para arquivos de código-fonte (.c)
│   ├── main.c                   # Arquivo principal que contém a lógica do menu e execução
│   ├── unidade-de-massa.c       # Implementação das funções de conversão de massa
|   ├── unidade-de-velocidade.c  # Implementação das funções de conversão de velocidade
│
├── build/                       # Diretório para arquivos objeto (.o) intermediários
│
├── output/                      # Diretório para o executável gerado pelo Makefile
│   └── main                     # Arquivo executável gerado após a compilação
│
├── Makefile                     # Arquivo de automação para compilação
├── README.md                    # Documentação do projeto
└── .gitignore                   # Lista de arquivos e pastas ignorados pelo Git
```

---

### **Descrição dos Diretórios e Arquivos**

- **`include/`**  
  Contém os arquivos de cabeçalho (`.h`) do projeto. Estes arquivos são responsáveis por declarar funções e expor interfaces que serão usadas nos arquivos `.c`.

- **`src/`**  
  Contém os arquivos de código-fonte (`.c`) que implementam as funcionalidades do projeto.
  - `main.c`: Arquivo principal que inicializa o programa e exibe o menu de opções.
  - `unidade-de-massa.c`: Contém as funções para conversão de unidades de massa.

- **`build/`**  
  Diretório para armazenar os arquivos objeto (`.o`) gerados durante o processo de compilação. Esses arquivos intermediários permitem recompilação eficiente.

- **`output/`**  
  Diretório onde o executável gerado pelo `Makefile` será armazenado. O programa pode ser executado diretamente deste diretório.

- **`Makefile`**  
  Automatiza o processo de compilação do projeto. Ele gerencia a criação de arquivos objeto, a geração do executável e a limpeza de arquivos temporários. Também é compatível tanto para sistemas Linux quanto Windows.

- **`README.md`**  
  Documentação do projeto. Inclui a descrição do objetivo, instruções de uso, e informações sobre a estrutura do projeto.

- **`.gitignore`**  
  Define arquivos e diretórios que devem ser ignorados pelo Git (ex.: arquivos temporários, binários gerados, etc.).

---

### **Instruções de Compilação e Execução**

1. **Compilar o Projeto**  
   Use o comando abaixo para compilar o projeto e gerar o executável:
   ```bash
   make
   ```

2. **Executar o Programa**  
   Após a compilação, execute o programa com:
   ```bash
   ./output/main
   ```
   *No Windows, se o executável for gerado com a extensão `.exe`, use:*
   ```cmd
   .\output\main.exe
   ```

3. **Limpar Arquivos de Compilação**  
   Para remover os arquivos temporários gerados durante a compilação:
   ```bash
   make clean
   ```

---

### **Descrição do Funcionamento**

O programa permite converter unidades de massa (quilogramas, gramas, toneladas). O fluxo do programa é simples e interativo:
1. O usuário escolhe a opção para converter unidades de massa.

