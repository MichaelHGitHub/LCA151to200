#include "header.h"

void PrepareTestData(vector<TD_S_S>& testData)
{
    TD_S_S data;

    data.input = "EPY2giL";
    data.output = "EPY2giL";
    testData.push_back(data);

    data.input = "F R  I   E    N     D      S      ";
    data.output = "S D N E I R F";
    testData.push_back(data);

    data.input = "the sky is blue";
    data.output = "blue is sky the";
    testData.push_back(data);

    data.input = "  hello world  ";
    data.output = "world hello";
    testData.push_back(data);

    data.input = "a good   example";
    data.output = "example good a";
    testData.push_back(data);

    data.input = "  Bob    Loves  Alice   ";
    data.output = "Alice Loves Bob";
    testData.push_back(data);

    data.input = "Alice does not even like bob";
    data.output = "bob like even not does Alice";
    testData.push_back(data);

}