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
      background: #e0e4e6; /* Fundo geral da página */
      box-sizing: border-box;
      overflow: hidden; 
    }
    .content-wrapper {
      width: 100%;
      min-height: 100vh;
      background: linear-gradient(to bottom, #f8f9fa, #e9ecef 60%, #dde1e3); /* Gradiente sutil para o wrapper */
      display: flex;
      flex-direction: column;
      align-items: center;
      justify-content: center;
      padding: 3vh 10px; 
      box-sizing: border-box;
      text-align: center;
    }
    .logo-text-container {
      /* Fundo em degradê com as cores do SENAI */
      background-image: linear-gradient(135deg, #0C1218, #61061D); 
      padding: 3vw 4vw; /* Ajuste no padding para a nova forma */
      /* Forma orgânica/blob usando border-radius assimétrico */
      border-radius: 60% 40% 30% 70% / 50% 60% 40% 50%; 
      margin-bottom: 4vh; /* Aumentar um pouco a margem inferior */
      box-shadow: 0 8px 25px rgba(0, 0, 0, 0.15); /* Sombra um pouco mais pronunciada */
      display: inline-block; 
      position: relative; /* Para garantir que o texto fique bem posicionado */
      transition: all 0.3s ease-in-out; /* Transição suave para possíveis interações futuras */
    }
    .logo-text-container:hover { /* Efeito sutil ao passar o mouse */
        transform: scale(1.03);
        box-shadow: 0 12px 30px rgba(0, 0, 0, 0.2);
    }
    .logo-line {
      font-family: 'Segoe UI', Arial, Helvetica, sans-serif;
      font-weight: 700; 
      font-size: 10vw;  /* Reduzir um pouco para caber melhor na forma orgânica */
      line-height: 1em; /* Ajustar altura da linha */
      text-transform: uppercase;
      display: block;
      letter-spacing: -0.02em;
      /* A cor do texto será branca para contrastar com o degradê */
      color: #ffffff; 
      text-shadow: 1px 1px 3px rgba(0, 0, 0, 0.3); /* Sombra de texto para destacar no degradê */
    }
    .logo-mundo {
      /* A cor individual pode ser removida se quisermos que ambas as linhas sejam brancas */
      color: #fe2259; 
    }
    .logo-senai {
      color: #3284d6; 
    }
    .welcome-message {
      font-family: 'Segoe UI', Arial, Helvetica, sans-serif;
      font-size: 4.5vw; 
      color: #3284d6;
      margin-top: 1vh; 
      margin-bottom: 1vh; 
      font-weight: 700; 
      text-transform: uppercase;
    }
    .user-email-display {
      font-family: 'Segoe UI', Arial, Helvetica, sans-serif;
      font-size: 3.5vw; 
      color: #495057; 
      margin-top: 1vh;
      margin-bottom: 2vh; 
      font-weight: normal; 
      text-transform: none; 
    }
  </style>
</head>
<body>
  <div class="content-wrapper">
    <p class="welcome-message">TURMA HT-INI-02-N-24-13451</p>
    <div class="logo-text-container">
      <span class="logo-line logo-mundo">MUNDO</span>
      <span class="logo-line logo-senai">SENAI</span>
    </div>
    <p class="welcome-message">SEJA BEM VINDO !!</p>
    <p class="user-email-display">##USER_EMAIL##</p> 
  </div>
</body>
</html>
)=====";
