## **Descrição do Trabalho**

O objetivo deste projeto é desenvolver um **Conversor de Unidades** utilizando a linguagem C, com suporte para diversas categorias de conversão, incluindo massa, comprimento, volume, temperatura, velocidade, potência, área, tempo e dados. O programa permite que o usuário converta valores entre diferentes unidades de medida, como quilogramas para gramas, metros para centímetros e Celsius para Fahrenheit, entre outras opções.

Este projeto foi realizado como parte da **Unidade 3 - Capítulo 3: Depuração e Versionamento**, com foco no aprendizado e na aplicação de conceitos fundamentais de versionamento de código utilizando Git e GitHub, além da colaboração em equipe. Durante o desenvolvimento, foram seguidas boas práticas de engenharia de software, incluindo:

- Criação de branches para funcionalidades específicas.
- Realização de commits regulares e bem documentados.
- Uso de pull requests para integração das alterações.
- Comunicação e organização eficiente entre os membros do grupo.

O trabalho busca simular um ambiente real de desenvolvimento de software, reforçando a importância da colaboração e das boas práticas de codificação.

---

## **Funcionalidades Implementadas**

- Conversão de unidades de **massa** (quilograma, grama, tonelada).
- Conversão de unidades de **comprimento** (metro, centímetro, milímetro).
- Conversão de unidades de **volume** (litro, mililitro, metros cúbicos).
- Conversão de unidades de **temperatura** (Celsius, Fahrenheit, Kelvin).
- Conversão de unidades de **velocidade** (km/h, m/s, mph).
- Conversão de unidades de **potência** (Watts, quilowatts, cavalos-vapor).
- Conversão de unidades de **área** (metro quadrado, centímetro quadrado).
- Conversão de unidades de **tempo** (segundos, minutos, horas).
- Conversão de unidades de **dados** (bits, bytes, kilobytes, megabytes, gigabytes, terabytes).
- Interface simples e interativa para facilitar o uso.
- Testes e depuração para garantir o correto funcionamento.

---

## **Membros do Grupo**

- Matheus Pereira Alves  
- Rodrigo Damasceno Sampaio  
- Erick Barros Ferreira Gomes  
- João Vitor de Siqueira Santana Costa  
- Natália Freitas Tolentino  
- Eduarda da Silva Santos  
- Breno Tainan Aguiar  

---

## **Estrutura do Projeto**

```plaintext
grupo-9-u3-tarefa-depuracao-e-versionamento/
│
├── include/                     # Arquivos de cabeçalho (.h)
│   ├── unidade-de-comprimento.h
│   ├── unidade-de-massa.h
│   ├── unidade-de-volume.h
│   ├── unidade-de-temperatura.h
│   ├── unidade-de-velocidade.h
│   ├── unidade-de-potencia.h
│   ├── unidade-de-area.h
│   ├── unidade-de-tempo.h
│   ├── unidade-de-informacao.h
│
├── src/                         # Arquivos de código-fonte (.c)
│   ├── main.c
│   ├── unidade-de-comprimento.c
│   ├── unidade-de-massa.c
│   ├── unidade-de-volume.c
│   ├── unidade-de-temperatura.c
│   ├── unidade-de-velocidade.c
│   ├── unidade-de-potencia.c
│   ├── unidade-de-area.c
│   ├── unidade-de-tempo.c
│   ├── unidade-de-informacao.c
│
├── build/                       # Arquivos intermediários (.o)
├── output/                      # Arquivo executável
│   └── main
├── Makefile                     # Automação da compilação
├── README.md                    # Documentação do projeto
└── .gitignore                   # Arquivos ignorados pelo Git
```

---

## **Instruções de Compilação e Execução**

1. **Compilar o Projeto**  
   Execute o comando abaixo para compilar o projeto:
   ```bash
   make
   ```

2. **Executar o Programa**  
   Após a compilação, execute o programa:
   ```bash
   ./output/main
   ```
   *No Windows:*
   ```cmd
   .\output\main.exe
   ```

3. **Limpar Arquivos Temporários**  
   Para remover os arquivos gerados durante a compilação:
   ```bash
   make clean
   ```

---

## **Como o Programa Funciona**

O programa foi projetado para ser intuitivo e funcional, permitindo que os usuários realizem conversões de forma simples e eficiente. O fluxo de uso segue os seguintes passos:  

1. **Menu Inicial**  
   Ao iniciar o programa, o usuário é apresentado a um menu interativo que exibe as categorias de unidades disponíveis para conversão, como massa, comprimento, temperatura, entre outras.  

2. **Seleção de Categoria**  
   O usuário escolhe a categoria desejada digitando o número correspondente à opção no menu.  

3. **Entrada de Dados**  
   Após a seleção da categoria, o programa solicita que o usuário insira:  
   - A unidade de origem (por exemplo, "quilogramas").  
   - O valor que deseja converter.  
   - A unidade de destino (por exemplo, "gramas").  

4. **Processamento da Conversão**  
   O programa realiza os cálculos necessários para converter o valor inserido entre as unidades selecionadas, utilizando fórmulas específicas para cada tipo de conversão.  

5. **Exibição do Resultado**  
   O resultado da conversão é exibido de forma clara, mostrando o valor original, a unidade de origem e o valor convertido na unidade de destino.

---

### **Destaques do Funcionamento**
- **Interface Amigável:** O menu interativo e as mensagens claras tornam o programa fácil de usar, mesmo para usuários com pouca experiência.
- **Modularidade:** Cada categoria de conversão é gerenciada por um módulo específico, o que facilita a manutenção e a adição de novas funcionalidades.