#include "header.h"
#include <map>

vector<string> findRepeatedDnaSequences_r(string s)
{
    vector<string> results;
    std::map<string, int> occurrense;

    for (int i = 0; i + 10 <= s.length(); i++)
    {
        string sub = s.substr(i, 10);
        if (occurrense[sub] == 1)
        {
            results.push_back(sub);
        }

        occurrense[sub] = occurrense[sub] + 1;
    }

    return results;
}
