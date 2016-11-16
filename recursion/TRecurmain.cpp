//
//  main.cpp
//  recursion
//
//  Created by Pharrell_WANG on 16/11/2016.
//  Copyright © 2016 Pharrell_WANG. All rights reserved.
//

#include <iostream>

using namespace std;

void recurfunc(int i){
    cout<<"Time is everything + "<<i<<endl;
    i++;
    if(i<10){
        recurfunc(i);
    }
}

int main(int argc, const char * argv[]) {

    int i=0;
    recurfunc(i);
    
    return 0;
}
