#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4); // 0x27 es la dirección I2C común; 20x4 es el tamaño de la pantalla
//sino probar con 0x20
//LiquidCrystal_I2C lcd(0x27, 16, 2);

/**************** Antonio Guillermo Pérez Coronilla ***************/
/* declaración de variables */
int spk=3;                                           // altavoz a GND y pin 13
int c[5]={131,262,523,1046,2093};       // frecuencias 4 octavas de Do
int cs[5]={139,277,554,1108,2217};      // Do#
int d[5]={147,294,587,1175,2349};       // Re
int ds[5]={156,311,622,1244,2489};    // Re#
int e[5]={165,330,659,1319,2637};      // Mi
int f[5]={175,349,698,1397,2794};       // Fa
int fs[5]={185,370,740,1480,2960};     // Fa#
int g[5]={196,392,784,1568,3136};     // Sol
int gs[5]={208,415,831,1661,3322};   // Sol#
int a[5]={220,440,880,1760,3520};      // La
int as[5]={233,466,932,1866,3729};    // La#
int b[5]={247,494,988,1976,3951};      // Si

void nota(int a, int b);            // declaración de la función auxiliar. Recibe dos números enteros.

void sonidos(){
/**************************************/
/*                  HARRY POTTER                    */
/**************************************/
nota(b[2], 500);          
nota(e[3],1000); 
nota(g[3], 250);
nota(fs[3],250);
nota(e[3],1000);
nota(b[3],500);
nota(a[3],1250);
nota(fs[3],1000);    
nota(b[2], 500);
nota(e[3],1000);
nota(g[3],250);  
nota(fs[3],250);
nota(d[3],1000);
nota(e[3],500 );
nota(b[2],1000 );    
noTone(spk); delay(1000);   
nota(b[2], 500);
nota(e[3],1000);
nota(g[3], 250);
nota(fs[3],250);
nota(e[3],1000);
nota(b[3],500);
nota(d[4],1000);
nota(cs[4],500);
nota(c[4],1000);
nota(a[3],500);
nota(c[4],1000);
nota(b[3],250);
nota(as[3],250);
nota(b[2],1000);
nota(g[3],500);
nota(e[3],1000);
noTone(spk); 
delay(2000);       

/*******************/
/*     STAR WARS      */
/*******************/
/**** tema principal ****/
nota(d[1],150);noTone(spk);delay(50);
nota(d[1],150);noTone(spk);delay(50);
nota(d[1],150);noTone(spk);delay(50);
nota(g[1],900);noTone(spk);delay(150);
nota(d[2],900);noTone(spk);delay(50);
nota(c[2],150);noTone(spk);delay(50);
nota(b[1],150);noTone(spk);delay(50);
nota(a[1],150);noTone(spk);delay(50);
nota(g[2],900);noTone(spk);delay(150);
nota(d[2],900);noTone(spk);delay(100);
nota(c[2],150);noTone(spk);delay(50);
nota(b[1],150);noTone(spk);delay(50);
nota(a[1],150);noTone(spk);delay(50);
nota(g[2],900);noTone(spk);delay(150);
nota(d[2],900);noTone(spk);delay(100);
nota(c[2],150);noTone(spk);delay(50);
nota(b[1],150);noTone(spk);delay(50);
nota(c[2],150);noTone(spk);delay(50);
nota(a[1],1200);noTone(spk);delay(2000);

/**** marcha del imperio   ****/
nota(g[2],500);noTone(spk);delay(100);
nota(g[2],500);noTone(spk);delay(100);
nota(g[2],500);noTone(spk);delay(100);
nota(ds[2],500);noTone(spk);delay(1);
nota(as[2],125);noTone(spk);delay(25);
nota(g[2],500);noTone(spk);delay(100);
nota(ds[2],500);noTone(spk);delay(1);
nota(as[2],125);noTone(spk);delay(25);
nota(g[2],500);
noTone(spk);delay(2000);
   
}

void nota(int frec, int t)
{
   tone(spk,frec);      // suena la nota frec recibida
    delay(t);                // para despues de un tiempo t
}

void setup()
{  
  lcd.begin(20, 4); // Inicia la pantalla LCD de 20x4
  lcd.backlight();  // Activa la luz de fondo
  lcd.print("Hola, Arduino!"); // Muestra un mensaje
  // lcd.init();
  // lcd.backlight();
  // lcd.clear();
  // lcd.setCursor(0,0);
  // lcd.print("El Profe Garcia.."); // Mensaje a despegar

  // delay(3000);
  sonidos();
}
void loop()
{
  // for(int c=0;c<12; c++){
  //   lcd.scrollDisplayLeft();
  //   delay(400);
  // }
  // for(int c=0; c<12; c++){ 
  //   lcd.scrollDisplayRight();
  //   delay(400);
  // }
}
