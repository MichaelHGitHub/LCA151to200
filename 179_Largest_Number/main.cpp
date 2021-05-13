#include "header.h"

int main(char* args[], int argc)
{
    vector<TD_VI_S> test_data;

    PrepareTestData(test_data);

    for (int i = 0; i < test_data.size(); i++)
    {
        PrintInput(test_data[i]);
        string result = largestNumber2(test_data[i].input);

        CheckResults(test_data[i], result);
    }

    return 0;
}