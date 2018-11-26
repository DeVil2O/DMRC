#include<bits/stdc++.h>
#include <conio.h>
#include<windows.h>
#include<stdio.h>
using namespace std;
int k=0;
int xtra;
struct edge
{
    int v2;
    int time;
    int distance;
};
int gotoxy(int x,int y)
{
    COORD coord = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void delay()
{
    int i;
    for(i=0;i<100000000;i++){}
}
void border2()
{
    int i,j;
    gotoxy(4,3);
    for(i=3;i<115;i++)
    {
        printf("*");
    }
    for(i=4;i<25;i++)
    {
        gotoxy(4,i);
        printf(">");
        for(j=1;j<111;j++)
            printf(" ");
        printf("<");
        printf("\n");
    }
    for(i=4;i<116;i++)
    {
        gotoxy(i,26);
        printf("*");
    }
}
void box1(int x1,int y1,int x2,int y2)
{
   int i;
   for(i=x1;i<=x2;i++)
     {
      gotoxy(i,y1);
      printf("%c",42);
      gotoxy(i,y2);
      printf("%c",42);
     }
   for(i=y1;i<=y2;i++)
     {
      gotoxy(x1,i);
      printf("%c",42);
      gotoxy(x2,i);
      printf("%c",42);
     }
      gotoxy(x1,y1);
      printf("%c",42);
      gotoxy(x1,y2);
      printf("%c",42);
      gotoxy(x2,y1);
      printf("%c",42);
      gotoxy(x2,y2);
      printf("%c",42);
}
void box2(int x1,int y1,int x2,int y2)
{
   int i;
   for(i=x1;i<=x2;i++)
     {
      gotoxy(i,y1);
      cout<<'*';
      gotoxy(i,y2);
      printf("%c",176);
     }
   for(i=y1;i<=y2;i++)
     {
      gotoxy(x1,i);
      printf("%c",176);
      gotoxy(x2,i);
      printf("%c",176);
     }
      gotoxy(x1,y1);
      printf("%c",176);
      gotoxy(x1,y2);
      printf("%c",176);
      gotoxy(x2,y1);
      printf("%c",176);
      gotoxy(x2,y2);
      printf("%c",176);
}
void border1()
{
    system("color a");
    int i,j,k;
    for(i=4;i<115;i++)
    {
        gotoxy(i,3);
        printf("*");
        for(j=0;j<8000000;j++){}
         gotoxy(i,26);
        printf("*");
        for(j=0;j<8000000;j++){}
    }
    for(i=4;i<25;i++)
    {
        gotoxy(4,i);
        printf(">");
        for(j=1;j<111;j++)
            printf(" ");
        printf("<");
        printf("\n");
         for(k=0;k<20000000;k++){}
    }
    gotoxy(22,10);
printf("//        _//_////////_//          _//       _////     _//       _//_////////\n");
gotoxy(22,11);
printf("_//        _//_//      _//       _//   _//  _//    _//  _/ _//   _///_//\n");
gotoxy(22,12);
printf("_//   _/   _//_//      _//      _//       _//        _//_// _// _ _//_//\n");
gotoxy(22,13);
printf("_//  _//   _//_//////  _//      _//       _//        _//_//  _//  _//_//////\n");
gotoxy(22,14);
printf("_// _/ _// _//_//      _//      _//       _//        _//_//   _/  _//_//\n");
gotoxy(22,15);
printf("_/ _/    _////_//      _//       _//   _//  _//     _// _//       _//_//\n");
gotoxy(22,16);
printf("_//        _//_////////_////////   _////      _////     _//       _//_////////\n");

    for(i=0;i<4;i++)
    {
        delay();
    system("color c");
    delay();
    system("color a");
    }
    system("cls");
    border2();
    gotoxy(48,10);
    printf("**********   *******\n");
    gotoxy(48,11);
    printf("/////**///   **/////**\n");
    gotoxy(48,12);
    printf("    /**     **     //**\n");
    gotoxy(48,13);
    printf("    /**    /**      /**\n");
    gotoxy(48,14);
    printf("    /**    /**      /**\n");
    gotoxy(48,15);
    printf("    /**    //**     **\n");
    gotoxy(48,16);
    printf("    /**     //*******\n");
    gotoxy(48,17);
    printf("    //       ///////\n");
    for(i=0;i<4;i++)
    {
        delay();
    system("color c");
    delay();
    system("color a");
    }
    system("cls");
    border2();
    gotoxy(23,10);
    cout<<"8 888888888o.            ,8.       ,8.          8 888888888o.      ,o888888o.    \n";
    gotoxy(23,11);
    cout<<"8 8888    `^888.        ,888.     ,888.         8 8888    `88.    8888     `88.  \n";
    gotoxy(23,12);
    cout<<"8 8888        `88.     .`8888.   .`8888.        8 8888     `88 ,8 8888       `8. \n";
    gotoxy(23,13);
    cout<<"8 8888         `88    ,8.`8888. ,8.`8888.       8 8888     ,88 88 8888           \n";
    gotoxy(23,14);
    cout<<"8 8888          88   ,8'8.`8888,8^8.`8888.      8 8888.   ,88' 88 8888           \n";
    gotoxy(23,15);
    cout<<"8 8888          88  ,8' `8.`8888' `8.`8888.     8 888888888P'  88 8888           \n";
    gotoxy(23,16);
    cout<<"8 8888         ,88 ,8'   `8.`88'   `8.`8888.    8 8888`8b      88 8888           \n";
    gotoxy(23,17);
    cout<<"8 8888        ,88',8'     `8.`'     `8.`8888.   8 8888 `8b.    `8 8888       .8' \n";
    gotoxy(23,18);
    cout<<"8 8888    ,o88P' ,8'       `8        `8.`8888.  8 8888   `8b.     8888     ,88'  \n";
    gotoxy(23,19);
    cout<<"8 888888888P'   ,8'         `         `8.`8888. 8 8888     `88.    `8888888P'    \n";
    for(i=0;i<4;i++)
    {
        delay();
    system("color c");
    delay();
    system("color a");
    }
    system("cls");
}
class station
{
    int traffic;
    public:
    string name;
    int sid;
    string color;
    station()
    {
        ++k;
        sid=k;
        traffic=1000;
        system("cls");
        border2();
        system("color a");
        gotoxy(10,11);
        cout<<"Enter Name of Station "<<sid<<": ";
        box1(55,9,75,13);
        gotoxy(60,11);
        cin>>name;
        gotoxy(10,17);
        cout<<"Enter Color: ";
        box1(55,15,75,19);
        gotoxy(60,17);
        cin>>color;
        gotoxy(10,23);
        cout<<"Enter the whether station is origin or intermediate(0 or 1)  ";
        box1(75,21,95,25);
        gotoxy(80,23);
        cin>>traffic;
    }
    station(ifstream &fname)
    {
        fname>>sid>>name>>color>>traffic;
    }
    void settraffic(int x)
    {
        traffic=x;
    }
    int gettraffic()
    {
        return this->traffic;
    }
};
class network
{
    public:
    int numofstation; //nodes
    int numoftrains; //edges
    vector <station> node;
    vector < vector <struct edge> >  graph;
    network(int n=1)
    {
        int x,y,t;
        numofstation=n;
        numoftrains=0;
        for(x=1;x<=n;x++)
        {
            station temp;
            node.push_back(temp);
        }
        graph.resize(n+1);
        do
        {
            system("cls");
            border2();
            system("color a");
            gotoxy(15,11);
            cout<<"Enter station Id of two station:";
            box1(65,9,72,12);
        gotoxy(70,10);
            cin>>x;
            box1(78,9,85,12);
        gotoxy(82,10);
            cin>>y;
            gotoxy(15,18);
            cout<<"Time between which edge exist:";
            box1(65,16,80,20);
        gotoxy(70,18);
            cin>>t;
            struct edge e1,e2;
            e1.v2=x;
            e1.time=t;
            e2.v2=y;
            e2.time=t;
            graph[x].push_back(e2);
            graph[y].push_back(e1);
            numoftrains+=2;
        }
        while(x>0 or y>0 );
    }
    network(ifstream &fname)
    {
        int n,m;
        fname>>n;
        numofstation=n;
        k=n;
        for(int x=1;x<=n;x++)
        {
            station temp(fname);
            node.push_back(temp);
        }
        fname>>m;
        numoftrains=m;
        graph.resize(n+1);
        for(int x=1;x<=m;x++)
        {
            int u,v,t,d;
            fname>>u>>v>>t>>d;
            struct edge e1,e2;
            e1.v2=v;e1.time=t;e1.distance=d;
            graph[u].push_back(e1);
        }
      //  cout<<"divyanshu"<<node.size()<<endl;
    }
    void addnode()
    {
        ++numofstation;
        int x,t;
        station temp;
        node.push_back(temp);
        system("cls");
        border2();
        system("color a");
        gotoxy(15,11);
        cout<<"Write the station id it connects with time(Ex: 1 5):";
        box1(75,9,80,12);
        gotoxy(78,10);
        cin>>x;
        box1(85,9,90,12);
        gotoxy(88,10);
        cin>>t;
        struct edge t1,t2;
        t2.v2=x;
        t2.time=t;
        t1.v2=numofstation;
        t1.time=t;
        vector <struct edge> newnode;
        newnode.push_back(t2);
        graph[x].push_back(t1);
        graph.push_back(newnode);
        numoftrains+=2;
    }
    void addedge()
    {
        int x,y,t;
        gotoxy(15,11);
        cout<<"Enter the Station Id it connects with time(Ex: 1 2 10):";
        box1(75,9,80,12);
        gotoxy(78,10);
        cin>>x;
        box1(85,9,90,12);
        gotoxy(88,10);
        cin>>y;
        box1(95,9,100,12);
        gotoxy(98,10);
        cin>>t;
        struct edge e1,e2;
        e1.v2=x;e1.time=t;
        e2.v2=y;e2.time=t;
        graph[y].push_back(e1);
        graph[x].push_back(e2);
        numoftrains+=2;
    }
    void shownetwork()
    {
        int i,j,flag1=0,flag=0;
        for(i=0;i<numofstation;i++)
        {
            flag=node[i].gettraffic();
            flag1=0;
        for(j=0;j<graph[i+1].size();j++)
            {
                if(flag!=0)
                {
                    if(flag1==0)
                    {
                     cout<<node[graph[i+1][j].v2 -1].name<<"->"<<node[i].name<<"->";
                     flag1++;
                    }
                    else
                    {
                      cout<<node[graph[i+1][j].v2 -1].name<<"->";
                    }

                }
                else
                {
                 cout<<node[i].name<<"->"<<node[graph[i+1][j].v2 -1].name<<"->\n";
                }
            }
            cout<<endl;
        }
    }
    private:
    int minDistance(int dist[], bool sptSet[])
    {
    // Initialize min value
    int min = 100000, min_index;

    for (int v = 0; v < numofstation; v++)
        if (sptSet[v] == false &&  dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
    }
    int findweight(int u,int v)
    {
        int i,j;
        for(i=0;i<graph[u].size();i++)
        {
            if(graph[u][i].v2==v)
            {
                return graph[u][i].time;
            }
        }
        return 0;
    }
    void printPath(int parent[], int j,int time[])
    {

    if (parent[j] == - 1)
    {
        gotoxy(15,15);
        cout<<"Station Id     Station Name      Station Color    Time\n";
        gotoxy(15,17);
        cout<<j+1;
        gotoxy(35,17);
        cout<<node[j].name;
        gotoxy(55,17);
        cout<<node[j].color;
        gotoxy(65,17);
        cout<<time[j];
        return ;
    }
    printPath(parent, parent[j],time);
            gotoxy(15,19);
             cout<<j+1;
             gotoxy(35,19);
             cout<<node[j].name;
             gotoxy(55,19);
             cout<<node[j].color;
             gotoxy(65,19);
             cout<<time[j];
        for(int i=0;i<999999999;i++){}

    }
    void Path(int parent[], int j,int time[])
    {
      xtra++;

         if (parent[j] == - 1)
           {

            return ;
            }
        Path(parent, parent[j],time);

    }
    int LCSubStr(string X, string Y, int m, int n)
{
    // Create a table to store lengths of longest common suffixes of
    // substrings.   Notethat LCSuff[i][j] contains length of longest
    // common suffix of X[0..i-1] and Y[0..j-1]. The first row and
    // first column entries have no logical meaning, they are used only
    // for simplicity of program
    int LCSuff[m+1][n+1];
    int idx=0;
    int result = 0;  // To store length of the longest common substring
    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;

            else if (X[i-1] == Y[j-1])
            {
                idx+=max(i,j);
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else LCSuff[i][j] = 0;
        }
    }
    return result*idx;
}
    string findmatchingstation(string nme)
    {
        int mxscore=-1,i,j;
        string ans;
        for(i=0;i<numofstation;i++)
        {
            j=LCSubStr(nme,node[i].name,nme.length(),node[i].name.length());
            if(j > mxscore)
            {
                mxscore=j;
                ans=node[i].name;
            }
        }
        return ans;
    }
    public:
    void findroute()
    {
        int i,j,k=0;
        char ch='N';
        string source,destination,temp;int sourceid,destid;
        while(ch!='Y')
        {
            system("cls");
            border2();
            system("color a");
            gotoxy(10,10);
            cout<<"Enter Name of starting station:";
            box1(55,9,75,13);
            gotoxy(60,11);
            cin>>source;
            temp=findmatchingstation(source);
            if(temp==source)
            {
                ch='Y';
            }
            else
            {
                gotoxy(18,15);
                cout<<"Did You mean: '"<<temp<<"'. (Y/N) ";
                box1(55,14,60,16);
                gotoxy(57,15);
                cin>>ch;
                if(ch!='Y'&&ch!='y')
                {
                    ch='N';
                }
                else
                {
                    source=temp;
                }
            }
        }
        ch='N';
        while(ch!='Y')
        {
            gotoxy(18,21);
            cout<<"Enter Name of destination: ";
            box1(55,19,75,22);
            gotoxy(60,21);
            cin>>destination;
            temp=findmatchingstation(destination);
            if(temp==destination)
            {
                ch='Y';
            }
            else
            {
                gotoxy(18,25);
                cout<<"\nDid You mean: '"<<temp<<"'. (Y/N) ";
                box1(55,24,60,26);
                gotoxy(57,25);
                cin>>ch;
                if(ch!='Y')
                {
                    ch='N';
                }
                else
                {
                    destination=temp;
                }
            }
        }
        for(i=0;i<numofstation;i++)
        {
            if(node[i].name==source)
            {
                sourceid=i+1;
            }
            if(node[i].name==destination)
            {
                destid=i+1;
            }
        }
        int time[numofstation];
        bool sptset[numofstation];
        int parent[numofstation];
        parent[sourceid-1]=-1;
        for(i=0;i<numofstation;i++)
        {
            time[i]=100000;
            sptset[i]=false;
        }
        time[sourceid-1]=0;
        for (int count = 0; count < numofstation - 1; count++)
        {
            int u = minDistance(time, sptset);
             // Mark the picked vertex
            // as processed
            sptset[u] = true;
            // Update dist value of the
            // adjacent vertices of the
            // picked vertex.
            for (int v = 0; v < numofstation; v++)
            {
            if (!sptset[v] && findweight(u+1,v+1) && time[u] + findweight(u+1,v+1) < time[v])
            {
                parent[v] = u;
                time[v] = time[u] + findweight(u+1,v+1);
            }
            }

    }
    system("cls");
    border2();
    system("color a");
    gotoxy(10,11);
    cout<<"Minimum Time ="<<time[destid-1]<<endl;
    gotoxy(10,13);
    cout<<"Path to follow:\n";
    printPath(parent,destid-1,time);
    }
    int FindFare(string source , string destination)
    { int sourceid,destid;
        for(int i=0;i<numofstation;i++)
        {
            if(node[i].name==source)
            {
                sourceid=i+1;
            }
            if(node[i].name==destination)
            {
                destid=i+1;
            }
        }
        int time[numofstation];
        bool sptset[numofstation];
        int parent[numofstation];
        parent[sourceid-1]=-1;
        for(int i=0;i<numofstation;i++)
        {
            time[i]=100000;
            sptset[i]=false;
        }
        time[sourceid-1]=0;
        for (int count = 0; count < numofstation - 1; count++)
        {
            int u = minDistance(time, sptset);
             // Mark the picked vertex
            // as processed
            sptset[u] = true;
            // Update dist value of the
            // adjacent vertices of the
            // picked vertex.
            for (int v = 0; v < numofstation; v++)
            {
            if (!sptset[v] && findweight(u+1,v+1) && time[u] + findweight(u+1,v+1) < time[v])
            {
                parent[v] = u;
                time[v] = time[u] + findweight(u+1,v+1);
            }
            }

    }
    xtra=0;
    Path(parent,destid-1,time);
    xtra--;

        int fare=5*xtra;

        return fare;
    }

};
network *dmrc;
void loaddata()
{
    ifstream in;
    in.open("dmrcorp.txt");
    dmrc = new network(in);
    in.close();
}
void savefile()
{
    ofstream out;
    out.open("dmrcorp.txt");
    out<<dmrc->numofstation<<endl;
    for(int x=0;x<dmrc->numofstation;x++)
    {
        out<<dmrc->node[x].sid<<" "<<dmrc->node[x].name<<" "<<dmrc->node[x].color<<" "<<dmrc->node[x].gettraffic()<<endl;
    }
    out<<dmrc->numoftrains<<endl;
    int i,j,k,n=dmrc->numofstation;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<dmrc->graph[i].size();j++)
        {
            out<<i<<" "<<dmrc->graph[i][j].v2<<" "<<(dmrc->graph[i][j]).time<<" "<<(dmrc->graph[i][j]).distance<<endl;
        }
    }
    out.close();
}
void newdata()
{
    int n;
    system("cls");
    system("color a");
    border2();
    gotoxy(15,11);
    cout<<"Enter Number of stations:";
    box1(55,9,65,13);
    gotoxy(60,11);
    cin>>n;
    dmrc=new network(n);
}
void choose()
{
    gotoxy(5,10);
    cout<<" .o88b. db   db  .d88b.   .d88b.  .d8888. d88888b   .o88b.  .d88b.  d8888b. d8888b. d88888b  .o88b. d888888b\n";
    gotoxy(5,11);
    cout<<"d8P  Y8 88   88 .8P  Y8. .8P  Y8. 88'  YP 88'      d8P  Y8 .8P  Y8. 88  `8D 88  `8D 88'     d8P  Y8 `~~88~~'\n";
    gotoxy(5,12);
    cout<<"8P      88ooo88 88    88 88    88 `8bo.   88ooooo  8P      88    88 88oobY' 88oobY' 88ooooo 8P         88\n";
    gotoxy(5,13);
    cout<<"8b      88~~~88 88    88 88    88   `Y8b. 88~~~~~  8b      88    88 88`8b   88`8b   88~~~~~ 8b         88\n";
    gotoxy(5,14);
    cout<<"Y8b  d8 88   88 `8b  d8' `8b  d8' db   8D 88.      Y8b  d8 `8b  d8' 88 `88. 88 `88. 88.     Y8b  d8    88\n";
    gotoxy(5,15);
    cout<<" `Y88P' YP   YP  `Y88P'   `Y88P'  `8888Y' Y88888P   `Y88P'  `Y88P'  88   YD 88   YD Y88888P  `Y88P'    YP\n";
    gotoxy(19,18);

    cout<<" .d88b.  d8888b. d888888b d888888b  .d88b.  d8b   db \n";
    gotoxy(19,19);
    cout<<".8P  Y8. 88  `8D `~~88~~'   `88'   .8P  Y8. 888o  88 \n";
    gotoxy(19,20);
    cout<<"88    88 88oodD'    88       88    88    88 88V8o 88 \n";
    gotoxy(19,21);
    cout<<"88    88 88~~~      88       88    88    88 88 V8o88 \n";
    gotoxy(19,22);
    cout<<"`8b  d8' 88         88      .88.   `8b  d8' 88  V888 \n";
    gotoxy(19,23);
    cout<<" `Y88P'  88         YP    Y888888P  `Y88P'  VP   V8P \n";
    gotoxy(19,24);
     for(int i=0;i<4;i++)
    {
        delay();
    system("color c");
    delay();
    system("color a");
    }
    system("cls");
    border2();
}
void adminview()
{
    int ch1,ch2;
    do
    {
        system("cls");
                border2();
                system("color a");
        gotoxy(39,10);
        cout<<"Press 1 for Loading the last saved data\n";
        gotoxy(39,11);
        cout<<"Press 2 for Opening new File\n";
        gotoxy(39,12);
        cout<<"Press 0 for exit";
        box1(38,15,56,18);
        gotoxy(45,16);
        cin>>ch1;
        switch(ch1)
        {
        case 1:
            loaddata();
            do
            {
                system("cls");
                border2();
                system("color a");
                gotoxy(39,10);
                cout<<"Press 1 for seeing the network\n";
                gotoxy(39,11);
                cout<<"Press 2 for Adding a new Station\n";
                gotoxy(39,12);
                cout<<"Press 3 for Adding a new Train\n";
                gotoxy(39,13);
                cout<<"Press 4 for Saving(This will overwrite existing data)\n";
                gotoxy(39,14);
                cout<<"Press 0 for Exit";
                box1(38,16,56,19);
                gotoxy(45,17);
                cin>>ch2;
                system("cls");
                border2();
                system("color a");
                switch(ch2)
                {
                case 1:
                    dmrc->shownetwork();
                    break;
                case 2:
                    dmrc->addnode();
                    break;
                case 3:
                    dmrc->addedge();
                    break;
                case 4:
                    savefile();
                    break;
                case 0:
                    return;
                default:
                    choose();
                }
            }while(ch2>0);
            break;
        case 2:
            newdata();
            cout<<"Created New Network";
            do
            {
                gotoxy(39,10);
                cout<<"Press 1 for seeing the network\n";
                gotoxy(39,11);
                cout<<"Press 2 for Adding a new Station\n";
                gotoxy(39,12);
                cout<<"Press 3 for Adding a new Train\n";
                gotoxy(39,13);
                cout<<"Press 4 for Saving\nPress 0 for Exit";
                box1(38,16,56,19);
                gotoxy(45,17);
                cin>>ch2;
                switch(ch2)
                {
                case 1:
                    dmrc->shownetwork();
                    break;
                case 2:
                    dmrc->addnode();
                    break;
                case 3:
                    dmrc->addedge();
                    break;
                case 4:
                    savefile();
                    break;
                case 0:
                    break;
                default:
                    choose();
                }
            }while(ch2>0);
            break;

                case 0:
                    break;
                default:
                    choose();
        }
    }while(ch1>0);
}
void userview()
{
    loaddata();
    int ch;
    do
    {
        system("cls");
                border2();
                system("color a");
        gotoxy(39,10);
    cout<<"Press 1 to view Route between 2 Station\n";
    gotoxy(39,11);
    cout<<"Press 2 to Know Fare between 2 station\n";
    gotoxy(39,12);
    cout<<"Press 3 to View Network\n";
    gotoxy(39,13);
    cout<<"Press 0 to Exit\n";
    box1(38,16,56,19);
        gotoxy(45,17);
    cin>>ch;
        switch(ch)
        {
            case 1:
                dmrc->findroute();
                break;
            case 2:
                {
                 string src,des;
                 system("cls");
                border2();
                system("color a");
                gotoxy(10,11);
                cout<<"Enter Source Station:";
                box1(55,9,75,13);
                gotoxy(60,11);
                cin>>src;
                gotoxy(10,16);
                cout<<"Enter Destination:";
                box1(55,14,75,18);
                gotoxy(60,16);
                cin>>des;
                gotoxy(10,22);
                cout<<"Total Fare = "<<dmrc->FindFare(src,des)<<endl;
                for(int i=0;i<999999999;i++){}
                }
                break;
            case 3:
                dmrc->shownetwork();
                for(int i=0;i<9999999999;i++){}
                break;
            case 0:
                break;
            default:
                choose();
        }
    }
    while(ch>0);
}
void load()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        gotoxy(48,15);
        printf("LOADING.");
        delay();
        gotoxy(48,15);
        printf("LOADING..");
        delay();
        gotoxy(48,15);
        printf("LOADING...");
        delay();
    }
}
int main()
{
    int ch=0;
    border1();
    system("color a");
    border2();
    load();
    do
    {
    system("color a");
    border2();
    gotoxy(39,10);
    cout<<"Welcome!\n ";
    gotoxy(39,11);
    cout<<"Press 1 For Admin View\n ";
    gotoxy(39,12);
    cout<<"Press 2 For User View\n ";
    gotoxy(39,13);
    cout<<"Press 0 For Exit\n";
    box1(38,15,56,18);
    gotoxy(45,16);
    cin>>ch;
    switch(ch)
    {
    case 1:
        adminview();
        break;
    case 2:
        userview();
        break;
    case 3:
        return 0;
    default:
        choose();
    }
    }while(ch>0);
    return 0;
}
