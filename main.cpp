#include <iostream>

using namespace std;

int main()
{
    string answer;
    int age;
    int P;      // Path
    double BF;  // Body Fat
    int done;

    cout << "\t\t\t***************************" << endl;
    cout << "\t\t\t  WELCOME TO: GET FIT NOW! " << endl;
    cout << "\t\t\t***************************" << endl;
    cout << endl;

    cout << "Are you ready to get fit? ";
    cin >> answer;

    if(answer == "Yes" || answer == "yes"){
        cout << "Lets get started!" << endl;
    }else{
        cout << "Don't be a weakling!" << endl;
        return 0;
    }
    cout << endl;

    cout << "How old are you? ";
    cin >> age;

    cout << "Current bodyfat percentage? ";
    cin >> BF;
    cout << endl;

    cout << "Follow these steps to GREATNESS!" << endl;
    cout << "----------------------------------" << endl;
    cout << "Step 1: [100 - body fat percentage(BF)]/100 * weight = Lean Body Mass(LBM)" << endl;
    cout << "Step 2: (LBM) * 10 = Resting Metabolic State (RMR)" << endl;
    cout << "Step 3: (RMR) * .3 = Calorie Modification for Recovery (RMR2)" << endl;
    cout << "Step 4: RMR + CMR = Resting Metabolic Rate Modified for Recovery (RMR2)" << endl;
    cout << "Step 5: (RMR2) + 600 = Calorie Intake to Maintain Weight (CIM)" << endl;
    cout << endl;

    cout << "Are you wanting to gain mass? (PRESS 1) or get ripped? (PRESS 2)" << endl;
    cin >> P;
    while(P < 1 || P > 2){
        cout << "PRESS 1 OR 2" << endl;
        cin >> P;
    }
    cout << endl;
    cout << endl; // wanted more space in the program
    if(P == 1){
        cout << "Follow these steps to get MASSIVE!" << endl;
        cout << "-----------------------------------" << endl;
        cout << "REMEMBER a bulk should NEVER go past 1yr unless you want a big gut." << endl;
        cout << endl;
        cout << "If your BF is greater than 20% add 10% of (CIM)" << endl;
        cout << "If your BF is between 20% & 10% add 15% of (CIM)" << endl;
        cout << "If your BF is less than 10% add 20% of (CIM)" << endl;
        cout << endl;
        cout << "EXAMPLE: Mike's BF is 8%, which is less than 10%, so:" << endl;
        cout << "2,633.3 calories(CIM) + 526.64 calories(20% of CIM) = 3,159.84 calories" << endl;
        cout << "Then round up to a even number." << endl;
        cout << "In the example above to bulk Mike's calories he needs to bulk is 3,200." << endl;
    }else{
        cout << "Follow these steps to get RIPPED!" << endl;
        cout << "----------------------------------" << endl;
        cout << "If BF is more than 20%: CIM - 20% of (CIM)" << endl;
        cout << "If BF is between 20% and 10%: CIM - 15% of (CIM)" << endl;
        cout << "If BF is less than 10%: CIM - 10% of (CIM)" << endl;
        cout << endl;
        cout << "EXAMPLE: Mike's BF is between 10% and 20%, so:" << endl;
        cout << "2,798.3 calories(CIM) - 279.83 calories(10% of CIM) = 2,518.47 calories" << endl;
        cout << "Round down to: 2,400 calories" << endl;
        cout << "Round down to a even number." << endl;
        cout << "In the example above to get ripped Mike's calories needs to be at 2,400." << endl;
    }
    cout << endl;
    cout << "When finished with this program (PRESS 0)" << endl;
    cin >> done;
    while(done != 0){
        cout << "Press 0 to exit" << endl;
        cin >> done;
    }

    return 0;
}
