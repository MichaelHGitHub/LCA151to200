#include <unordered_map>
#include "header.h"

vector<string> findRepeatedDnaSequences(string s)
{
    vector<string> result;

    if (s.length() < 11)
    {
        return result;
    }

    unordered_map<string, int> occurrance;

    for (int i = 0; i <= s.length() - 10; i++)
    {
        string dna = s.substr(i, 10);

        if (occurrance[dna] == 1)
        {
            result.push_back(dna);
        }

        occurrance[dna] += 1;

    }

    return result;
}