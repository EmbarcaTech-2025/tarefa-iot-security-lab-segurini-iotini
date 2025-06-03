# Tarefa: IoT Security Lab - EmbarcaTech 2025

Autores: **Laura Carolina e Marcos Vinícius**

Curso: Residência Tecnológica em Sistemas Embarcados

Instituição: EmbarcaTech - HBr

Brasília, junho de 2025

## Demonstração das Etapas
[Vídeo demonstrando o funcionamento](https://www.youtube.com/shorts/PlSjOy0dXbM) 

## Relato e Análise
- Quais técnicas são escaláveis?

Todas as técnicas apresentadas são escaláveis (timestamp, autenticação e criptografia). Mas na autenticação, um método que utiliza tokens pode ser preferível a senhas e usuários pré-definidos. Além disso, outros métodos de criptografia são preferíveis a encriptação com XOR (como RSA).

- Como aplicá-las com várias BitDogLab em rede escolar?

Podemos utilizar os IDs únicos da Raspberry Pi Pico W para identificar cada placa. A padronização dos tópicos também é importante para que não haja muitos dados diferentes circulando em um só tópico. Idealmente, um tópico para cada sala. Por último, as técnicas de segurança apresentas anteriormente devem ser aplicadas para garantir a segurança dos discentes e docentes.  

## 📜 Licença
GNU GPL-3.0.