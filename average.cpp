#include <iostream>
using namespace std;

int main(int argc,char *argv[]){
    if(argc == 1){
        cout << "Please input numbers to find average.";
    }else {
        double aver=0;
        for(int i=1;i<argc;i++){
            aver+= atof(argv[i]);
        }
        aver = aver/(argc-1);
        cout << "---------------------------------\n";
        cout << "Average of " << argc-1 << " numbers = " << aver; 
        cout << "\n---------------------------------\n";

    }
    return 0;
}
