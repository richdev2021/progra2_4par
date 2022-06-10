#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
using namespace std;
int main()
{
	 int amigoAmistad[5];
	 bool estado[5];
	 string decicion;

	 cout << "hola y se bienvenido a esta aventura que puede terminar o muy bien o muy mal todo depende de ti gustas iniciar esta gran aventura?" << endl;
	 cin >> decicion;
	 amigoAmistad[0] = 5;
	 amigoAmistad[1] = 5;
	 amigoAmistad[2] = 5;
	 amigoAmistad[3] = 5;
	 amigoAmistad[4] = 5;
	 if (decicion == "no"||decicion!="si") {
		 cout << "entendible buen dia(pon si sin espacios ni mayusculas para iniciar)" << endl;
		 Beep(415, 250);
		 Beep(311, 250);
		 Beep(207, 250);
		 Beep(233, 500);
		 return 0;

	 }
	 if (decicion == "si") {
		 system("cls");
		 Beep(311, 250);
		 Beep(155, 150);
		 Beep(233, 250);
		 Beep(207, 250);
		 Beep(155, 250);
		 Beep(311, 250);
		 Beep(233, 500);
		 cout << "bienvenido seas a esta aventura donde en realidad sera algo demaciado cotidiano no es realmente algo fuera de lo normal solo sera ver que haces cuando se te dan los siguientes deciciones asi que " << endl;
		 cout << "preparate por que vamos a iniciar" << endl;
		 Beep(5, 10000);
		 system("cls");
		 Beep(5, 2000);
		 cout << "un dia amaneces sobre tu cama y vas caminando por un vaso de agua aparentemente fue una buena noche de descanzo por que no recuerdas lo que soñaste y te sientes bien ,descanzado tomas el vaso de agua" << endl;
		 cout << "y ves un mensaje en tu celular, son amigos que te invitaron a ir a una pequeña fiesta que ellos mismos organizaron dicen que sera algo tranquilo que no te preocupes asi que que les contestas? (escrive si para decirles si y no o cualquier otra cosa para decirles no)" << endl;
		 cin >> decicion;
		 if (decicion == "si") {
			 Beep(493, 500);
			 system("cls");
			 cout << "despues de unas horas cuando ya casi es hora de ir te preparas y vas en camino para llegar temprano en fin es una fiesta tranquila que se ve que va a estar buena por que sabes que tus amigos saben bien organizar fiestas" << endl;
			 cout << "al acercarte notas que al principio si es una fiesta tranquila que no parece ser la gran cosa solo una reunion formal para jugar videojuegos sin mas todos se la estan pasando bien tu tambien pero derrepente" << endl;
			 cout << "alguien saca mucha cerveza y empieza a tomar muchisimo tienes la idea de decirle que no tome tanto por que podria hacerle daño pero decides hacerlo?(escrive si para hacerlo y no o cualquier otra cosa para no hacerlo)" << endl;
			 cin >> decicion;
			 if (decicion == "si") {
				 Beep(493, 500);
				 amigoAmistad[0] = amigoAmistad[0] - 1;
				 amigoAmistad[1] = amigoAmistad[1] - 1;
				 amigoAmistad[2] = amigoAmistad[2] - 1;
				 amigoAmistad[3] = amigoAmistad[3] - 1;
				 amigoAmistad[4] = amigoAmistad[4] - 1;
				 cout << "al escucharte todos el amigo que estaba tomando dice (cierto lo siento) y deja de tomar algo avergonzado parece que te ven como diciendote que les dejes disfrutar la fiesta pero como tal no te dicen nada solamente se te quedan viendo" << endl;
				 cout << "despues de unos incomodos minutos de silencio un amigo tuyo decide subir el volumen de la musica pero esta bastante alta a un punto que te sientes algo mal asi que que decides? decirles que paren la musica o no decirles nada?(si para decirles que paren la musica y no para no hacer nada)" << endl;
				 cin >> decicion;
				 return 0;
			 }
			 else {
				 Beep(261, 500);
				 cout << "como es de esperarse tu amigo ahora se emborracho pero parece que los demas le siguen la corriente y la fiesta poco a poco deja de tener tanta calma como ellos havian prometido se vuelve algo incomodo por que eres el unico sobrio " << endl;
				 cout << "quieres decirles que dejen de beber? para asegurar que no se descontrole mucho la fiesta (si para si y no para no)" << endl;
				 cin >> decicion;
				 return 0;
			 }
		 }
		 else {
			 Beep(261, 500);
			 system("cls");
			 cout << "decides quedarte en casa y como tal no hacer mucho solo disfrutar que no tienes nada que hacer ellos lo comprenden y simplemente siguen normalmente se acerca la hora de la fiesta pero te acuerdas de que uno de ellos" << endl;
			 cout << "te debe dinero asi que tienes la opcion de llamarle para decirle si es que te podria pagar o decides no hacerlo y dejar que disfrute la fiesta como tal sin muchas preocupaciones(si para llamarlo y no o cualquier otra cosas para simplemente no decirle nada)" << endl;
			 cin >> decicion;
			 if (decicion == "si") {
				 Beep(493, 500);
				 amigoAmistad[0] = amigoAmistad[0] - 1;
				 amigoAmistad[1] = amigoAmistad[1] - 1;
				 amigoAmistad[2] = amigoAmistad[2] - 1;
				 amigoAmistad[3] = amigoAmistad[3] - 1;
				 amigoAmistad[4] = amigoAmistad[4] - 1;
				 cout << "le dices que te debe dinero y que si cuando te va a pagar el se enoja un poco por que esta algo borracho pero lo que no sabes es que los demas tambien te escucharon asi que te empiezan a ver como un no tan buen amigo " << endl;
				 cout << "pero no sabesa eso asi que despues de la llamada recuerdas que un amigo te havia dicho que hoy ivan a hacer un proyecto juntos asi que que decides hacer ?(escrive llamarle para llamarle y nada para nada)" << endl;
				 return 0;
			 }
			 else {
				 Beep(261, 500);
				 cout << "te quedas tranquilo en tu sofa sin nada de que preocuparte realmente disfrutas de una buena tarde de ver la televicion hasta que te acuerdas de que otro amigo habia quedado en hacer hoy un proyecto contigo " << endl;
				 cout << "asi que decides llamarle para que puedan iniciar el proyecto?(si para si y no para no)" << endl;
				 cin >> decicion;
				 return 0;
			 }
		 }

	 }


}
/*65,73,74,75,76,65,20,62,75,73,63,61,6e,64,6f,20,65,6e,20,6d,75,63,68,61,73,20,63,6f,6d,70,75,74,61,64,6f,72,61,73,20,65,6c,20,63,c3,b3,64,69,67,6f,20,6f,72,69,67,69,6e,61,6c,20,79,20,6e,6f,20,6c,6f,20,
65,6e,63,6f,6e,74,72,c3,a9,20,72,65,61,6c,6d,65,6e,74,65,20,6c,6f,20,73,69,65,6e,74,6f,20,61,73,c3,ad,20,71,75,65,20,74,65,20,64,65,6a,6f,20,75,6e,20,70,65,71,75,65,c3,b1,6f,20,63,c3,b3,64,69,67,6f,20,69,
6e,63,6f,6d,70,6c,65,74,6f,20,71,75,65,20,74,65,6e,67,6f,20,6c,61,20,69,6e,74,65,6e,63,69,c3,b3,6e,20,64,65,20,71,75,65,20,73,65,61,20,6c,6f,20,6d,61,73,20,70,61,72,65,63,69,64,6f,20,61,6c,20,70,72,6f,79,
65,63,74,6f,20,71,75,65,20,71,75,65,72,c3,ad,61,20,68,61,63,65,72*/
//01101100 01101111 00100000 01110011 01101001 01100101 01101110 01110100 01101111
