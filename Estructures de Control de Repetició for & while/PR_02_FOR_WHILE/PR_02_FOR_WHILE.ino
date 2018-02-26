/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
** MOURAD EL FILALI                                                   05/02/2018 **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

int comptar = 11;
int i = 0;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     
  Serial.print("Ara comptare de 0 a "); 
  Serial.println(comptar); 
  while(i < comptar)  
  {
    Serial.print(i); 
    Serial.print("-"); 
    i++; 
  }
  
  if (comptar = 11) 
  
  { 
    Serial.print (comptar);
  }
}


//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************

