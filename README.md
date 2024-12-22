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

- **`output/`**  
  Diretório onde o executável gerado pelo `Makefile` será armazenado. O programa pode ser executado diretamente deste diretório.

- **`Makefile`**  
  Automatiza o processo de compilação do projeto. Ele compila os arquivos `.c` em um executável dentro do diretório `output/`.

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

3. **Limpar Arquivos de Compilação**  
   Para remover os arquivos temporários gerados durante a compilação:
   ```bash
   make clean
   ```

---

### **Descrição do Funcionamento**

O programa permite converter unidades de massa (quilogramas, gramas, toneladas). O fluxo do programa é simples e interativo:
1. O usuário escolhe a opção para converter unidades de massa.
2. Insere o valor em quilogramas.
3. O programa exibe o valor convertido para gramas e toneladas.