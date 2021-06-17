#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

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
int cunt1=0,cunt2=0,cunt3=0,cunt4=0,cunt5=0;

int main()
{
    system("cls");

    printf("\n\n\n");
    printf("\t                 - - - - - - WELCOME TO ONLINE VOTING SYSTEM - - - - - -\n\n");
    sleep(1);
    printf("\t                    - - - ************************************* - - - \n\n\n\n\n");
    sleep(1);
    printf("        \t\t- - - - - Please Enter One(1) For Logging Vote Main Loges - - - - - \n\n\n");
    sleep(1);
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
    printf("       \t\t\t\t1. FOR VOTE ENTRY   - - - - - |||\n");
    sleep(1);
    printf("       \t\t\t\t2. FOR ADMIN PANEL  - - - - - |||\n");
    sleep(1);
    printf("       \t\t\t\t3. FOR WINNER       - - - - - |||\n");
    sleep(1);
    printf("       \t\t\t\t4. FOR EXIT         - - - - - |||\n");
    printf("     \t- - - - - After Voter Entry You Can Give Your Vote Otherwise You Can Not - - - - - \n\n\n");
    sleep(1);
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
    char name[50],birth_date[20],f_name[50],m_name[50],id[20];

    system("cls");
    printf("\n\n\n\n");
    printf("\tIF NATIONAL ID, YOUR NAME, BIRTH DATE, YOUR FATHER NAME AND MOTHER NAME MATCH YOU CAN GIVE VOTE OTHERWISE NOT\n\n");
    sleep(1);
    printf("\t\t\tIF YOU DO WRONG (%d) TIMES, THE PROGRAMME WILL BE STOP AUTOMATICALLY\n\n\n",R);
    sleep(1);
    printf("\t\tPLEASE---,\n");
    sleep(1);
    printf("\t\t\t\tENTER YOUR NATIONAL ID NUMBER  ");
    gets(id);
    gets(id);
    printf("\t\t\t\tENTER YOUR NAME                ");
    gets(name);
    printf("\t\t\t\tENTER YOUR BIRTH DATE          ");
    gets(birth_date);
    printf("\t\t\t\tENTER YOUR FATHER NAME         ");
    gets(f_name);
    printf("\t\t\t\tENTER YOUR MOTHER NAME         ");
    gets(m_name);
    temp=(node *)malloc (sizeof(node));
    strcpy(temp->id,id);
    strcpy(temp->name,name);
    strcpy(temp->birth_date,birth_date);
    strcpy(temp->father_name,f_name);
    strcpy(temp->mother_name,m_name);
    temp->next=NULL;
    head=temp;
    while(temp!=NULL)
    {
        if((strcmp(temp->id,"10000001")==0 && strcmp(temp->name,"Mohidur Rahman")==0 && strcmp (temp->birth_date,"09-05-1950")==0 && strcmp(temp->father_name,"Fajlu")==0 && strcmp(temp->mother_name,"Rahela")== 0)||

        (strcmp(temp->id,"10000002")==0 && strcmp(temp->name,"Md.Siam")==0 && strcmp(temp->birth_date,"09-04-1951")==0 && strcmp(temp->father_name,"manik")==0 && strcmp(temp->mother_name,"Mahmuda")== 0) ||

        (strcmp(temp->id,"10000003")==0 && strcmp(temp->name,"Md.Rashed")==0 && strcmp(temp->birth_date,"09-05-1950")==0 && strcmp(temp->father_name,"asha kumar")==0 && strcmp(temp->mother_name,"rotna")== 0)||

        (strcmp(temp->id,"10000004")==0 && strcmp(temp->name,"Shahoriar Azad")==0 && strcmp(temp->birth_date,"09-05-1949")==0 && strcmp(temp->father_name,"kobir")==0 && strcmp(temp->mother_name,"bilkis")== 0)||

        (strcmp(temp->id,"10000005")==0 && strcmp(temp->name,"Shahin Reza")==0 && strcmp(temp->birth_date,"09-05-1948")==0 && strcmp(temp->father_name,"ashik")==0 && strcmp(temp->mother_name,"shefali khatun")== 0)||

        (strcmp(temp->id,"10000006")==0 && strcmp(temp->name,"Sheikh Lubna")==0 && strcmp(temp->birth_date,"09-05-1947")==0 && strcmp(temp->father_name,"kawser") ==0 && strcmp(temp->mother_name,"anna khatun")== 0))


{
            cunt++;
            if (cunt>1)
            {
                not_again ();
                break;
            }
            voting();
        }
        else
        {
            R--;
            count++;
            if(count == 3)
            {
                stop();
                break;
            }
            printf("\n\n\n\n");
            printf("\t\tYou voter ID or NAME or DATE OF BIRTH or FATHER'S NAME is wrong\n\n");
            sleep(1) ;
            printf("\t\t\t\t\tPlease  Re  Enter\n\n");
            sleep(1);
            system("pause");
            main_loges();
        }
        temp=temp->next;
    }
}

void voting()
{
    system("cls") ;
    printf("\n\n\n\n");
    printf ("\t\t         * * * * * List of the Candidates * * * * *    \n\n\n");
    sleep(1);
    printf("\t\t\t  NAME - - - - - - - - - - - - - - - SYMBOL\n \n");
    sleep(1);
    printf("\t\t\t 1. Sheik Hasina                     1. Boat\n");
    sleep(1);
    printf("\t\t\t 2. Begum Khalada Zia                2. Paddy\n");
    sleep(1);
    printf("\t\t\t 3. Sojib Wozed joy                  3. Jackfruit\n");
    sleep(1);
    printf("\t\t\t 4. Tarek Rahman                     4. Mango\n");
    sleep(1);
    printf("\t\t\t 5. Arshed                           5. Langol\n\n\n");

    int B,j;
    printf("\t\t\t Please--,\n");
    printf("\t\t\t\t   Enter Your Choice    ");
    for (j=1; j<=1; j++)
    {
        scanf("%d",&B);

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
        if(B!=1 && B!=2 && B!=3 && B!=4 && B!=5)
        {
            printf("\t\t\t Your vote is Invalid\n") ;
            main_loges();
        }
    }
    int R;
    system("cls");

    printf("\n\n\n\n");
    printf("\t\t\t If You Want to See Present Winner Enter One (1) OR\n\n\n \t\t\t\tZero(0) for Main Loges\n\n\n");
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
    sleep(1);
    printf("\t\t\t  Sheaik Hasina got      %d votes\n",cunt1);
    sleep(1);
    printf("\t\t\t  Begum Khaleda Zia got  %d votes\n",cunt2);
    sleep(1);
    printf("\t\t\t  sojib Wozed joy got    %d votes\n",cunt3);
    sleep(1);
    printf("\t\t\t  Tarek Rahman got       %d votes\n",cunt4);
    sleep(1);
    printf("\t\t\t  Arshed got             %d votes\n\n\n",cunt5);
    sleep(1);

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
    if(cunt2<cunt1 && cunt3<cunt1 && cunt4<cunt1 && cunt5<cunt1)
        printf("\t\t\tThe present winner person Is Sheaik Hasina and she got %d votes\n\n\n\n",cunt1);

    if(cunt1<cunt2 && cunt3<cunt2 && cunt4<cunt2 && cunt5<cunt2)
        printf("\t\t\tThe present winner person Is Begum Khaleda Zia and she got %d votes\n\n\n\n",cunt2);

    if(cunt1<cunt3 && cunt2<cunt3 && cunt4<cunt3 && cunt5<cunt3)
        printf("\t\t\tThe present winner person Is sojib Wozed joy and she got %d votes\n\n\n\n",cunt3);

    if(cunt1<cunt4 && cunt2<cunt4 && cunt3<cunt4 && cunt5<cunt4)
        printf("\t\t\tThe present winner person Is Tarek Rahman and she got %d votes\n\n\n\n",cunt4);

    if(cunt1<cunt5 && cunt2<cunt5 && cunt3<cunt5 && cunt4<cunt5)
        printf("\t\t\tThe present winner person Is Arshed and she got %d votes\n\n\n\n",cunt5);


int T;
    printf("\t\t\t\t Enter one(1) For Main Loges OR\n\n\t\t\t\tZero(0) for Exit\n");
    scanf("%d",&T);
    if(T==1)
    {
        main_loges();
    }
    if(T!=1)
    {
        exi();
    }
}

void stop()
{
    system("cls");

    printf("\n\n\n");
    printf("\t- - - - - - - (:- SORRY YOU CAN NOT GIVE YOUR VOTE FOR YOUR WRONG ENTRY THREE(3) TIMES -:) - - - - - - -\n\n\n");
    sleep(1);
    printf("\t\t\t* * * * ~~~~~ PLEASE TRY AGAIN AFTER A FEW MOMENT ~~~~~ * * * * *\n\n\n");
    sleep(1);
    printf("\t\t\t\t* * * * ~~~~~ THANK YOU ~~~~~ * * * * *\n\n\n");
    sleep(1);
}

void not_again()
{
    system("cls");

    printf("\n\n\n");
    printf("\t\t- - - - - - - YOU HAVE GIVE YOUR VOTE SUCCESSFULLY - - - - - - -\n\n");
    sleep(1);
    printf("         \t\t- - - - - SO, YOU CAN NOT GIVE VOTE MORE THEN ONE(1) TIME - - - - - \n\n\n");
    sleep(1);
    printf("\t\t\t    If You want To See Present Winner Enter One(1) OR\n\t\t\t\t\tTwo(2) For Main Loges\n");
    sleep(1);
    printf("\t\t\t\t\t\t  Zero(0) For Exit\n\n");
    scanf("%d",&R);
    if(R==1)
    {
        winner();
    }
    if(R==2)
    {
        main_loges();
    }
    if((R!=1) || (R!=2))
    {
        exi();
    }
}

void exi()
{
    system("cls");

    printf("\n\n\n");
    sleep(1);
    printf("\t\t- - - - - - - - - - @ YOU HAVE GIVE YOUR VOTE SUCCESSFULLY @ - - - - - - - - - -\n\n\n");
    sleep(1);
    printf("\t\t\t\t\t* * * * ~~~ THANK YOU ~~~ * * * * *\n\n\n");
    sleep(1);
}
