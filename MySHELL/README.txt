Grup Elemanlari :   Abdul Qadir Faizy   - b161210553-2A
                    Kenan Allakhverdiev - g151210557-1B
                    Bahramullah Arayan  - g161210553-2A
                    Bakhruz Valiev      - g151210555-1C
                    Yalçın Mete         - g141210403-2A

Açıklama :  
                    Yazdığımız Proje Ödevinde Kullandığımız :

                                                                Başlıklar -             #include<stdio.h> 
                                                                                        #include<string.h> 
                                                                                        #include<stdlib.h> 
                                                                                        #include<unistd.h> 
                                                                                        #include<sys/types.h> 
                                                                                        #include<sys/wait.h> 
                                                                                        #include<readline/readline.h> 
                                                                                        #include<readline/history.h>
                                                                                        #include <signal.h>


                                                                Fonksiyonlar -          void init_shell();//TURKISH KABUK
                                                                                        void openHelp();//yardim
                                                                                        int ownCmdHandler(char**);//komutlar
                                                                                        int takeInput(char*[]);// giris alma
                                                                                        int getSize(char*);//uzunlukBulma
                                                                                        int parsePipe(char*, char**);// '|'(pipe) ayirma
                                                                                        void parseSpace(char*, char**); // bosluklara ayirma
                                                                                        int parseAND(char*);// '&'(arkaplan is) ayirma
                                                                                        int processString(char* str, char**, char*[MAXLIST][MAXLIST],int *,int *);//proses string
                                                                                        void execArgs(char**,int); // pipe`siz proses
                                                                                        void execArgsPiped(char**, char*[MAXLIST][MAXLIST],int,int); //pipe`li
                                                                                        static void quality(int, siginfo_t*, void*);
                                                                                        void init_BackProcessDoned();
                                                                                        void printDir();// konum,yol 
                                                                                        İçeriklerini ".c" uzantılı dosyalarımızda göre bilirsiniz.


______"yardım" komutu ile yardım ala bilirsiniz.
______"SELAM" komutu ile kabukla görüşe bilirsiniz.
______"quit" komutu ile çıkış yapabilirsiniz.
