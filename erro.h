const char FAKE_FORM_HTML[] = R"=====(
<!DOCTYPE html>
<html lang="pt-BR">
<head>
  <meta charset="UTF-8">
  <title>Ocupação Extra</title>
</head>
<body style="margin: 0; font-family: 'Segoe UI', sans-serif; background: linear-gradient(#c8dbea, #e9f1f7); padding: 50px;">

  <div style="max-width: 700px; margin: auto; background: white; padding: 40px; border-radius: 10px; box-shadow: 0 4px 12px rgba(0,0,0,0.1);">
    
    <h2 style="margin-top: 0;">Ocupação Extra</h2>
    <p style="color: #333; margin-bottom: 30px;">
      Este formulário destina-se a relatar as atividades realizadas semanalmente nos dias que não houver vínculo em turma. Terá uma pergunta para cada dia da semana, caso você esteja com aula, marque a alternativa N/A (Não Aplica).
      <br><br>
      Por favor, siga as orientações abaixo:
    </p>

    <p style="color: red; margin-bottom: 30px;">* Obrigatória</p>

    <!-- Pergunta 1 -->
    <div style="margin-bottom: 25px;">
      <label style="font-weight: bold;">1. Nome <span style="color: red;">*</span></label><br><br>
      <select style="width: 100%; padding: 12px; border-radius: 5px; border: 1px solid #ccc;">
        <option>Selecionar sua resposta</option>
        <option>João</option>
        <option>Maria</option>
        <option>Outro</option>
      </select>
    </div>

    <!-- Pergunta 2 -->
    <div style="margin-bottom: 25px;">
      <label style="font-weight: bold;">2. Segunda-Feira: Qual atividade extra foi realizada? <span style="color: red;">*</span></label><br><br>
      <select style="width: 100%; padding: 12px; border-radius: 5px; border: 1px solid #ccc;">
        <option>Selecionar sua resposta</option>
        <option>Aula de reforço</option>
        <option>Atendimento individual</option>
        <option>N/A</option>
      </select>
    </div>

    <!-- Pergunta 3 -->
    <div style="margin-bottom: 25px;">
      <label style="font-weight: bold;">3. Em caso de realização de alguma atividade extra sinalizada acima, cite-a em poucas palavras:</label><br><br>
      <input type="text" placeholder="Insira sua resposta" style="width: 100%; padding: 12px; border-radius: 5px; border: 1px solid #ccc;">
    </div>

    <!-- Pergunta 4 -->
    <div style="margin-bottom: 25px;">
      <label style="font-weight: bold;">4. Terça-Feira: Qual atividade extra foi realizada? <span style="color: red;">*</span></label><br><br>
      <select style="width: 100%; padding: 12px; border-radius: 5px; border: 1px solid #ccc;">
        <option>Selecionar sua resposta</option>
        <option>Aula de reforço</option>
        <option>Atendimento individual</option>
        <option>N/A</option>
      </select>
    </div>

    <!-- Botão Enviar -->
    <div style="text-align: right;">
      <button style="background-color: #0078d4; color: white; padding: 12px 24px; border: none; border-radius: 6px; cursor: pointer;">
        Enviar
      </button>
    </div>

  </div>

</body>
</html>


)=====";
