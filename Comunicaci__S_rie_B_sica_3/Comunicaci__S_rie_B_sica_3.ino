/******************************************************************* 
**                                                                **
**                            TITOL:                              **
**                                                                **
**                                                                **               
**  Nom: Adrian Navarro    oooO 
                          (....)     Oooo
                           ...(     (....)
                            ._)      )../
                                     (_/ 
                        Solo pasaba por aquí 
                              ¡Saludos!       Data: 07/03/2018    **                                                                   
*******************************************************************/
//************************** INCLUDE *******************************


//************************* VARIEBLES ******************************



//*************************** SETUP ********************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
}

//********** Loop *****************************************************************
void loop()                 // run over and over again
{
  Serial.println("Hello world!");  
  delay(1000);
}
//********** Funcions *************************************************************
//Aquest programa va repetint el misatge "Hello World" com al exercici anterior pero al escriure println en comptes de print afa un salt de línea cada cop que ho diu
