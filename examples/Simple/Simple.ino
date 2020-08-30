#include <IOTSPT.h>
char ssid[]="YOUR-WIFI-SSID";
char password[]="YOUR-WIFI-PASSWARD";
String downloadedData;
IOTSPT iotspt;

void setup() {
Serial.begin(9600);
iotspt.email="IOTSPT-EMAIL";
iotspt.key="IOTSPT-KEY";
WiFi.begin(ssid, password); 
while (WiFi.status() != WL_CONNECTED) {  //Wait for the WiFI connection completion
  delay(500);
  Serial.println("Waiting for connection");
  } 
iotspt.upload(2, "1234"); //Select Channel , Write data in String 
       
}

void loop(){
downloadedData=iotspt.download(1); // Select Channel
Serial.println(downloadedData);
  }
 
