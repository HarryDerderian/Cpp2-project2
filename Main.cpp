#include "DonorList.h"
#include "Interface.h"
#include "InputHandler.h"

using namespace std;

int main()
{
    DonorList aDonorList;
    getDonorData(aDonorList);
    if (!aDonorList.isEmpty())
    {
        displayMenu();
        processSelection(aDonorList);
    }

    return 0;
}