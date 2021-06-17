#include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 #include<windows.h>
 #include<conio.h>
 typedef struct voter_information
 {
 char id[10];
 char name[20];
 char birth_date[15];
 char father_name[20];
 char mother_name[20];
 struct voter_information *next;
 } node;

 node *head;

 int cuntl=0,cunt2=0,count3=0,count4=0,count5=0;

 int main()
 {
 system("cls");
 system("cls");
 printf("\n\n\n");
 printf("\t               ------WELCOME TO ONLINE VOTING SYSTEM-----\n\n");

 printf("\t                 ---..................................---\n\n\n\n\n");
 printf("       \t\t-----please Enter one(1) For LOgging Vote Main Loges-----\n\n\n");
 int B;
 scanf("%d",&B);
 if(B==1)
 {
     main_loges();
 }

 return 0;
 }
 void main_loges()
 {
     system("cls");
     printf("\n\n\n");
     printf("       \t\t\t\t1. FOR VOTE ENTRY   ----- |||\n");
     sleep(300);
     printf("       \t\t\t\t2. FOR ADMIN PANEL  ----- |||\n");
     sleep(300);
     printf("       \t\t\t\t3. FOR WINNER       ----- |||\n");
     sleep(300);
     printf("       \t\t\t\t4. FOR EXIT         ----- |||\n");
     printf("     \t-----After Voter Entry You Can Give Yoyr Vote Otherwise YOu Can Not-----\n\n\n");
     sleep(500);
     printf("     \t- - - - - - - - - - - - -So Please Enter (1)- - - - - - - - - - - - -\n\n\n");
     int T;
     scanf("%d",&T);
     if(T==1)
     {
         voter_insert();
     }
     if(T==2)
     {
         admin();
     }
     if(T==3)
     {
         winner();
     }
     if(T==4)
     {
         exi();
     }

 }

 int cunt=0,count=0,R=3;
 void voter_insert()
 {
     node *temp;

     char name[25],birth_date[15],f_name[25],m_name[25],id[10];
     system("cls");
     printf("\n\n\n\n");
     printf("\tIF NATIONAL ID, YOUR NAME, BIRTH DATE, YOUR FATHER NAME AND MOTHER NAME MATCH YOU CAN GIVE VOTE OTHERWISE NOT\n\n");
     sleep(300);
     printf("\t\t\tIF YOU DO WRONG (%d) TIMES, THE PROGRAMME WILL BE STOP AUTOMATICALLY\n\n\n",R);
     sleep(300);
     printf("\t\tPLEASE---,\n");
     sleep(300);
     printf("\t\t\t\tENTER YOUR NATIONAL ID NUMBER  ");
     gets(id);
     gets(id);
     printf("\t\t\t\tENTER YOUR NAME                ");
     gets(name);
     printf("\t\t\t\tENTER YOUR BIRTH DATE          ");
     gets(birth_date);
     printf("\t\t\t\tENTER YOUR FATHER NAME         ");
     gets(f_name);

}
gets(f_name);

printf("\t\t\t\tENTER YOUR MOTHER NAME      ");
gets(m_name);
temp=(node *) malloc (sizeof(node));
strcpy(temp->id,id);
strcpy(temp->birth_date,birth date);
strcpy(temp->father_name,f_name);
strcpy(temp->mother_name,m_name);
temp->next=NULL;
head=temp!=NULL)
{
if((strcmp(temp->id,"10000001")==0 && strcmp(temp->name,"sheikh Hasina)==0 && strcmp (temp->birth_date,"09-05-1950")==0 && strcmp (temp->father_name,"sheikh mujibur Rahman") ==0 && strcmp(temp->mother_name,"sheikh Fazilantunnessa")== 0)||
if((strcmp(temp->id,"10000002")==0 && strcmp(temp->name,"Roton )==0 && strcmp (temp->birth_date,"09-04-1951")==0 && strcmp (temp->father_name,"manik") ==0 && strcmp(temp->mother_name,"kamona")== 0)||
if((strcmp(temp->id,"10000003")==0 && strcmp(temp->name,"manik)==0 && strcmp (temp->birth_date,"09-05-1950")==0 && strcmp (temp->father_name,"asha kumar") ==0 && strcmp(temp->mother_name,"rotna")== 0)||
if((strcmp(temp->id,"10000004")==0 && strcmp(temp->name,"asha kumar)==0 && strcmp (temp->birth_date,"09-05-1949")==0 && strcmp (temp->father_name,"kobir") ==0 && strcmp(temp->mother_name,"bilkis")== 0)||
if((strcmp(temp->id,"10000005")==0 && strcmp(temp->name,"jannatul mollik)==0 && strcmp (temp->birth_date,"09-05-1948")==0 && strcmp (temp->father_name,"ashik") ==0 && strcmp(temp->mother_name,"shefali khatun")== 0)||
if((strcmp(temp->id,"10000006")==0 && strcmp(temp->name,"ronjon kobir)==0 && strcmp (temp->birth_date,"09-05-1947")==0 && strcmp (temp->father_name,"kawser") ==0 && strcmp(temp->mother_name,"anna khatun")== 0)||
if((strcmp(temp->id,"10000007")==0 && strcmp(temp->name,"hossain ali)==0 && strcmp (temp->birth_date,"09-05-1946")==0 && strcmp (temp->father_name,"shahin") ==0 && strcmp(temp->mother_name,"rina khatun")== 0)||
if((strcmp(temp->id,"10000008")==0 && strcmp(temp->name,"momin shekh)==0 && strcmp (temp->birth_date,"09-05-1945")==0 && strcmp (temp->father_name,"shekh kobir") ==0 && strcmp(temp->mother_name,"shahana khatun")== 0)||
if((strcmp(temp->id,"10000009")==0 && strcmp(temp->name,"ria khatun)==0 && strcmp (temp->birth_date,"09-05-1944")==0 && strcmp (temp->father_name,"roton ") ==0 && strcmp(temp->mother_name,"sajeda khatun")== 0)||
if((strcmp(temp->id,"10000010")==0 && strcmp(temp->name,"tapposhi roy)==0 && strcmp (temp->birth_date,"09-05-1943")==0 && strcmp (temp->father_name,"sohidul islam") ==0 && strcmp(temp->mother_name,"hosneara")== 0)||
if((strcmp(temp->id,"10000011")==0 && strcmp(temp->name,"choity khatun)==0 && strcmp (temp->birth_date,"09-05-1942")==0 && strcmp (temp->father_name,"ashik rahman") ==0 && strcmp(temp->mother_name,"sefa khatun")== 0)||
if((strcmp(temp->id,"10000012")==0 && strcmp(temp->name,"rojibunnahar )==0 && strcmp (temp->birth_date,"09-05-1941")==0 && strcmp (temp->father_name,"reja ") ==0 && strcmp(temp->mother_name,"shoshi begum")== 0)||
if((strcmp(temp->id,"10000013")==0 && strcmp(temp->name,"shefa khatun)==0 && strcmp (temp->birth_date,"09-05-1940")==0 && strcmp (temp->father_name,"shoykot") ==0 && strcmp(temp->mother_name,"suratonnessa")== 0)||
if((strcmp(temp->id,"10000014")==0 && strcmp(temp->name,"anika khatun)==0 && strcmp (temp->birth_date,"09-05-1939")==0 && strcmp (temp->father_name,"sagor ") ==0 && strcmp(temp->mother_name,"Fatema khatun")== 0)||
if((strcmp(temp->id,"10000015")==0 && strcmp(temp->name,"kobir hossen)==0 && strcmp (temp->birth_date,"09-05-1938")==0 && strcmp (temp->father_name,"talukdar") ==0 && strcmp(temp->mother_name,"meherunnessa")== 0)||
if((strcmp(temp->id,"10000016")==0 && strcmp(temp->name,"shahin reja)==0 && strcmp (temp->birth_date,"09-05-1937")==0 && strcmp (temp->father_name,"shofiqul islam") ==0 && strcmp(temp->mother_name,"jakia sultana")== 0)||
if((strcmp(temp->id,"10000017")==0 && strcmp(temp->name,"shahoria azad)==0 && strcmp (temp->birth_date,"09-05-1936")==0 && strcmp (temp->father_name,"manik ") ==0 && strcmp(temp->mother_name,"Forida khatin")== 0)||
if((strcmp(temp->id,"10000018")==0 && strcmp(temp->name,"sabbir hossain)==0 && strcmp (temp->birth_date,"09-05-1935")==0 && strcmp (temp->father_name,"shawn ") ==0 && strcmp(temp->mother_name,"rotna khatun")== 0)||
if((strcmp(temp->id,"10000019")==0 && strcmp(temp->name,"towfiqur rahman)==0 && strcmp (temp->birth_date,"09-04-1950")==0 && strcmp (temp->father_name,"akash") ==0 && strcmp(temp->mother_name,"nargis bewya")== 0)||
if((strcmp(temp->id,"10000020")==0 && strcmp(temp->name,"likhon)==0 && strcmp (temp->birth_date,"09-05-1951")==0 && strcmp (temp->father_name,"tuhin") ==0 && strcmp(temp->mother_name,"henri talukdar")== 0)||
if((strcmp(temp->id,"10000021")==0 && strcmp(temp->name,"talukdar)==0 && strcmp (temp->birth_date,"09-05-1952")==0 && strcmp (temp->father_name,"omar faruk") ==0 && strcmp(temp->mother_name,"kamona ")== 0)||
if((strcmp(temp->id,"10000022")==0 && strcmp(temp->name,"mekdad )==0 && strcmp (temp->birth_date,"09-05-1953")==0 && strcmp (temp->father_name,"mirja ") ==0 && strcmp(temp->mother_name,"mahfuja khatun")== 0)||
if((strcmp(temp->id,"10000023")==0 && strcmp(temp->name,"shanto )==0 && strcmp (temp->birth_date,"09-05-1954")==0 && strcmp (temp->father_name,"kawser") ==0 && strcmp(temp->mother_name,"joli khatun ")== 0)||
if((strcmp(temp->id,"10000024")==0 && strcmp(temp->name,"rotna)==0 && strcmp (temp->birth_date,"09-05-1955")==0 && strcmp (temp->father_name,"shariar ") ==0 && strcmp(temp->mother_name,"aspia khatun")== 0)||
if((strcmp(temp->id,"10000025")==0 && strcmp(temp->name,"shihab)==0 && strcmp (temp->birth_date,"09-05-1956")==0 && strcmp (temp->father_name,"mukul hossen") ==0 && strcmp(temp->mother_name,"beauti khatun")== 0)||
if((strcmp(temp->id,"10000026")==0 && strcmp(temp->name,"kawser)==0 && strcmp (temp->birth_date,"09-05-1957")==0 && strcmp (temp->father_name,"shanto") ==0 && strcmp(temp->mother_name,"lily begum")== 0)||
if((strcmp(temp->id,"10000027")==0 && strcmp(temp->name,"pollob)==0 && strcmp (temp->birth_date,"09-05-1958")==0 && strcmp (temp->father_name,"polash") ==0 && strcmp(temp->mother_name,"tahmina khatun")== 0)||
if((strcmp(temp->id,"10000028")==0 && strcmp(temp->name,"siam hossen)==0 && strcmp (temp->birth_date,"09-05-1959")==0 && strcmp (temp->father_name,"likhon") ==0 && strcmp(temp->mother_name,"ripa khatun")== 0)||
if((strcmp(temp->id,"10000029")==0 && strcmp(temp->name,"sojol mia)==0 && strcmp (temp->birth_date,"09-05-1960")==0 && strcmp (temp->father_name,"reja") ==0 && strcmp(temp->mother_name,"Ferdossi khatun")== 0)||
if((strcmp(temp->id,"10000030")==0 && strcmp(temp->name,"hijol mia)==0 && strcmp (temp->birth_date,"09-05-1961")==0 && strcmp (temp->father_name,"shihab") ==0 && strcmp(temp->mother_name,"amina khatun")== 0)||
if((strcmp(temp->id,"10000031")==0 && strcmp(temp->name,"abdul bari)==0 && strcmp (temp->birth_date,"09-05-1962")==0 && strcmp (temp->father_name,"shoykot") ==0 && strcmp(temp->mother_name,"Fatema khatun")== 0)||
if((strcmp(temp->id,"10000032")==0 && strcmp(temp->name,"hasan ali)==0 && strcmp (temp->birth_date,"09-05-1963")==0 && strcmp (temp->father_name,"pollob") ==0 && strcmp(temp->mother_name,"joli khatun")== 0)||
if((strcmp(temp->id,"10000033")==0 && strcmp(temp->name,"likhon mia)==0 && strcmp (temp->birth_date,"09-05-1964")==0 && strcmp (temp->father_name,"sultan") ==0 && strcmp(temp->mother_name,"bilkis khatun")== 0)||
if((strcmp(temp->id,"10000034")==0 && strcmp(temp->name,"tarek rahman)==0 && strcmp (temp->birth_date,"09-05-1965")==0 && strcmp (temp->father_name,"shimul") ==0 && strcmp(temp->mother_name,"rowshonara khatun")== 0)||
if((strcmp(temp->id,"10000035")==0 && strcmp(temp->name,"khalid sarkar)==0 && strcmp (temp->birth_date,"09-05-1966")==0 && strcmp (temp->father_name,"nehal") ==0 && strcmp(temp->mother_name,"bilkiss khatun")== 0)||
if((strcmp(temp->id,"10000036")==0 && strcmp(temp->name,"abdul moin)==0 && strcmp (temp->birth_date,"09-05-1967")==0 && strcmp (temp->father_name,"sibbir") ==0 && strcmp(temp->mother_name,"polashi khatun")== 0)||
if((strcmp(temp->id,"10000037")==0 && strcmp(temp->name,"porag)==0 && strcmp (temp->birth_date,"09-05-1968")==0 && strcmp (temp->father_name,"labu ") ==0 && strcmp(temp->mother_name,"khadiza khatun")== 0)||
if((strcmp(temp->id,"10000038")==0 && strcmp(temp->name,"mohidur)==0 && strcmp (temp->birth_date,"09-05-1969")==0 && strcmp (temp->father_name,"delloer") ==0 && strcmp(temp->mother_name,"asha khatun")== 0)||
if((strcmp(temp->id,"10000039")==0 && strcmp(temp->name,"rahman)==0 && strcmp (temp->birth_date,"09-05-1970")==0 && strcmp (temp->father_name,"shydi") ==0 && strcmp(temp->mother_name,"Arin khatun")== 0)||
if((strcmp(temp->id,"10000040")==0 && strcmp(temp->name,"based)==0 && strcmp (temp->birth_date,"09-05-1971")==0 && strcmp (temp->father_name,"mamun") ==0 && strcmp(temp->mother_name,"Rina khatun")== 0)||
if((strcmp(temp->id,"10000041")==0 && strcmp(temp->name,"hellal)==0 && strcmp (temp->birth_date,"09-05-1972")==0 && strcmp (temp->father_name,"kader") ==0 && strcmp(temp->mother_name,"sabina khatun")== 0)||
if((strcmp(temp->id,"10000042")==0 && strcmp(temp->name,"shohel rana)==0 && strcmp (temp->birth_date,"09-05-1973")==0 && strcmp (temp->father_name,"sojol") ==0 && strcmp(temp->mother_name,"bilkiss khatun")== 0)||
if((strcmp(temp->id,"10000043")==0 && strcmp(temp->name,"kuddus mondal)==0 && strcmp (temp->birth_date,"09-05-1974")==0 && strcmp (temp->father_name,"hijol") ==0 && strcmp(temp->mother_name,"rotna khatun")== 0)||
if((strcmp(temp->id,"10000044")==0 && strcmp(temp->name,"rosul boksho)==0 && strcmp (temp->birth_date,"09-05-1975")==0 && strcmp (temp->father_name,"somrat") ==0 && strcmp(temp->mother_name,"julekha khatun")== 0)||
if((strcmp(temp->id,"10000045")==0 && strcmp(temp->name,"akbar ali)==0 && strcmp (temp->birth_date,"09-05-1976")==0 && strcmp (temp->father_name,"esshan") ==0 && strcmp(temp->mother_name,"pakhi khatun")== 0)||
if((strcmp(temp->id,"10000046")==0 && strcmp(temp->name,"alom mia)==0 && strcmp (temp->birth_date,"09-05-1977")==0 && strcmp (temp->father_name,"rohmot") ==0 && strcmp(temp->mother_name,"anna khatun")== 0)||
if((strcmp(temp->id,"10000047")==0 && strcmp(temp->name,"alhaz mondal)==0 && strcmp (temp->birth_date,"09-05-1978")==0 && strcmp (temp->father_name,"momin") ==0 && strcmp(temp->mother_name,"ferdosshi khatun")== 0)||
if((strcmp(temp->id,"10000048")==0 && strcmp(temp->name,"shofiqul islam)==0 && strcmp (temp->birth_date,"09-05-1979")==0 && strcmp (temp->father_name,"kafi ") ==0 && strcmp(temp->mother_name,"ripa khatun")== 0)||
if((strcmp(temp->id,"10000049")==0 && strcmp(temp->name,"rofiqul islam)==0 && strcmp (temp->birth_date,"09-05-1980")==0 && strcmp (temp->father_name,"sajjad") ==0 && strcmp(temp->mother_name,"laboni khatun")== 0)||
if((strcmp(temp->id,"10000050")==0 && strcmp(temp->name,"nuru mondal)==0 && strcmp (temp->birth_date,"09-05-1981")==0 && strcmp (temp->father_name,"sabbir") ==0 && strcmp(temp->mother_name,"shapla khatun")== 0)||
if((strcmp(temp->id,"10000051")==0 && strcmp(temp->name,"forid mia)==0 && strcmp (temp->birth_date,"09-05-1982")==0 && strcmp (temp->father_name,"kawser") ==0 && strcmp(temp->mother_name,"baby khatun")== 0)||
if((strcmp(temp->id,"10000052")==0 && strcmp(temp->name,"khalilur rahman)==0 && strcmp (temp->birth_date,"09-05-1983")==0 && strcmp (temp->father_name,"shahin") ==0 && strcmp(temp->mother_name,"maya khatun")== 0)||
if((strcmp(temp->id,"10000053")==0 && strcmp(temp->name,"bellal hossen)==0 && strcmp (temp->birth_date,"09-05-1984")==0 && strcmp (temp->father_name,"reja") ==0 && strcmp(temp->mother_name,"bithi khatun")== 0)||
if((strcmp(temp->id,"10000054")==0 && strcmp(temp->name,"tomser ali)==0 && strcmp (temp->birth_date,"09-05-1985")==0 && strcmp (temp->father_name,"sagor") ==0 && strcmp(temp->mother_name,"maju begum")== 0)||
if((strcmp(temp->id,"10000055")==0 && strcmp(temp->name,"rubel sarkar)==0 && strcmp (temp->birth_date,"09-05-1986")==0 && strcmp (temp->father_name,"ashik") ==0 && strcmp(temp->mother_name,"majeda khatun")== 0)||
if((strcmp(temp->id,"10000056")==0 && strcmp(temp->name,"kafi sarkar)==0 && strcmp (temp->birth_date,"09-05-1950")==0 && strcmp (temp->father_name,"talukdar") ==0 && strcmp(temp->mother_name,"shefali khatun")== 0)||
if((strcmp(temp->id,"10000057")==0 && strcmp(temp->name,"naimur rahman)==0 && strcmp (temp->birth_date,"09-05-1987")==0 && strcmp (temp->father_name,"mekdad") ==0 && strcmp(temp->mother_name,"rina khatun")== 0)||
if((strcmp(temp->id,"10000058")==0 && strcmp(temp->name,"bishal sarkar)==0 && strcmp (temp->birth_date,"09-05-1952")==0 && strcmp (temp->father_name,"sojib") ==0 && strcmp(temp->mother_name,"rotna khatun")== 0)||
if((strcmp(temp->id,"10000059")==0 && strcmp(temp->name,"sattar talukdar)==0 && strcmp (temp->birth_date,"09-05-1953")==0 && strcmp (temp->father_name,"merajul") ==0 && strcmp(temp->mother_name,"Feroja khatun")== 0)||
if((strcmp(temp->id,"10000060")==0 && strcmp(temp->name,"charaboni )==0 && strcmp (temp->birth_date,"09-05-1954")==0 && strcmp (temp->father_name,"rubel") ==0 && strcmp(temp->mother_name,"anika khatun")== 0)||
if((strcmp(temp->id,"10000061")==0 && strcmp(temp->name,"akash saha)==0 && strcmp (temp->birth_date,"09-05-1955")==0 && strcmp (temp->father_name,"abdul momin") ==0 && strcmp(temp->mother_name,"rowshonara khatun")== 0)||
if((strcmp(temp->id,"10000062")==0 && strcmp(temp->name,"nurnobi)==0 && strcmp (temp->birth_date,"09-05-1956")==0 && strcmp (temp->father_name,"aslam") ==0 && strcmp(temp->mother_name,"beauti khatun")== 0)||
if((strcmp(temp->id,"10000063")==0 && strcmp(temp->name,"kasem ali)==0 && strcmp (temp->birth_date,"09-05-1957")==0 && strcmp (temp->father_name,"rasel sarkar") ==0 && strcmp(temp->mother_name,"laily khatun")== 0)||
if((strcmp(temp->id,"10000064")==0 && strcmp(temp->name,"obaidul kader)==0 && strcmp (temp->birth_date,"09-05-1958")==0 && strcmp (temp->father_name,"toha") ==0 && strcmp(temp->mother_name,"ripa khatun")== 0)||
if((strcmp(temp->id,"10000065")==0 && strcmp(temp->name,"siraj ali)==0 && strcmp (temp->birth_date,"09-05-1959")==0 && strcmp (temp->father_name,"siam hossen") ==0 && strcmp(temp->mother_name,"fatema khatun")== 0)||
if((strcmp(temp->id,"10000066")==0 && strcmp(temp->name,"abul kalam)==0 && strcmp (temp->birth_date,"09-05-1960")==0 && strcmp (temp->father_name,"based ") ==0 && strcmp(temp->mother_name,"momena khatun")== 0)||
if((strcmp(temp->id,"10000067")==0 && strcmp(temp->name,"ikball )==0 && strcmp (temp->birth_date,"09-05-1961")==0 && strcmp (temp->father_name,"hellal") ==0 && strcmp(temp->mother_name,"shahena khatun")== 0)||
if((strcmp(temp->id,"10000068")==0 && strcmp(temp->name,"reja)==0 && strcmp (temp->birth_date,"09-05-1962")==0 && strcmp (temp->father_name,"noyon") ==0 && strcmp(temp->mother_name,"bijly khatun")== 0)||
if((strcmp(temp->id,"10000069")==0 && strcmp(temp->name,"shykot)==0 && strcmp (temp->birth_date,"09-05-1963")==0 && strcmp (temp->father_name,"rabbi") ==0 && strcmp(temp->mother_name,"kolpona khatun")== 0)||
if((strcmp(temp->id,"10000070")==0 && strcmp(temp->name,"rashedul)==0 && strcmp (temp->birth_date,"09-05-1964")==0 && strcmp (temp->father_name,"sajjad") ==0 && strcmp(temp->mother_name,"rina khatun")== 0)||
if((strcmp(temp->id,"10000071")==0 && strcmp(temp->name,"noyon mia)==0 && strcmp (temp->birth_date,"09-05-1965")==0 && strcmp (temp->father_name,"sabbir") ==0 && strcmp(temp->mother_name,"Forida khatun")== 0)||
if((strcmp(temp->id,"10000072")==0 && strcmp(temp->name,"rabbi mondal)==0 && strcmp (temp->birth_date,"09-05-1966")==0 && strcmp (temp->father_name,"likhon") ==0 && strcmp(temp->mother_name,"Fatema khatun")== 0)||
if((strcmp(temp->id,"10000073")==0 && strcmp(temp->name,"nurhossen mondal)==0 && strcmp (temp->birth_date,"09-05-1967")==0 && strcmp (temp->father_name,"shahin") ==0 && strcmp(temp->mother_name,"Nurunnahar khatun")== 0)||
if((strcmp(temp->id,"10000074")==0 && strcmp(temp->name,"shorif mondal)==0 && strcmp (temp->birth_date,"09-05-1950")==0 && strcmp (temp->father_name,"porag") ==0 && strcmp(temp->mother_name,"Rotna khatun")== 0)||
if((strcmp(temp->id,"10000075")==0 && strcmp(temp->name,"ashik)==0 && strcmp (temp->birth_date,"09-05-1951")==0 && strcmp (temp->father_name,"mohidur") ==0 && strcmp(temp->mother_name,"fatema khatun")== 0)||
if((strcmp(temp->id,"10000076")==0 && strcmp(temp->name,"milon)==0 && strcmp (temp->birth_date,"09-05-1952")==0 && strcmp (temp->father_name,"rasheed") ==0 && strcmp(temp->mother_name,"momena khatun")== 0)||
if((strcmp(temp->id,"10000077")==0 && strcmp(temp->name,"shawn )==0 && strcmp (temp->birth_date,"09-05-1953")==0 && strcmp (temp->father_name,"bulbul") ==0 && strcmp(temp->mother_name,"jolly khatun")== 0)||
if((strcmp(temp->id,"10000078")==0 && strcmp(temp->name,"romij )==0 && strcmp (temp->birth_date,"09-05-1954")==0 && strcmp (temp->father_name,"rana") ==0 && strcmp(temp->mother_name,"nargis khatun")== 0)||
if((strcmp(temp->id,"10000079")==0 && strcmp(temp->name,"fojlul haque)==0 && strcmp (temp->birth_date,"09-05-1955")==0 && strcmp (temp->father_name,"sheikh") ==0 && strcmp(temp->mother_name,"beauti khatun")== 0)||
if((strcmp(temp->id,"10000080")==0 && strcmp(temp->name,"liton dewan)==0 && strcmp (temp->birth_date,"09-05-1956")==0 && strcmp (temp->father_name,"fojlur rahman") ==0 && strcmp(temp->mother_name,"shahena khatun")== 0)||
if((strcmp(temp->id,"10000081")==0 && strcmp(temp->name,"bulbul )==0 && strcmp (temp->birth_date,"09-05-1957")==0 && strcmp (temp->father_name,"nasim sarkar") ==0 && strcmp(temp->mother_name,"shajeda khatun")== 0)||
if((strcmp(temp->id,"10000082")==0 && strcmp(temp->name,"khalid )==0 && strcmp (temp->birth_date,"09-05-1958")==0 && strcmp (temp->father_name,"reja") ==0 && strcmp(temp->mother_name,"Rina khatun")== 0)||
if((strcmp(temp->id,"10000083")==0 && strcmp(temp->name,"barik)==0 && strcmp (temp->birth_date,"09-05-1959")==0 && strcmp (temp->father_name,"moydan") ==0 && strcmp(temp->mother_name,"Ripa khatun")== 0)||
if((strcmp(temp->id,"10000084")==0 && strcmp(temp->name,"mir hossen)==0 && strcmp (temp->birth_date,"09-05-1960")==0 && strcmp (temp->father_name,"manik") ==0 && strcmp(temp->mother_name,"Parul khatun")== 0)||
if((strcmp(temp->id,"10000085")==0 && strcmp(temp->name,"talukdar)==0 && strcmp (temp->birth_date,"09-05-1961")==0 && strcmp (temp->father_name,"roton") ==0 && strcmp(temp->mother_name,"Ferdosshi khatun")== 0)||
if((strcmp(temp->id,"10000086")==0 && strcmp(temp->name,"tonmoy )==0 && strcmp (temp->birth_date,"09-05-1962")==0 && strcmp (temp->father_name,"abdullah") ==0 && strcmp(temp->mother_name,"Fatema khatun")== 0)||
if((strcmp(temp->id,"10000087")==0 && strcmp(temp->name,"rasel )==0 && strcmp (temp->birth_date,"09-05-1963")==0 && strcmp (temp->father_name,"mojib") ==0 && strcmp(temp->mother_name,"shilpi khatun")== 0)||
if((strcmp(temp->id,"10000088")==0 && strcmp(temp->name,"khader)==0 && strcmp (temp->birth_date,"09-05-1964")==0 && strcmp (temp->father_name,"shawn") ==0 && strcmp(temp->mother_name,"kolpona khatun")== 0)||
(strcmp (temp->id, "10000045") ==0  &&  strcmp (temp->name, "Mrs. Mou") ==0  &&  strcmp (temp->birth_date, "17-10-1972") ==0  &&  strcmp

            (strcmp (temp->id, "10000046") ==0  &&  strcmp (temp->name, "Md. Sajal") ==0  &&  strcmp (temp->birth_date, "21-11-1983") ==0  &&  strcmp

            (strcmp (temp->id, "10000047") ==0  &&  strcmp (temp->name, "Md. Borhan") ==0  &&  strcmp (temp->birth_date, "11-11-1992") ==0  &&  strcmp

            (strcmp (temp->id, "10000048") ==0  &&  strcmp (temp->name, "Md. Rahad") ==0  &&  strcmp (temp->birth_date, "10-03-1995") ==0  &&  strcmp

            (strcmp (temp->id, "10000049") ==0  &&  strcmp (temp->name, "Md. Sorif") ==0  &&  strcmp (temp->birth_date, "31-12-1986") ==0  &&  strcmp

            (strcmp (temp->id, "10000050") ==0  &&  strcmp (temp->name, "Md. Nayon") ==0  &&  strcmp (temp->birth_date, "17-01-1993") ==0  &&  strcmp

             {

                    cunt++;
                    if (cunt>1)
                    {
                            not_again () ;
                            break;
                    }
                    voting () ;
             }

             else
             {
                    R==;
                    count++;
                    if (count  ==  3)
                    {
                            stop () ;
                            break;
                    }
                    printf ("\n \n \n \n") ;
                    printf ("\t \tYou  voter  ID  or  NAME  or  DATE  OF  BIRTH  or  FATHER'S  NAME  is  wrong\n \n") ;
                    Sleep (300) ;
                    printf ("\t \t \t \t \tPlease  Re  Enter\n\n") ;
                    Sleep (300) ;
                    system ("pause") ;
                    main_loges () ;
             }
             temp=temp->next;
        }

    }



    void voting ()
    {
            system ("cls") ;
            printf ("\n \n \n \n") ;
            printf ("\t \t                  *  *  *  *  *   List  of  the  Candidates   *  *  *  *  *       \n \n \n") ;
            Sleep (300) ;
            printf ("\t \t \t  NAME - - - - - - - - - - - - - - - SYMBOL\n \n") ;
            Sleep (300) ;
            printf ("\t \t \t  1 .  Sheik Hasina                        1.     Boat\n") ;
            Sleep (300) ;
            printf ("\t \t \t  2 .  Begum Khalada Zia              2.     Paddy\n") ;
            Sleep (300) ;
            printf ("\t \t \t  3 .  Sojib Wozed joy                  3.     Jackfruit\n") ;
            Sleep (300) ;
            printf ("\t \t \t  4 .  Tarek Rahman                     4.      Mango\n") ;
            Sleep (300) ;
            printf ("\t \t \t  5 .  Arshed                                5.      Langol\n \n \n") ;


            int B, j ;
            printf ("\t \t \t  Please--, \n") ;
            printf ("\t \t \t        Enter Your Chooce         ") ;
            for (j=1; j<=1; j++)
            {
                    scanf ("%d", &B) ;

                    if (B==1)
                    {
                            cunt1++;
                    }
                    if (B==2)
                    {
                            cunt2++;
                    }
                    if (B==3)
                    {
                            cunt3++;
                    }
                    if (B==4)
                    {
                            cunt4++;
                    }
                    if (B==5)
                    {
                            cunt5++;
                    }
                    if (B!=1  &&  B!=2  &&  B!=3  && B!=4  &&  B!=5)
                    {
                            printf ("\t \t \t   Your  vote  is  Invalid\n") ;
                            main_loges () ;
                    }
            }
    }
    int R;
syestem("cls");

printf("\n\n\n\n");
printf("\t\t\t If you want to see present winner enter one (1) OR\n\n\n \t\t\t\tZero(0) for Main loges\n\n\n");
scanf("%d",&R);
if(R==1)
{
    winner();
}
if(R!=1)
{
    main_loges();
}

}


void admin()
{
    int B;
    printf("\n\n\n\n");
    printf("\t\t\tEnter Password To Unlock Admin Panel\n\n");
    scanf("%d",&B);
    if(B==10715)
    {
        show();
    }
    else
    {
        printf("Wrong Password");
    }
}

void show()
{
    system("cls");

    printf("\n\n\n");
    printf("\t\t\t  How Many votes Who Get\n\n\n");
    Sleep(500);
    printf("\t\t\t  Sheaik Hasina got   %d votes\n",cunt1);
    Sleep(500);
     printf("\t\t\t  Begum Khaleda Zia got   %d votes\n",cunt2);
    Sleep(500);
     printf("\t\t\t  sojib Wozed joy got   %d votes\n",cunt3);
    Sleep(500);
     printf("\t\t\t  Tarek Rahman got   %d votes\n",cunt4);
    Sleep(500);
     printf("\t\t\t  Arshed got   %d votes\n",cunt5);
    Sleep(500);

    int R;
    printf("\t\t\t Enter one(1) For Main Loges OR\n\n\n \t\t\t\tZero(0) for Exit\n");
    scanf("%d",&R);
    if(R==1)
    {
        main_loges();
    }
    else
    {
        exi();
    }


}


void winner()
{
    system("cls");

    printf("\n\n\n\n");
    if(cunt2<count1 && cunt3<cunt1 && cunt4<cunt1) && cunt5<cunt1)
    printf("\t\t\tThe present winner person Is Sheaik Hasina and she got %d votes\n\n\n\n",cunt1);

    if(cunt1<count2 && cunt3<cunt2 && cunt4<cunt2) && cunt5<cunt2)
    printf("\t\t\tThe present winner person Is Begum Khaleda Zia and she got %d votes\n\n\n\n",cunt2);

    if(cunt1<count3 && cunt2<cunt3 && cunt4<cunt3) && cunt5<cunt3)
    printf("\t\t\tThe present winner person Is sojib Wozed joy and she got %d votes\n\n\n\n",cunt3);

    if(cunt1<count4 && cunt2<cunt4 && cunt3<cunt4) && cunt5<cunt4)
    printf("\t\t\tThe present winner person Is Tarek Rahman and she got %d votes\n\n\n\n",cunt4);

    if(cunt1<count5 && cunt2<cunt5 && cunt3<cunt5) && cunt4<cunt5)
    printf("\t\t\tThe present winner person Is Arshed and she got %d votes\n\n\n\n",cunt5);

    int T;
    printf("\t\t\t\t Enter one(1) For Main Loges OR\n\n\t\t\t\tZero(0) for Exit\n");
    scanf("%d",&T);
    if(T==1)
        {
        main_loges();
    }
      if(T==1)
    {
        exi();
    }

    }
