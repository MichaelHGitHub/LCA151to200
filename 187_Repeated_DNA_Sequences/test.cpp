#include "header.h"

void PrepareTestData(vector<TD_S_VS>& testData)
{
    TD_S_VS data;


    data.input = "A";
    data.output = { };
    testData.push_back(data);

    data.input = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
    data.output = { "AAAAACCCCC","CCCCCAAAAA" };
    testData.push_back(data);

    data.input = "AAAAAAAAAAAAA";
    data.output = { "AAAAAAAAAA" };
    testData.push_back(data);
}