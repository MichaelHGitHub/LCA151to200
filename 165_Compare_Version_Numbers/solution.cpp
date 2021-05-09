#include "header.h"

int compareVersion(string version1, string version2)
{
    // Beginning index of each revision
    int rev_start1 = 0;
    int rev_start2 = 0;

    while (rev_start1 < version1.size() || rev_start2 < version2.size())
    {
        // Default value of the current revision is 0
        int rev1 = 0;
        int rev2 = 0;

        // If still has legitimate value for string 1
        if (rev_start1 < version1.size())
        {
            int rev_end1 = version1.find('.', rev_start1);
            rev_end1 = (rev_end1 != version1.npos ? rev_end1 : version1.size());
            rev1 = atoi(version1.substr(rev_start1, rev_end1 - rev_start1).c_str());
            rev_start1 = rev_end1 + 1;
        }

        // If still has legitimate value for string 2
        if (rev_start2 < version2.size())
        {
            int rev_end2 = version2.find('.', rev_start2);
            rev_end2 = (rev_end2 != version2.npos ? rev_end2 : version2.size());
            rev2 = atoi(version2.substr(rev_start2, rev_end2 - rev_start2).c_str());
            rev_start2 = rev_end2 + 1;
        }

        if (rev1 > rev2)
        {
            return 1;
        }
        else if (rev2 > rev1)
        {
            return -1;
        }
    }

    return 0;
}