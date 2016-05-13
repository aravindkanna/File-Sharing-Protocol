#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>

using namespace std;

int tcp_server(string listenportno);
int tcp_client(string ip, string connectportno);
int udp_server(string listenportno);
int udp_client(string ip, string connectportno);

int main(int argc, char* argv[]){
	if(argc!=5){
		cout << "Wrong Format" << endl;
		cout << "Usage: ./a.out <listenportno> <ip of server> <connectportno> <protocol> " << endl;
		return 1;
	}

	string listenportno = argv[1];
	string ip = argv[2];
	string connectportno = argv[3];

	bool udp = false;
	if(strcmp(argv[4], "udp")){
		udp = true;
	}

	pid_t pid;
	pid = fork();

	if(!pid){
		//child process
		if(udp){
			//start udp server
		}
		else{
			//start tcp server
		}
	}
	else{
		//parent process
		if(udp){
			//start udp client
		}
		else{
			//start tcp client
		}
	}

	return 0;
}

int tcp_server(string listenportno){
	
}

