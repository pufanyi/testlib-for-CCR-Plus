// A sample from https://www.luogu.org/wiki/show?name=%E5%B8%AE%E5%8A%A9%EF%BC%9Aspecial%20judge

#include "testlib.h"

int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);

    while(!ans.eof()){
        double pans = ouf.readDouble();
        double jans = ans.readDouble();
        ans.readEoln();

        if (fabs(pans - jans)>0.01)
            quitf(_wa, "The answer is wrong: expected = %f, found = %f", jans, pans);

    }
    quitf(_ok, "The answer is correct.");
    
    //quitp(0.5,"Partially Correct get %d percent", 50);
    return 0;

}
