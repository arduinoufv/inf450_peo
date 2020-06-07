# Regras
Os trabalhos serão feitos em etapas e em grupo. Cada grupo terá um github. As etapas serão apresentadas em encontros agendados 
com o professor. O material produzido ficará disponível: apresentações assíncronas, PDF, códigos e relatórios.

# 1. Processador RISCV

Implementar no DigitalJS o processador RISCV com pipeline. Criar códigos de exemplos. Mostrar a execução passo a passo em um
vídeo. 

## Parte 1 - Elaborar um Exemplo
* Cada grupo irá executar um exemplo. 
* Codificar em C, mostrar o código gerado com e sem -O3 no [Compiler Explore](https://godbolt.org/)
* Codificar em RISCV
* Executar no [simulador WebRISCV](http://x.dii.unisi.it:8098/~giorgi/WebRISC-V/index.php) 
* Gravar vídeo de 1 minuto mostrando inicio e final da simulação
* Codificar em binário para executar no processador [single cycle RISCV DigitalJS](...)
* Gravar vídeo de 1 minuto mostrando inicio e final da simulação
* Gerar um relatório em PDF: Codigo C, Assembler gerado no Compiler Explore, codigo para WebRISCV e código para RISCV DigitalJS - Links para os vídeos, estatísticas de execução (número de instruções, ciclos, % desvios, % load/Store)

## Técnicas de otimização de Loop
* Fazer um unroll com fator 3 e escalonamento estático. Executar 12 (4x3) iterações no [simulador WebRISCV](http://x.dii.unisi.it:8098/~giorgi/WebRISC-V/index.php) 
* Gravar vídeo de 1 minuto mostrando inicio e final da simulação
* Codificar em binário para executar no processador [single cycle RISCV DigitalJS](...)
* Gravar vídeo de 1 minuto mostrando inicio e final da simulação
* Gerar um relatório em PDF com total de instruções, CPI, Stall e desvios.

## Implementação do processador Pipeline

Modificar a versão do MIPS pipeline para implementar o RISCV pipeline. Executar seu exemplo e gravar um vídeo. Mostrar em destaque um trecho de três instruções diferentes e seu monitoramento com os Waveforms. 

