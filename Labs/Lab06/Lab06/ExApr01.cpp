#include <iostream>

using namespace std;

int main() {

	system("chcp 1252 > nil");
	
	int horaInicio, horaFim, minInicio, minFim;
	cout << "Digite o horário de partida (HH:MM): ";
	cin >> horaInicio; cin.get(); cin >> minInicio;

	cout << "Digite o horário de chegada (HH:MM): ";
	cin >> horaFim; cin.get(); cin >> minFim;

	float horaInicioDecimal, horaFimDecimal;
	horaInicioDecimal = horaInicio + (minInicio / 60.0);
	horaFimDecimal = horaFim + (minFim / 60.0);

	float horaDifDecimal = horaFimDecimal - horaInicioDecimal;

	int horas = horaDifDecimal;
	int minutos = round((horaDifDecimal - horas) * 60);


	//primeira logica que criei
	/*hhResultado = ((hhFim - hhInicio) * 60 + (mmFim - mmInicio)) / 60;

	mmResultado = ceil((((hhFim - hhInicio) * 60.0 + (mmFim - mmInicio)) / 60 - hhResultado) * 60);*/

	cout << "O tempo total de viagem foi " 
		<< horas
		<< " horas e "
		<< minutos
		<< " minutos.";

	return 0;
}
