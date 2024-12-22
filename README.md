## Estrutura do Projeto

```plaintext
grupo-9-u3-tarefa-depuracao-e-versionamento/
│
├── include/                     # Diretório para arquivos de cabeçalho (.h)
│   ├── unidade-de-massa.h       # Declarações das funções de conversão de massa
│
├── src/                         # Diretório para arquivos de código-fonte (.c)
│   ├── main.c                   # Arquivo principal que contém a lógica do menu e execução
│   ├── unidade-de-massa.c       # Implementação das funções de conversão de massa
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

