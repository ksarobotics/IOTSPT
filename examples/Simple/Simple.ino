
#include <ESP8266HTTPClient.h>
#include <ESP8266WiFi.h>
int httpCode =0; 
char ssid[]="PTCL-BB";
char password[]="totalmart1";
String email="awaiskhawar@yahoo.com";
String key="9283767126";
String downloadedData;

void setup() {
 
  Serial.begin(9600);
  WiFi.begin(ssid, password); 
  while (WiFi.status() != WL_CONNECTED) {  //Wait for the WiFI connection completion
    delay(500);
    Serial.println("Waiting for connection");
       } 
       upload(3, "1234");
       downloadedData=download(2);
       Serial.println(downloadedData);
}

void loop(){
  
  }
 
