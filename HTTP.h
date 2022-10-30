String URL = "https://inset-catch-electric.herokuapp.com/updateDeviceData";
int delay_time = 4000;

void post_data(String data) {
  Serial.println("AT+HTTPINIT");
  delay(delay_time);

  Serial.println("AT+HTTPPARA=\"URL\",\"" + URL + "\""); //set URL 
  delay(delay_time);

  Serial.println("AT+HTTPPARA=\"CONTENT\",\"application/json\"");//set content-type
  delay(delay_time);

  Serial.println("AT+HTTPDATA=" + String(data.length()) + ",5000");//set data to post
  delay(delay_time);

  Serial.println(data);
  delay(delay_time);

  Serial.println("AT+HTTPACTION=1");// 0:get,1:post
   delay(5000);

   Serial.println("AT+HTTPTERM");
  delay(delay_time);
}