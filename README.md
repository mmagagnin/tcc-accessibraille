
# AccessiBraille: Impressora Braille Democrática
Trabalho de Conclusão de Curso

Projeto desenvolvido por **Marina Magagnin**  
**Curso:** Engenharia de Computação - PUC-Rio  

---

## 📝 Descrição do Projeto

**AccessiBraille** é uma iniciativa para desenvolver uma impressora braille acessível e de baixo custo, com o objetivo de democratizar o acesso à leitura e escrita para pessoas com deficiência visual. Projeto com integração de hardware e software para criar um produto funcional.

O sistema inclui:
- 📄 Tradução de texto para braille (grau 1) via software.
- ⚙️ Controle de uma CNC personalizada para produzir relevos braille em papel.
- 🎛️ Cabeçote de impressão feito com motores servo para maior precisão.

---

## 🚧 Status do Projeto

:warning: **Este projeto está em desenvolvimento.**  
O relatório do projeto está sendo redigido, mas o código e o hardware ainda passarão por alterações até a apresentação final à banca examinadora.

### Progresso Atual
- ✅ Estrutura de hardware parcialmente funcional.
- ⚡ Código em fase de ajustes para integração com todos os componentes.
- 🔄 Testes iterativos em andamento para validação da CNC e do cabeçote de impressão.

---

## 🛠️ Tecnologias UtilizadasL

- **Microcontrolador:** Arduino Mega e Arduino Nano
- **Drivers:** CNC Shield V3 com A4988, ponte L298n para controle dos motores de passo
- **Motores:** 
  - Motores de passo Hanpose 17HS4001 para movimentação da CNC.
  - Motores servo para controle do cabeçote de impressão.
- **Fontes de Alimentação:** Fonte chaveada 12V/5A.
- **Software:** Desenvolvimento em C++ para controle do Arduino, interface em Python (biblioteca TKInter)

