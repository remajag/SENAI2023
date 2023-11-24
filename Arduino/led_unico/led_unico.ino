//Programa : Pisca Led Arduino
//Autor : FILIPEFLOP
 
void setup()
{
  //Define a porta do led como saida
  pinMode(7, OUTPUT);
}
 
void loop()
{
  //Acende o led
  digitalWrite(7, HIGH);
   
  //Aguarda o intervalo especificado
  delay(1000);
   
  //Apaga o led
  digitalWrite(7, LOW);
   
  //Aguarda o intervalo especificado
  delay(1000);
}
