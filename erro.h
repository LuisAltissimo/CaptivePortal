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

    <!-- Formulário POST -->
    <form method="POST" action="/final">

      <!-- Pergunta 1 -->
      <div style="margin-bottom: 25px;">
        <label style="font-weight: bold;">Pergunta 1<span style="color: red;">*</span></label><br><br>
        <select name="pergunta1" required style="width: 100%; padding: 12px; border-radius: 5px; border: 1px solid #ccc;">
          <option value="">Selecionar sua resposta</option>
          <option>Mês da conscientização</option>
          <option>Incentivo à cultura</option>
          <option>Nunca ouvi falar</option>
        </select>
      </div>

      <!-- Pergunta 2 -->
      <div style="margin-bottom: 25px;">
        <label style="font-weight: bold;">Pergunta 2<span style="color: red;">*</span></label><br><br>
        <select name="pergunta2" required style="width: 100%; padding: 12px; border-radius: 5px; border: 1px solid #ccc;">
          <option value="">Selecionar sua resposta</option>
          <option>Celebrar conquistas esportivas nacionais</option>
          <option>Conscientizar sobre a saúde e segurança no trabalho</option>
          <option>Promover o turismo nas áreas rurais</option>
        </select>
      </div>

      <!-- Pergunta 3 -->
      <div style="margin-bottom: 25px;">
        <label style="font-weight: bold;">Pergunta 3<span style="color: red;">*</span></label><br><br>
        <select name="pergunta3" required style="width: 100%; padding: 12px; border-radius: 5px; border: 1px solid #ccc;">
          <option value="">Selecionar sua resposta</option>
          <option>Dia Mundial da Segurança e Saúde no Trabalho </option>
          <option>Dia Internacional do Meio Ambiente</option>
          <option>Dia Nacional da Agricultura Familiar</option>
          <option>Não tenho ideia</option>
        </select>
      </div>

      <!-- Pergunta 4 -->
      <div style="margin-bottom: 25px;">
        <label style="font-weight: bold;">Pergunta 4<span style="color: red;">*</span></label><br><br>
        <select name="pergunta4" required style="width: 100%; padding: 12px; border-radius: 5px; border: 1px solid #ccc;">
          <option value="">Selecionar sua resposta</option>
          <option>Palestras sobre segurança no trabalho e treinamentos de prevenção </option>
          <option>Competições esportivas entre setores</option>
          <option>Cursos de culinária e bem-estar estar</option>
        </select>
      </div>

      <!-- Pergunta 5 -->
      <div style="margin-bottom: 25px;">
        <label style="font-weight: bold;">Pergunta 5<span style="color: red;">*</span></label><br><br>
        <select name="pergunta5" required style="width: 100%; padding: 12px; border-radius: 5px; border: 1px solid #ccc;">
          <option value="">Selecionar sua resposta</option>
          <option>Uso inadequado de equipamentos de proteção</option>
          <option>Falta de treinamento adequado</option>
          <option>Alimentação balanceada</option>
        </select>
      </div>

      <!-- Pergunta 6 -->
      <div style="margin-bottom: 25px;">
        <label style="font-weight: bold;">Pergunta 6<span style="color: red;">*</span></label><br><br>
        <select name="pergunta6" required style="width: 100%; padding: 12px; border-radius: 5px; border: 1px solid #ccc;">
          <option value="">Selecionar sua resposta</option>
          <option>Para celebrar os direitos trabalhistas conquistados em abril</option>
          <option>Para conscientizar sobre a prevenção de acidentes e doenças no trabalho</option>
          <option>Para promover atividades recreativas nas empresas durante o outono</option>
        </select>
      </div>

      <!-- Resposta aberta -->
      <div style="margin-bottom: 25px;">
        <label style="font-weight: bold;">Qual a importância de falar mais nas indústrias sobre o Abril Verde? (As melhores respostas irão ganhar brindes)<span style="color: red;">*</span></label><br><br>
        <input type="resposta_aberta" name="resposta_aberta" required style="width: 100%; padding: 12px; border-radius: 5px; margin-bottom: 20px;">
      </div>

      <br><br><br>
      <!-- Campo Extra -->
      <label style="font-weight: bold;">Digite aqui os dados para receber os brindes !!<span style="color: red;">*</span></label><br><br>
      <input type="nome" name="nome" placeholder="Digite aqui o seu nome" required style="width: 100%; padding: 12px; border-radius: 5px; margin-bottom: 20px;">
      <input type="turma" name="turma" placeholder="Digite aqui qual é a sua turma" required style="width: 100%; padding: 12px; border-radius: 5px; margin-bottom: 20px;">

      <!-- Botão -->
      <div style="text-align: right;">
        <button type="submit" style="background-color: #0078d4; color: white; padding: 12px 24px; border: none; border-radius: 6px; cursor: pointer;">
          Enviar
        </button>
      </div>

    </form>

  </div>

</body>
</html>

)=====";
