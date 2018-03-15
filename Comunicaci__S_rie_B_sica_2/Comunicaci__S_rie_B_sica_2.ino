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
void setup()              
{
  Serial.begin(9600); // obre el port sèrie configurant la velocitat a 9600bps
}

//*************************** LOOP *********************************
void loop()                     
{
  Serial.print("Hello world!");  // prints Hello world!
  delay(1000); // espera 1 segon
}
//************************* FUNCIONES ******************************
//Aquest progtama mostra "Hello World" en el monitor sèrie del programa del Arduino, espera 1 segon i torna a sortir el "Hello World", i així infinitament
