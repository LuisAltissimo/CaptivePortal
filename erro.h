const char FAKE_FORM_HTML[] = R"=====(
<!DOCTYPE html>
<html lang="pt-BR">
<head>
  <meta charset="UTF-8">
  <title>Abril Verde</title>
</head>
<body style="margin: 0; font-family: 'Segoe UI', sans-serif; background: linear-gradient(#c8dbea, #e9f1f7); padding: 50px;">

  <div style="max-width: 700px; margin: auto; background: white; padding: 40px; border-radius: 10px; box-shadow: 0 4px 12px rgba(0,0,0,0.1);">
    
    <h2 style="margin-top: 0;">Abril Verde</h2>
    <p style="color: #333; margin-bottom: 30px;">
      Este formulário destina-se a verificar o nível de engajamento dos alunos do Senai com o tema "Abril Verde" que tem como objetivo disseminar e conscientizar os empregadores, trabalhadores e toda a população sobre a implantação de ações de prevenção de acidentes e doenças relacionadas ao trabalho.
      <br><br>
      Por favor, responda as perguntas abaixo:
    </p>

    <p style="color: red; margin-bottom: 30px;">* Obrigatória</p>

    <!-- Pergunta 1 -->
    <div style="margin-bottom: 25px;">
      <label style="font-weight: bold;">1. Você já ouviu falar sobre o "Abril Verde"?<span style="color: red;">*</span></label><br><br>
      <select style="width: 100%; padding: 12px; border-radius: 5px; border: 1px solid #ccc;">
        <option>Selecionar sua resposta</option>
        <option>Sim, conheço bem o tema</option>
        <option>Já ouvi algo mas não sei detalhes</option>
        <option>Nunca ouvi falar</option>
      </select>
    </div>

    <!-- Pergunta 2 -->
    <div style="margin-bottom: 25px;">
      <label style="font-weight: bold;">2. O que você acha que representa o símbolo do laço verde no Abril Verde?<span style="color: red;">*</span></label><br><br>
      <select style="width: 100%; padding: 12px; border-radius: 5px; border: 1px solid #ccc;">
        <option>Selecionar sua resposta</option>
        <option>Conscientização sobre segurança no trabalho</option>
        <option>Meio Ambiente</option>
        <option>Não sei</option>
      </select>
    </div>

    <!-- Pergunta 3 -->
    <div style="margin-bottom: 25px;">
      <label style="font-weight: bold;">3. Como você acha que poderíamos promover o Abril Verde na nossa escola/comunidade?<span style="color: red;">*</span></label><br><br>
      <select style="width: 100%; padding: 12px; border-radius: 5px; border: 1px solid #ccc;">
        <option>Selecionar sua resposta</option>
        <option>Palestrar e debates</option>
        <option>Campanhas nas redes sociais</option>
        <option>Atividades práticas (simulações, oficinas)</option>
        <option>Não tenho ideia</option>
      </select>
    </div>

    <!-- Pergunta 4 -->
    <div style="margin-bottom: 25px;">
      <label style="font-weight: bold;">4. Você já participou de alguma atividade relacionada à segurança no trabalho ou saúde ocupacional?<span style="color: red;">*</span></label><br><br>
      <select style="width: 100%; padding: 12px; border-radius: 5px; border: 1px solid #ccc;">
        <option>Selecionar sua resposta</option>
        <option>Sim, várias</option>
        <option>Uma ou duas vezes</option>
        <option>Nunca participei</option>
      </select>
    </div>

    <!-- Pergunta 5 -->
    <div style="margin-bottom: 25px;">
      <label style="font-weight: bold;">5. Qual é a importância, na sua opinião, de discutir segurança e saúde no trabalho, especialmente entre jovens?<span style="color: red;">*</span></label><br><br>
      <select style="width: 100%; padding: 12px; border-radius: 5px; border: 1px solid #ccc;">
        <option>Selecionar sua resposta</option>
        <option>Muito importante, pois previne acidentes futuros</option>
        <option>Importante, mas não é prioridade agora</option>
        <option>Pouco relevante para mim</option>
      </select>
    </div>

    <!-- Botão Enviar -->
    <form method="GET" action="/final">
      <div style="text-align: right;">
        <button style="background-color: #0078d4; color: white; padding: 12px 24px; border: none; border-radius: 6px; cursor: pointer;">
          Enviar
        </button>
      </div>
    </form>

  </div>

</body>
</html>


)=====";
