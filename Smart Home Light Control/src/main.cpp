#define BLYNK_TEMPLATE_ID "TMPL3dWjAihK9"
#define BLYNK_TEMPLATE_NAME "Smart Home Light"
#define BLYNK_AUTH_TOKEN "p9RpyyiWR6xSZKNIhD68IfBmyTRiEzd8"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Wokwi-GUEST";
char pass[] = "";

#define LED_PIN 4

BLYNK_WRITE(V0)
{
  int value = param.asInt();
  digitalWrite(LED_PIN, value);
}

void setup()
{
  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);

  Blynk.begin(
      BLYNK_AUTH_TOKEN,
      ssid,
      pass
  );
}

void loop()
{
  Blynk.run();
}