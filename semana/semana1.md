# 1. Semana: Risc, Escalonamento Instruções



## 1.1 Tecnologias, custos e tendências, abordagem quantitativa
[slides para Aula 1.1 síncrona](https://docs.google.com/presentation/d/1_LykWtdGVN7RCOvt1C8jXhd5BZuPTYUz1-FzViksB7w/edit?usp=sharing)

[Data:  8/6 - Video da Aula ....]()

### Material Suplementar

[ There’s plenty of room at the Top: What will drive computer performance after Moore’s law?](https://science.sciencemag.org/content/368/6495/eaam9744) - [Github](https://github.com/neboat/Moore)  - [Planilha Desempenho dos Processadores](https://github.com/neboat/Moore/blob/master/hardware-performance-scaling.xlsx)

[Demanda de Computação para IA](https://openai.com/blog/ai-and-compute/)

[Andre Barroso, autor do Prefácio do Livro Quantitative Approach, Vice-Presidente da Google,recebe prêmio](https://awards.acm.org/eckert-mauchly)

[Material anterior - Video Março 2020](https://youtu.be/AtJY9AX00fo)

## 1.2 Tipos de conjunto de instruções e RISCV

[Material para Aula 1.2 Síncrona](https://docs.google.com/presentation/d/1zlJNTTrgUyfpty75FxJkH2L89NVwTZnoORfMrpaI88o/edit?usp=sharing) 



[Data:  10/6 - Video da Aula ]() - Processadores MIPS e RISCV, Introdução para as aulas Assíncronas de Múltiplas Unidades Funcionais, Unroll e Escalonamento, Escalonamento Dinâmico.

[Data:  15/6 - Video da Aula ]()  Revisão das Aulas Assíncronos 1.3, 1.4 e 1.5, Chat para Dúvidas

### Material suplementar 

[Material anterior - Video Março 2020](https://youtu.be/AksZXs9se8I)

## 1.3 Múltiplas Unidades Funcionais - Aula Assíncrona

### Introdução

[Assista primeiro o vídeo de introdução dos novos conceitos Video](https://youtu.be/NGlhWtaQUvE)


### Preparação para Tarefas
Abaixo tem uma sequência de aulas curtas assíncronas resolvendo os exemplos da [Folha de atividades para multiplas unidades](https://docs.google.com/document/d/1_H4PROif7zX79emB2uQxAAEo2Fmr2UtkNiI1GcoOOvM/edit?usp=sharing). Tarefas: Assistir os vídeos, fazer o exercício abaixo, postar a solução do exercício no seu Github e fazer o questionário de avaliação. Data de Entrega das Tarefas: ...


* [Primeiro Exemplo de Execução - Vídeo 5 minutos](https://youtu.be/F2JXO-GINOg)
* [Segundo e Terceiro Exemplos - Video 2 minutos](https://youtu.be/dHiv8k4JrPU)
* [Primeiro Exemplo com Loop - Video 2 minutos](https://youtu.be/8P2jy4S7qXA) - ERRATA - CPI não soma +1 do ciclo de inicio. CPI = Final-inicio/Numero Instrucoes
* [Segundo exemplo com loop - Video 2 minutos](https://youtu.be/2It4lGZth6Q)
* [Solução da Folha de Atividades](https://docs.google.com/document/d/1WZe5-GYcZtaTBg4WEL1C5XDJmOkNB1uS4YfJthP5soY/edit?usp=sharing)

### Tarefas 
[Faça o exercício 1.1 e depois a avaliação](https://github.com/arduinoufv/inf450_peo/blob/master/exercicio/ex1.md)

### Material suplementar
[ferramenta online para criar exemplos com múltiplas unidades](http://www.ecs.umass.edu/ece/koren/architecture/windlx/main.html) - Observação: Não executa sobreposição da execução de uma unidade.

[Video 10 minutos em Ingles de Multiplas Unidades TU Berlime](https://www.youtube.com/watch?v=QosdsRx1cb4)

## 1.4 Escalonamento Estatico, Unroll e  Software Pipelining  - Aula Assíncrona

[Introdução a Unidade Video](https://youtu.be/FhOn6kp0QYE)

### Preparação para as tarefas 
* [Folha sem preencher dos exemplos a seguir](https://docs.google.com/document/d/1J-BHI6DYczwqqI01_H-GWNVTFY-30ll7dSgDrcagcH0/edit?usp=sharing)
* [Escalonamento Estático - Primeiro Exemplo - Video 3 minutos](https://youtu.be/NoDAA7KANiY)
* [Desvio com Atraso ou Branch Delay - Video de 2 minutos](https://youtu.be/4W1FAraTlXI)
* [Loop Unroll - Video de 5 minutos](https://youtu.be/-TcEUUia84A)
* [Três técnicas de desvio - Vídeo de 3 minutos](https://youtu.be/BNx9mqevHRs)
* [Mesmo exemplo com outro escalonamento - video de 3 minutos](https://youtu.be/vNJJOH8b8DA)
* [Introdução Software Pipelining](https://youtu.be/g65JZ26sSHI)
* [Exemplo  com Software Pipelining](https://youtu.be/9ubcCHKmc4w)
* [Definição de Software Pipelining - Wiki](https://en.wikipedia.org/wiki/Software_pipelining)
* [Folha com exemplos preenchidos](https://docs.google.com/document/d/11Kep0l6_UFheh5b5t3N8kaGj2hApEXlM3LkGB5kCNxM/edit?usp=sharing) 
### Tarefas
[Faça o exercício 1.2 e depois a avaliação](https://github.com/arduinoufv/inf450_peo/blob/master/exercicio/ex1.md#12-escalonamento-est%C3%A1tico-loop-unrolling-e-software-pipelining)

### Material suplementar
[ferramenta unroll online com exemplos](http://www.ecs.umass.edu/ece/koACren/architecture/LoopUnroll/MainPage.html)

[Material anterior - Video Março 2020](https://youtu.be/gHNWyNlDLy0)

## 1.5 Escalonamento dinâmico 
[Folha de Atividades](https://docs.google.com/document/d/1MgN7hzgopprK_OQvHwNxQX4h9oo6C0T2l3qC-AUrXXk/edit?usp=sharing)

 * [Primeiro Exemplo com Tomasulo](https://youtu.be/9GbUo4_4k6Y)
 * [Segundo Exemplo com Tomasulo](https://youtu.be/KHGXvosM7RY)
 
[wiki](https://en.wikipedia.org/wiki/Tomasulo_algorithm)

## Material suplementar

[slides do Prof. Onur Mutlu sobre execução fora de ordem](https://safari.ethz.ch/digitaltechnik/spring2020/lib/exe/fetch.php?media=onur-digitaldesign-2020-lecture15a-out-of-order-execution-beforelecture.pdf)

[Video 15 minutos em Ingles do Tomasulo TU Berlin](https://www.youtube.com/watch?v=y-N0Dsc9LmU)

[Video 10 minutos em Ingles de Multiplas Unidades TU Berlime](https://www.youtube.com/watch?v=QosdsRx1cb4)

