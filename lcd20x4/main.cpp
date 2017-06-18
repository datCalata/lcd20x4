#include <wiringPi.h>

// PIN de LED: el PIN 0 de wiringPi es BCM_GPIO 17.
// hemos tenido que usar la numeraci�n de BCM al inicializar con wiringPiSetupSys
// cuando elige un n�mero PIN diferente, use la numeraci�n de BCM, tambi�n
// en P�ginas de propiedades, seleccione Eventos de compilaci�n > Evento remoto posterior a la compilaci�n y actualice el comando. 
// que utiliza la exportaci�n de gpio para la configuraci�n de wiringPiSetupSys
#define	LED	17

int main(void)
{
	wiringPiSetupSys();

	pinMode(LED, OUTPUT);

	while (true)
	{
		digitalWrite(LED, HIGH);  // Activado
		delay(500); // ms
		digitalWrite(LED, LOW);	  // Desactivado
		delay(500);
	}
	return 0;
}