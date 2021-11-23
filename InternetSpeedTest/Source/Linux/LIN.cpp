#include<iostream>
#include<conio.h>
#include<Windows.h>

using namespace std;

int main(){
    cout << "Welcome to internet speed test..." << endl;
    cout << "This works by sending pings to many servers and checking the amount of ms it takes to respond." << endl;
    Sleep(1000);
    system("ping 1.1.1.1");
    cout << " " << endl;
    cout << " " << endl;
    cout << "^^ Cloudflare ^^  || If your average responce time is below 21 you have great internet || If your internet is above 33 your internet is slow." << endl;
    cout << " " << endl;
    cout << " " << endl;
    system("ping 8.8.8.8");
    cout << " " << endl;
    cout << " " << endl;
    cout << "^^ Google ^^  || If your average responce time is below 18 you have great internet || If your internet is above 30 your internet is slow." << endl;
    cout << " " << endl;
    cout << " " << endl;
    system("ping 54.230.254.106");
    cout << " " << endl;
    cout << " " << endl;
    cout << "^^ Amazon ^^  || If your average responce time is below 24 you have great internet || If your internet is above 35 your internet is slow." << endl;
    system("pause");
}
