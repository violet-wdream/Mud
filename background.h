#ifndef BACKGROUND_H
#define BACKGROUND_H
#include<iostream>
#include<fstream>
#include<string>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment (lib,"winmm.lib")
using namespace std;

void tab(int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << "\t";
	}
}

void outputTxt(string txt)
{
	string line;
	ifstream myfile(txt);
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			
			cout <<"    " << line << endl;
			Sleep(5);
		}
		myfile.close();
	}
	else cout << "error,fail to output the file";
}


void FullScreen()
{
	HWND hwnd = GetForegroundWindow();
	int cx = GetSystemMetrics(SM_CXSCREEN);            /* ��Ļ��� ���� */
	int cy = GetSystemMetrics(SM_CYSCREEN);            /* ��Ļ�߶� ���� */
	LONG l_WinStyle = GetWindowLong(hwnd, GWL_STYLE);   /* ��ȡ������Ϣ */
	/* ���ô�����Ϣ ��� ȡ�����������߿� */
	SetWindowLong(hwnd, GWL_STYLE, (l_WinStyle | WS_POPUP | WS_MAXIMIZE) & ~WS_CAPTION & ~WS_THICKFRAME & ~WS_BORDER);
	SetWindowPos(hwnd, HWND_TOP, 0, 0, cx, cy, 0);
}


void welcomePage()  //welcompage
{
	if (0 == PlaySound(TEXT("enter.wav"), NULL, SND_FILENAME | SND_ASYNC))
	{
		printf("playsound false");
	}																	
	FullScreen();
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2 );
	//outputTxt("queengarden.txt");
	//system("pause");
	outputTxt("cover.txt");
	system("pause");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	string beginning = "\n\n\n\n\n	\t\t\t\t\t\t'�k����Ԩ�ĳ�����������ʱ�������԰�֮������������ͬ���ն���ʿ�뿪��Ԩ��'\n\n	\t\t\t\t\t\t'��Ԩ����ڱ���ӡ�����kҲ׹����Ԩ��'\n\n	\t\t\t\t\t\t'����֮���һ��ʱ�����Ȼ��Ԩ����ڱ��رգ����ǵk��һЩͬ�����ǳɹ���������Ԩ��'\n\n	\t\t\t\t\t[�߽硭���ε�����ͣ��������ȴ�����ɳ�������ѭ�������⡭���ն���ʿ�����ٻ������ص�����ʥ����]\n\n";
	for (int i = 0; i < beginning.length(); i++) {
		Sleep(0);
		cout << beginning[i];
	}
	cout << endl << endl;
	system("pause");
	system("cls");



	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED); 

	tab(4); cout << '\t' << '\t' << " 0      0    0000000      0          0        00000000   0              0             0" << endl;
	tab(4); cout << '\t' << '\t' << " 0      0   0 00    0    00         00       0 00     0   0            0 0           0" << endl;
	tab(4); cout << '\t' << '\t' << " 0      0   0  0    0     0          0       0  0     0    0          0   0         0" << endl;
	tab(4); cout << '\t' << '\t' << " 00000000   0   0   0     0          0       0   0    0     0       0      0       0" << endl;
	tab(4); cout << '\t' << '\t' << " 0      0   0   0   0     0          0       0    0   0      0     0        0     0" << endl;
	tab(4); cout << '\t' << '\t' << " 0      0   0    0  0     0          0       0     0  0       0   0          0   0" << endl;
	tab(4); cout << '\t' << '\t' << " 0      0   0    00 0     0          0       0     00 0        0 0            0 0	" << endl;
	tab(4); cout << '\t' << '\t' << " 0      0    0000000      0000000    0000000  00000000          0              0	" << endl << endl << endl;

	tab(4); cout << '\t' << '\t' << "	0    00      0      0   0000000    000000    0	    0    000000000     " << endl;
	tab(4); cout << '\t' << '\t' << "	0   0        0 0    0      0	  0    0     0	    0        0" << endl;
	tab(4); cout << '\t' << '\t' << "	0  0         0  0   0      0	  0          0	    0        0" << endl;
	tab(4); cout << '\t' << '\t' << "	00           0   0  0      0	  0   00000  00000000        0" << endl;
	tab(4); cout << '\t' << '\t' << "	0  0         0    0 0      0	  0     0 0  0	    0        0" << endl;
	tab(4); cout << '\t' << '\t' << "	0    0       0     00      0	  0    0  0  0	    0        0" << endl;
	tab(4); cout << '\t' << '\t' << "	0     00     0      0   0000000    0000      0	    0        0	" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	tab(8); cout << "	- WELCOME TO THE HOLLOW KNIGHT -" << endl;
	tab(8); cout << "	********************************" << endl;
	string newGameMenu = "       1.�µ���Ϸ  2.��ȡ�浵  3.�˳���Ϸ";
	tab(8); for (int i = 0; i < newGameMenu.length(); i++) {
		Sleep(0);
		cout << newGameMenu[i];
	}
	cout << endl;



	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	newGameMenu = "\t\t\t\t\t\t\t\t\t����ʲô���۶�������ϧ��\n\t\t\t\t\t\t\t\t\tû�п���˼�������ǡ�\n\t\t\t\t\t\t\t\t\tû�п������ӵ���־��\n\t\t\t\t\t\t\t\t\tû��Ϊ���ѿ�����������\n\t\t\t\t\t\t\t\t\t�����������֮�֡�\n\t\t\t\t\t\t\t\t\t��ط�ӡ����������ɢ�����ߵ���Ŀ֮�⡣\n\t\t\t\t\t\t\t\t\t����������\n\t\t\t\t\t\t\t\t\t���ǿն���ʿ����\n";
	for (int i = 0; i < newGameMenu.length(); i++) {
		Sleep(0);
		cout << newGameMenu[i];
	}
	cout << endl;
	tab(8); cout << "��ѡ��";
}

//----------------------------------------------------------------------------------------------------------
void background1()   //Dirtmouth 
{
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	system("cls");
	if (0 == PlaySound(TEXT("dirtmouth.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC)) //��������
	{
		printf("playsound false");
	}
	outputTxt("dirtmouth.txt");
	
	tab(6); cout << "				����é˹" << endl;
	string background = "\t\t\t\t\t\t���µ�ʯ������ͣЪ�Ĵ��ꡣդ�������ٲݣ���վ������Ȼ�Ͼ�ȴ��Ȼ���й���\n\n \t\t\t\t\t\t������������ĬĬ�鿴��ͼ���Ա���һλ����ͣЪ�����ߡ� \n\n\t\t\t\t\t\t�������ӡ� ����˵�������ķ��٣����ĵ������������վ̨�Լ���Ƭ�����ƾõ���ʷ�� \n\n\t\t\t\t\t\t�������������������Σ���������ȥ����һ��·��... ��һ��Ъ�ţ���һ�ι��¡�\n";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}
	cout << endl;
	system("pause");
	system("cls");
	cout << endl;
}
//------------------------------------------------------------------------------------------------------------
void background2() //Crossroads
{
	

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	system("cls");
	if (0 == PlaySound(TEXT("crossroads.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC)) //��������
	{
		printf("playsound false");
	}

	tab(6); cout << "				����ʮ��·" << endl;
	string background = "\t\t\t\t\t\t����ʮ��·����Ĺ�·�������������������������ߺ��������������������������������ͨʥ�������������Ŧ��\n\n\t\t\t\t\t\t���ڸ�Ⱦ��ʱ�����ţ�ʮ��·�Ľ�ͨ�Ѿ�ֹͣ�ˡ�\n\n\t\t\t\t\t\t�������տյ�������Ұ��ռ�죬�ε��Ź�ȥʥ���������ʬ���⡣\n";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}
	cout << endl;
	system("pause");
	system("cls");
	cout << endl;
	
}
//--------------------------------------------------------------------------------------------------------------
void background4()  //	Queengarden
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	system("cls");

	if (0 == PlaySound(TEXT("queengarden.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC)) //��������
	{
		printf("playsound false");
	}
	outputTxt("queengarden.txt");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	tab(6); cout << "				����԰" << endl;
	string background = "\t\t\t\t\t\t����԰�������ڶ�������̦޺���䡣\n\t\t\t\t\t\t֮�󣬱�ʥ���滮����Ϊ�˰�ɫ���˾��ӵ�Ԣ�����䱸�൱ɭ�ϣ�������һЩ�ڶ���������Ӻ͵����ɢ�ڻ�԰�С�\n\n\t\t\t\t\t\t��ɫ�����������ǵ�ĸ�ס����ڶ��Լ���������������Σ������Լ�����������԰�����������������\n\n\t\t\t\t\t\t���߾�������������û��ά���Ļ�԰�������߰���س�����ֲ�\n";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}
	cout << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	system("pause");
	system("cls");
	cout << endl;
}
	
//-------------------------------------------------------------------------------------------------------------------
void background6()  //PalePalace
{

	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	system("cls");
	
	if (0 == PlaySound(TEXT("palepalace.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC)) //��������
	{
		printf("playsound false");
	}
	outputTxt("palepalace.txt");
	tab(6); cout << "				�԰׹�͢" << endl;
	string background = "\t\t\t\t\t\t�԰׹����������ڹ�����صĹ���㳡���԰�֮���ڴ�ͳ��ʥ����\n\n\t\t\t\t\t\t�������ʹ��ǣ����Ҽҳ�����������빤���ţ������������Ĺ�����ʹ������ƳɵĹ����������������\n\n\t\t\t\t\t\t�ն���ʿ����ӡ�ں���ʥ��ǰ�������ﱻ�����ɳ���\n\n\t\t\t\t\t\t���߾���������ʥ����Ϊ���棬�԰�֮����������������ɫ�����ԭ�ȵ�λ����ʧ�ˣ��ƺ��԰�֮����ĳ�ַ�ʽ�����Ĺ���һ�������ˡ�\n";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}
	background = "\n\n\t\t\t\t\t\t���⼸����ȫ�������ˡ������ó��������¼������Ĵ��ڣ�������֮���١�\n\n\t\t\t\t\t\tΪ�˽�����ߣ��԰�֮����������������ӡ���⡣\n\n\t\t\t\t\t\t��ν��������ָ�԰�֮���Ͱ�ɫ���˽���������ĺ�������ǳ�������Ԩ���ڲ���������ա�";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}
	background = "��ѡ�е������ǿն���ʿ��\n\t\t\t\t\t\tȻ�����԰�֮���Ͱ�ɫ���˵��жϳ����˲�������������۵㣬������޷����׵ط�ӡ���⡣\n\n\t\t\t\t\t\t�ն���ʿ֮���Գ����۵㣬��������Ϊ�԰�֮����������ʱ�����������";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}

	cout << endl;
	system("pause");
	system("cls");
	cout << endl;
}

//-------------------------------------------------------------------------------------------------------------
void background7()  //BlackEggPalace
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	system("cls");
	if (0 == PlaySound(TEXT("hollowknight.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC)) //��������
	{
		printf("playsound false");
	}
	
	outputTxt("blackeggpalace.txt");

	tab(6); cout << "				        ����ʥ��" << endl;
	string background = "\t\t\t\t\t\tΪ����ֹ�������ӣ��ն���ʿ��ӡ����󣬱���ӡ�������ȥ��һЩ���ӻ����ʥ��������һ��ʱ������ǲ����������ˡ�\n\n\t\t\t\t\t\t�����Ϊ��ӡ�Ĵ��ڣ���ʱ�޷�����������ѡ�ɱ����λ�����ߺ󣬷�ӡ�㱻�ƻ�������Դ˿��š�\n\n\t\t\t\t\t\tȻ�����ն���ʿ�������ж��ˣ����������⣬���������ͷʹ�������۵㡣\n\n\t\t\t\t\t\tҲ����������԰�֮�������飬Ҳ���Ǵ�һ��ʼ�Ͳ��Ǵ��⡣\n\n\t\t\t\t\t\t���գ�����ӡ�˷��⣺���ⱻ��ӡ�������ڣ������ֱ���ӡ�ں���ʥ���ڣ������������ţ����������ܹ���Զ�ط�ӡ��Ⱦ��\n\n\t\t\t\t\t\t��Ϊ���Ѿ����ٴ��⣬���Է������ܼ�������������ɢ�����ߡ�\n\n\t\t\t\t\t\t���գ����߸��գ���������ֻ����һƬ���档ʥ�����Ϲ�����������һ����̫�������Լ���ҡҡ��׹��С�����ˡ�\n\n\t\t\t\t\t\t��ǿ�Ӹ����˵��������������ͽ���޹�\n";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}
	cout << endl;
	system("pause");
	system("cls");
	cout << endl;
}

//------------------------------------------------------------------------------------------------------------
void background0()   //Spring
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("cls");

	if (0 == PlaySound(TEXT("reflection.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC)) //��������
	{
		printf("playsound false");
	}
	tab(6); cout << "				��Ȫ" << endl;
	string background = "\t\t\t\t\t\t�������ڵ�ˮ̶���ֲ���ʥ��������վ�����У�С��ʿ��ָ���꣬Ѫ��Ҳ�Ỻ���ظ���";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}
	cout << endl;
	system("pause");
	system("cls");
	cout << endl;
}
//------------------------------------------------------------------------------------------------------------
void background5()       //CrystaPeak
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	system("cls");
	

	if (0 == PlaySound(TEXT("crystalpeak.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC)) //��������
	{
		printf("playsound false");
	}
	outputTxt("crystalpeak.txt");
	system("pause");
	system("cls");
	tab(6); cout << "				ˮ��ɽ��" << endl;
	string background = "\t\t\t\t\t\t��ʥ����ȫʢʱ�ڣ�ˮ��ɽ���������ĳ��г�����Ӧ��ˮ����\n\n\t\t\t\t\t\t����ʹ�ú�����ڿ��һ����ӿ󹤣����Ǿ�����������������������Ҳ�����������Ƴ�����е��\n\n\t\t\t\t\t\t������Ϯ��������ȥ�ˣ�֮�������Ⱦ���ա�\n\n\t\t\t\t\t\t��Щ�����Ի���ǿ�ҵ�ʹ���У���˼�ʹ������Ҳ���ϵ����ڿ�";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}
	cout << endl;
	system("pause");
	system("cls");
	cout << endl;
}
//--------------------------------------------------------------------------------------------------------------
void background3()       //mantistown
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	system("cls");

	if (0 == PlaySound(TEXT("mantistown.wav"), NULL, SND_FILENAME |  SND_ASYNC)) //��������
	{
		printf("playsound false");
	}
	tab(6); cout << "				����" << endl;
	string background = "\t\t\t\t\t\t��������벿�䣬һȺ�ܹ��ֿ���Ⱦ�����ļ�԰���������ź��ص���ʷ���Ļ���ԴԶ��ʥ����������ǰ��\n\n\t\t\t\t\t\t��ׯ��Χ����ඥ�ϲ���Ұ�޵�ͷ���ĸˣ������������������ߡ�\n\n\t\t\t\t\t\t���ܾ��˲԰�֮�������ļ����������ù�����칹����������أ������߳���";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}
	cout << endl;
	system("pause");
	system("cls");
	cout << endl;
}




void background(int position)
{
	switch (position)
	{
	case 0: background0(); break;    //Spring
	case 1: background1(); break;    //dirtmouth
	case 2: background2(); break;    //crossroads
	case 3: background3(); break;    //mantistown 
	case 4: background4(); break;    //queengarden
	case 5: background5(); break;    //crystalpeak
	case 6: background6(); break;    //palepalace
	case 7: background7(); break;    //blackeggpalace
	}
}






#endif