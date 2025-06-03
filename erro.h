const char FAKE_FORM_HTML[] = R"=====(
<!DOCTYPE html>
<html lang="pt-BR">
<head>
  <meta charset="UTF-8">
  <title>Mundo Senai - Boas Vindas</title>
  <style>
    body {
      margin: 0;
      font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
      background: #e0e4e6;
      box-sizing: border-box;
      overflow: hidden; /* Para evitar barras de rolagem se o texto ficar muito grande */
    }
    .content-wrapper {
        width: 100%;
        min-height: 100vh;
        background: linear-gradient(to bottom, #f8f9fa, #e9ecef 60%, #dde1e3);
        display: flex;
        flex-direction: column;
        align-items: center;
        justify-content: center;
        padding: 3vh 10px; /* Padding vertical responsivo, horizontal menor para dar mais espaço ao texto */
        box-sizing: border-box;
        text-align: center;
    }
    .logo-text-container {
        margin-bottom: 3vh; /* Espaçamento responsivo entre o logo e a mensagem */
    }
    .logo-line {
        font-family: 'Segoe UI', Arial, Helvetica, sans-serif;
        font-weight: 700; /* Bold */
        /* Usando vw para o texto escalar com a largura da tela - "o maior possível" */
        font-size: 18vw;  /* Ajuste este valor para mais/menos tamanho */
        line-height: 0.85em; /* Linhas bem próximas para efeito de logo */
        text-transform: uppercase;
        display: block;
        letter-spacing: -0.02em; /* Opcional: para condensar um pouco as letras */
    }
    .logo-mundo {
        color: #fe2259;
    }
    .logo-senai {
        color: #3284d6;
    }
    .welcome-message {
      font-family: 'Segoe UI', Arial, Helvetica, sans-serif;
      font-size: 7vw; /* Proporcionalmente menor que o logo, mas ainda grande */
      color: #3284d6;
      margin-top: 0;
      margin-bottom: 0;
      font-weight: 700; /* Bold */
      text-transform: uppercase;
    }
  </style>
</head>
<body>

  <div class="content-wrapper">
    <div class="logo-text-container">
      <span class="logo-line logo-mundo">MUNDO</span>
      <span class="logo-line logo-senai">SENAI</span>
    </div>
    <p class="welcome-message">SEJA BEM VINDO</p>
  </div>

</body>
</html>
)=====";