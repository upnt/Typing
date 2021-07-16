# include "quest.h"

vector<string> getSentence() {
    vector<string> sentences;
    string sentence;

    ifstream ifs("sentence.txt");
    if (!ifs)
        return sentences;

    while(getline(ifs, sentence))
        sentences.push_back(sentence);

    return sentences;
}
