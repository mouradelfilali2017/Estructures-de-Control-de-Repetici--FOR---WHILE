/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
** MOURAD EL FILALI                                                   31/01/2018 **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int comptar =11;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i < comptar; i++)
  {
    Serial.print(i);
    Serial.print("-");
  } 

  if (comptar = 11)
  {
    Serial.print(comptar);
  }
  
  
}



//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************

