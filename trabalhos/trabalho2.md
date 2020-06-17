# Execução do Perf e Valgrind
O perf é uma ferramenta no linux que extrai muitas estatísticas da Execução: número de instruções, ciclos, ciclos por instrução,
desvios, erros de predição em desvios etc.

## Parte 1

### Instalar as Ferramentas

Instalar o perf e o valgrind, testar executando o arquivo loop.c da pasta src_trab2.

### Especificaçao tecnica dos processadores

Busque informaçoes tecnicas do(s) seu(s) processador(es) onde realizara os testes
Organize na forma de uma tabela. 

### Executar os exemplos da pasta src_trab2

Executar todos os codigos compilados com e sem a opçao -O3 no GCC. Tabular com as colunas
codigo, ciclos, instrucoes, tempo de execucao, numero de desvios, % de desvios no codigo, % de falhas de predicao.

### Criar uma sequencia de slides explicando a tabela

Explicar as diferencas entre as versoes com e sem O3, assim como as versoes de codigos que sao semelhantes.

## Parte 2 

Executar um conjunto de benchmarks com diferentes entradas (dados e tamanho) para avaliar o desempenho e número de falhas de predição e número de instruções por ciclo. 
