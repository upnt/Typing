# include <iostream>
# include "quest.h"

using std::cout;
using std::endl;

int main() {
    auto sentences = getSentence();
    for(auto sentence : sentences)
        cout << sentence << endl;

    return 0;
}
